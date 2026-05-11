cmake_minimum_required(VERSION 3.20)

project(RealtimeVisionTrackingFramework)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

find_package(OpenCV REQUIRED)

add_executable(rvf src/main.cpp)

target_link_libraries(rvf PRIVATE ${OpenCV_LIBS})

target_include_directories(rvf PRIVATE ${OpenCV_INCLUDE_DIRS})