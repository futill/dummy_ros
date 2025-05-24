from setuptools import find_packages
from setuptools import setup

setup(
    name='dummy2_interface',
    version='0.0.0',
    packages=find_packages(
        include=('dummy2_interface', 'dummy2_interface.*')),
)
