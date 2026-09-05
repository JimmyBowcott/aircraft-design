cmake_minimum_required(VERSION 3.20)

project(aircraft_design
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_subdirectory(core)

add_executable(aircraft_design main.cpp)

target_link_libraries(aircraft_design
    PRIVATE aircraft_core
)
