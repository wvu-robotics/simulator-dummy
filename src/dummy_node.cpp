// -*-c++-*-
//-----------------------------------------------------------------------------
/**
 * @file  dummy_node.hpp
 *
 * <br>@b Author(s):    Jared Strader
 * <br>@b Date:         5/27/20
 *
 */
//-----------------------------------------------------------------------------

#include <ros/ros.h>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "dummy_node");

  ROS_INFO("Running dummy_node...");

  //print prime numbers for fun
  int n = 2;
  while(ros::ok()) {
    bool is_prime = true;
    for(int i=2; i<= n/2; i++) {
      if(n % i == 0) {
        is_prime = false;
        break;
      }
    }
    if(is_prime) {
      ROS_INFO("%i", n);
    }
    n++;
  }

	return 0;
}
