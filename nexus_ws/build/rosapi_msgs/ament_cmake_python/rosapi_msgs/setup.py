from setuptools import find_packages
from setuptools import setup

setup(
    name='rosapi_msgs',
    version='2.0.1',
    packages=find_packages(
        include=('rosapi_msgs', 'rosapi_msgs.*')),
)
