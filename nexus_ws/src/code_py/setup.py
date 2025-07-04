from setuptools import find_packages, setup
import os
from glob import glob

package_name = 'code_py'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    include_package_data=True,
    package_data={
        'code_py': ['templates/*.html'],  # Incluye los .html manualmente
    },
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),


        # launch.py
        (os.path.join('share', package_name, 'launch'), glob('launch/*.launch.py')),



    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='leyla',
    maintainer_email='lipaleyla9@gmail.com',
    description='TODO: Package description',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [

            'motor_control=code_py.motor_control:main',
            'actuator_control=code_py.actuator_control:main',

            'jetpack_api=code_py.jetpack_api:main'
        ],
    },
)
