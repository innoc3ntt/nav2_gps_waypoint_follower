from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch_ros.actions import LifecycleNode
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration

import os


def generate_launch_description():
    share_dir = get_package_share_directory("nav2_gps_waypoint_follower_demo")
    parameter_file = LaunchConfiguration("params_file")
    node_name = "gps_waypoint_follower_demo"

    params_declare = DeclareLaunchArgument(
        "params_file",
        default_value=os.path.join(share_dir, "params", "demo_gps_waypoints.yaml"),
        description="FPath to the ROS2 parameters file to use.",
    )

    driver_node = LifecycleNode(
        package="nav2_gps_waypoint_follower_demo",
        executable="gps_waypoint_follower_demo",
        name=node_name,
        namespace="",
        output="screen",
        parameters=[parameter_file],
    )

    return LaunchDescription(
        [
            params_declare,
            driver_node,
        ]
    )
