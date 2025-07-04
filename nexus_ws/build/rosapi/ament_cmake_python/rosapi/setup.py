from setuptools import find_packages
from setuptools import setup

setup(
    name='rosapi',
    version='2.0.1',
    packages=find_packages(
        include=('rosapi', 'rosapi.*')),
)
