add_library(aircraft_core
    src/design_requirements.cpp
    src/configuration.cpp
    src/aircraft_design.cpp
    src/solver.cpp
)

target_include_directories(aircraft_core
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)
