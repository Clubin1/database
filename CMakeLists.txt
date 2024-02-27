cmake_minimum_required(VERSION 3.10)
project(kv_storage)

set(CMAKE_CXX_STANDARD 11)

include_directories(include)

add_executable(kv_storage src/main.cpp src/KeyValueStore.cpp)