from setuptools import setup

package_name = 'hrdp_sensors_beta'

setup(
    name=package_name,
    version='1.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='skykongkong8',
    maintainer_email='kssjustin98@gmail.com',
    description='    This package is expected to collect all the sensor data, process it, filter it, log it and distribute it to subscribed distant package nodes.',
    license='TODO: License declaration : skykongkong8',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'sensors = hrdp_sensors_beta.sensors:main',
        ],
    },
)
