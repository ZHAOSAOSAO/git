#设置最低版本要求
cmake_minimum_required(VERSION 3.0) 

project(soldier_gun)

#追加编译选项
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -O2 -Wall")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

#设置生成可调试文件
set(CMAKE_BUILD_TYPE Debug)

#设置文件目录
include_directories(include)

#添加可执行文件
add_executable(soldier_gun_exe main.cpp src/Gun.cpp src/Soldier.cpp)