from setuptools import setup
import os
from glob import glob


package_name = 'dummy2_can2eth'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob('launch/*.launch.py')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='liyq',
    maintainer_email='11275496+xiaowen08@user.noreply.gitee.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'dummy2_can2eth_server = dummy2_can2eth.dummy2_can2eth_server:main',
            'arm_joy = dummy2_can2eth.arm_joy:main'
        ],
    },
)
