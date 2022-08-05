#设置最低版本要求
cmake_minimum_required(VERSION 3.0) 

project(swap)

#设置文件目录
include_directories(include)

#添加可执行文件
add_executable(main_cmake main.cpp src/swap.cpp)