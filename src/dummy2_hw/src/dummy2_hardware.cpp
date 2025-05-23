#include "hardware_interface/system_interface.hpp"
#include "hardware_interface/types/hardware_interface_return_values.hpp"
#include "rclcpp/rclcpp.hpp"
#include "rclcpp_lifecycle/node_interfaces/lifecycle_node_interface.hpp"
#include "sensor_msgs/msg/joint_state.hpp"  
#include "dummy2_interface/srv/init_can2eth.hpp"  
#include "dummy2_interface/srv/write_can2eth.hpp" 
#include "dummy2_interface/srv/read_can2eth.hpp"
#include <vector>
#include <string>
#include <memory>
#include <sstream>

using CallbackReturn = rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn;

class Dummy2Hardware : public hardware_interface::SystemInterface
{
public:
    CallbackReturn on_init(const hardware_interface::HardwareInfo & info) override
    {
        if (hardware_interface::SystemInterface::on_init(info) != CallbackReturn::SUCCESS) {
            return CallbackReturn::ERROR;
        }

        // Initialize joint states and commands
        init_varibles();
        // Initialize ROS 2 node and publisher
        node_ = std::make_shared<rclcpp::Node>("dummy2_hardware_node");
        // Initialize service client
        init_can2eth_ = node_->create_client<dummy2_interface::srv::InitCan2eth>("init_can2eth");
        write_can2eth_ = node_->create_client<dummy2_interface::srv::WriteCan2eth>("write_can2eth");
        read_can2eth_ = node_->create_client<dummy2_interface::srv::ReadCan2eth>("read_can2eth");

        // Wait for the service to be available
        if (!init_can2eth_->wait_for_service(std::chrono::seconds(5))) {
            RCLCPP_ERROR(rclcpp::get_logger("Dummy2Hardware"), "Service not available after waiting");
            return CallbackReturn::ERROR;
        }
        if (!write_can2eth_->wait_for_service(std::chrono::seconds(5))) {
            RCLCPP_ERROR(rclcpp::get_logger("Dummy2Hardware"), "WriteCan2eth Service not available after waiting");
            return CallbackReturn::ERROR;
        }
        if (!read_can2eth_->wait_for_service(std::chrono::seconds(5))) {
            RCLCPP_ERROR(rclcpp::get_logger("Dummy2Hardware"), "ReadCan2eth Service not available after waiting");
            return CallbackReturn::ERROR;
        }
        // Call the init_can2eth service
        init_can2eth("start");

        RCLCPP_INFO(rclcpp::get_logger("Dummy2Hardware"), "Initialized!");
        return CallbackReturn::SUCCESS;
    }

    std::vector<hardware_interface::StateInterface> export_state_interfaces() override
    {
        std::vector<hardware_interface::StateInterface> state_interfaces;

        for (size_t i = 0; i < info_.joints.size(); ++i) {
            state_interfaces.emplace_back(info_.joints[i].name, "position",
                                        &joint_positions_[i]);
            state_interfaces.emplace_back(info_.joints[i].name, "velocity",
                                        &joint_velocities_[i]);
        }

        return state_interfaces;
    }

    std::vector<hardware_interface::CommandInterface> export_command_interfaces() override
    {
        std::vector<hardware_interface::CommandInterface> command_interfaces;
        for (size_t i = 0; i < info_.joints.size(); ++i) {
            command_interfaces.emplace_back(info_.joints[i].name, "position",
                                            &joint_position_commands_[i]);
            command_interfaces.emplace_back(info_.joints[i].name, "velocity",
                                            &joint_velocity_commands_[i]);
        }

        return command_interfaces;
    }

    CallbackReturn on_activate(const rclcpp_lifecycle::State& previous_state) override
    {
        //put acuators to loop mode
        init_can2eth("active");
        RCLCPP_INFO(rclcpp::get_logger("Dummy2Hardware"), "Activated!");
        return CallbackReturn::SUCCESS;
    }

    CallbackReturn on_deactivate(const rclcpp_lifecycle::State& /*previous_state*/)override
    {
        RCLCPP_INFO(rclcpp::get_logger("Dummy2Hardware"), "Deactivating hardware interface...");
        init_can2eth("deactive");
        return CallbackReturn::SUCCESS;
    }

    hardware_interface::return_type read(const rclcpp::Time & /*time*/, const rclcpp::Duration & /*period*/) override
    {
        read_can2eth(actuator_positions_, actuator_velocities_);
        for (size_t i = 0; i < info_.joints.size(); ++i) {
            // apply offsets, convert from deg to rad for moveit
            joint_positions_[i] = degToRad(actuator_positions_[i] + joint_offsets_[i]);
            // RCLCPP_INFO(rclcpp::get_logger("Dummy2Hardware"), "joint_positions: %f", joint_positions_[i]);
            joint_velocities_[i] = 0.1;//degToRad(actuator_velocities_[i]);
        }

        return hardware_interface::return_type::OK;
    }

