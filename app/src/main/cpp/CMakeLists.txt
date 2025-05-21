cmake_minimum_required(VERSION 3.22.1)
project("edgedetector")

find_package(OpenCV REQUIRED)
add_library(native-lib SHARED native-lib.cpp)
target_link_libraries(native-lib OpenCV::opencv_java4)