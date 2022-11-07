// Copyright (c) 2020 Fetullah Atas
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef NAV2_GPS_WAYPOINT_FOLLOWER_DEMO____GPS_WAYPOINT_LOGGER_HPP_
#define NAV2_GPS_WAYPOINT_FOLLOWER_DEMO____GPS_WAYPOINT_LOGGER_HPP_

#include "geographic_msgs/msg/geo_pose.hpp"
#include "rclcpp/rclcpp.hpp"
#include "rclcpp/subscription.hpp"
#include "sensor_msgs/msg/imu.hpp"
#include "sensor_msgs/msg/nav_sat_fix.hpp"
#include <mutex>

#include "message_filters/subscriber.h"
#include "message_filters/sync_policies/approximate_time.h"
#include "message_filters/synchronizer.h"
#include "tf2_geometry_msgs/tf2_geometry_msgs.h"
#include "yaml-cpp/emitter.h"

namespace nav2_gps_waypoint_follower_demo
{

  class GPSWaypointLogger : public rclcpp::Node
  {
  public:
    GPSWaypointLogger(/* args */);
    ~GPSWaypointLogger();

    /**
 * @brief Typedefs for shortnening Approx time Syncer initialization.
 *
 */
    typedef message_filters::sync_policies::ApproximateTime<sensor_msgs::msg::NavSatFix,
                                                            sensor_msgs::msg::Imu>
        SensorDataApprxTimeSyncPolicy;
    typedef message_filters::Synchronizer<SensorDataApprxTimeSyncPolicy> SensorDataApprxTimeSyncer;

  private:
    void timerCallback();

    void sensorDataCallback(
        const sensor_msgs::msg::NavSatFix::ConstSharedPtr &gps,
        const sensor_msgs::msg::Imu::ConstSharedPtr &imu);

    void dumpLoggedWaypoints();

    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<geographic_msgs::msg::GeoPose>::SharedPtr geopose_publisher_;
    message_filters::Subscriber<sensor_msgs::msg::NavSatFix> navsat_fix_subscriber_;
    message_filters::Subscriber<sensor_msgs::msg::Imu> imu_subscriber_;
    std::shared_ptr<SensorDataApprxTimeSyncer> sensor_data_approx_time_syncher_;

    sensor_msgs::msg::NavSatFix reusable_navsat_msg_;
    sensor_msgs::msg::Imu reusable_imu_msg_;

    std::vector<std::vector<double>> logged_waypoints_vector_;

    // to ensure safety when accessing global
    std::mutex global_mutex_;
    bool is_first_msg_recieved_;

    int frequency_;
    std::string yaml_file_out_;
  };

} // namespace nav2_gps_waypoint_follower_demo

#endif // NAV2_GPS_WAYPOINT_FOLLOWER_DEMO____GPS_WAYPOINT_LOGGER_HPP_
