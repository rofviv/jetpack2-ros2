from setuptools import find_packages
from setuptools import setup

setup(
    name='ucb_interface',
    version='0.0.0',
    packages=find_packages(
        include=('ucb_interface', 'ucb_interface.*')),
)
