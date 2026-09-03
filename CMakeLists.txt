cmake_minimum_required(VERSION 3.17)

project(softcar_gdextension LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(GODOT_CPP_DIR ${CMAKE_CURRENT_SOURCE_DIR}/cpp/godot-cpp)

if(NOT EXISTS ${GODOT_CPP_DIR}/CMakeLists.txt)
    message(FATAL_ERROR "godot-cpp submodule missing")
endif()

add_subdirectory(${GODOT_CPP_DIR} ${CMAKE_BINARY_DIR}/godot-cpp)

add_library(softcar SHARED
    cpp/register_types.cpp
    cpp/vehicle/VehicleController.cpp
)

target_include_directories(softcar PRIVATE cpp)
target_link_libraries(softcar PRIVATE godot-cpp)