    hardware_interface::return_type write(const rclcpp::Time & /*time*/, const rclcpp::Duration & /*period*/) override
    {
        for (size_t i = 0; i < info_.joints.size(); ++i) {
            // convert from rad to deg, apply offsets
            actuator_pos_commands_[i] =
                radToDeg(joint_position_commands_[i]) - joint_offsets_[i];
            actuator_vel_commands_[i] = radToDeg(joint_velocity_commands_[i]);
        }
        write_can2eth(actuator_pos_commands_, actuator_vel_commands_,
                        actuator_positions_, actuator_velocities_);

        return hardware_interface::return_type::OK;
    }

private:

    bool read_can2eth(std::vector<double>& joint_positions,
                          std::vector<double>& joint_velocities)
    {
        auto request = std::make_shared<dummy2_interface::srv::ReadCan2eth::Request>();
        request->index = "read";

        auto future_result = read_can2eth_->async_send_request(request);
        if (rclcpp::spin_until_future_complete(node_, future_result) == rclcpp::FutureReturnCode::SUCCESS)
        {
            joint_positions = future_result.get()->pos_commands;
            // joint_velocities = future_result.get()->vel_commands;
            
            return true;
        }
        else
        {
            RCLCPP_ERROR(rclcpp::get_logger("Dummy2Hardware"), "Failed to call service read_can2eth");
            return false;
        }
        return true;
    }
    
    bool write_can2eth(std::vector<double>& pos_commands,
                          std::vector<double>& vel_commands,
                          std::vector<double>& joint_positions,
                          std::vector<double>& joint_velocities)
    {

        auto request = std::make_shared<dummy2_interface::srv::WriteCan2eth::Request>();
        request->pos_commands = pos_commands;
        request->vel_commands = vel_commands;

        auto future_result = write_can2eth_->async_send_request(request);
        if (rclcpp::spin_until_future_complete(node_, future_result) == rclcpp::FutureReturnCode::SUCCESS)
        {
            return true;
        }
        else
        {
            RCLCPP_ERROR(rclcpp::get_logger("Dummy2Hardware"), "Failed to call service write_can2eth");
            return false;
        }
        return true;

    }

    void init_can2eth(const std::string & action)
    {
        auto request = std::make_shared<dummy2_interface::srv::InitCan2eth::Request>();
        request->action = action;

        auto future_result = init_can2eth_->async_send_request(request);
        if (rclcpp::spin_until_future_complete(node_, future_result) == rclcpp::FutureReturnCode::SUCCESS)
        {
            RCLCPP_INFO(rclcpp::get_logger("Dummy2Hardware"), "Service call success: %d", future_result.get()->success);
        }
        else
        {
            RCLCPP_ERROR(rclcpp::get_logger("Dummy2Hardware"), "Failed to call service init_can2eth");
        }
    }
    double degToRad(double deg) { return deg / 180.0 * M_PI; };
    double radToDeg(double rad) { return rad / M_PI * 180.0; };

    void init_varibles()
    {
        // Initialize joint states and commands
        int num_joints = info_.joints.size();
        actuator_pos_commands_.resize(num_joints);
        actuator_vel_commands_.resize(num_joints);
        actuator_positions_.resize(num_joints);
        actuator_velocities_.resize(num_joints);
        joint_positions_.resize(num_joints);
        joint_velocities_.resize(num_joints);
        joint_efforts_.resize(num_joints);
        joint_position_commands_.resize(num_joints);
        joint_velocity_commands_.resize(num_joints);
        joint_effort_commands_.resize(num_joints);
        joint_offsets_.resize(num_joints);
        for (int i = 0; i < num_joints; ++i) {
            joint_offsets_[i] = 0.0;
                // std::stod(info_.joints[i].parameters["position_offset"]);
        }
    }

    std::vector<double> actuator_pos_commands_;
    std::vector<double> actuator_vel_commands_;
    std::vector<double> actuator_positions_;
    std::vector<double> actuator_velocities_;

    // Shared memory
    std::vector<double> joint_offsets_;
    std::vector<double> joint_positions_;
    std::vector<double> joint_velocities_;
    std::vector<double> joint_efforts_;
    std::vector<double> joint_position_commands_;
    std::vector<double> joint_velocity_commands_;
    std::vector<double> joint_effort_commands_;

    std::shared_ptr<rclcpp::Node> node_;  // ROS 2 node
    rclcpp::Client<dummy2_interface::srv::InitCan2eth>::SharedPtr init_can2eth_;  // Service client
    rclcpp::Client<dummy2_interface::srv::WriteCan2eth>::SharedPtr write_can2eth_;  // Service client
    rclcpp::Client<dummy2_interface::srv::ReadCan2eth>::SharedPtr read_can2eth_;  // Service client

};

#include "pluginlib/class_list_macros.hpp"
PLUGINLIB_EXPORT_CLASS(Dummy2Hardware, hardware_interface::SystemInterface)
