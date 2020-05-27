cmake_minimum_required(VERSION 3.0)
project(simulator_dummy VERSION 1.0.0 LANGUAGES CXX)

SET(CMAKE_CXX_FLAGS "-O3 -std=c++11")

########################
######Dependencies######
########################
find_package(catkin REQUIRED COMPONENTS
  roscpp
)

catkin_package(
  CATKIN_DEPENDS roscpp
)

include_directories(
  include
  ${catkin_INCLUDE_DIRS}
)

##########################
#######EXECUTABLES########
##########################
add_executable(dummy_node src/dummy_node.cpp)
target_link_libraries(dummy_node
  ${catkin_LIBRARIES}
)
