from setuptools import setup

package_name = 'my_first_pkg'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],  # Only one packages argument
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        # For Python-only package, do not include msg/ folder here
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='luscifer',
    maintainer_email='luscifer@todo.todo',
    description='TODO: Package description',
    license='MIT',
    extras_require={
        'test': ['pytest'],
    },
    entry_points={
        'console_scripts': [
            'my_node = my_first_pkg.my_node:main',
            'my_sub = my_first_pkg.my_subscriber:main',
	    'my_service_server = my_first_pkg.my_service_server:main',
	    'my_service_client = my_first_pkg.my_service_client:main',
	    'my_params = my_first_pkg.my_params:main',
        ],
    },
)
