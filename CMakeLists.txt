cmake_minimum_required(VERSION 2.8)

PROJECT(binocular)

include_directories("./include/")
# include_directories("/usr/include/opencv2")
#set environment variable
set(CMAKE_BUILD_TYPE Release)#compile mode
set (CMAKE_CXX_FLAGS "-g -std=c++11 -Wformat=0 -Wall  ${CMAKE_CXX_FLAGS} ") 


# 寻找OpenCV库
find_package(OpenCV REQUIRED)
find_package(Qt5Widgets REQUIRED)
find_package(Qt5Test REQUIRED)
find_package(Qt5Concurrent REQUIRED)
find_package(Qt5OpenGL REQUIRED)
find_package(Eigen3 REQUIRED)
find_package(VTK REQUIRED)

add_executable(binocular ./src/main.cpp ./src/SemiGlobalMatching.cpp ./src/sgm_util.cpp)

#链接opencv库
target_link_libraries(binocular ${OpenCV_LIBS})

# Print some message showing some of them
message(STATUS "OpenCV library status:")
message(STATUS "    version: ${OpenCV_VERSION}")
message(STATUS "    libraries: ${OpenCV_LIBS}")
message(STATUS "    include path: ${OpenCV_INCLUDE_DIRS}")