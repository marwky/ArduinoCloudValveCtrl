# src/CMakeLists.txt

set(SOURCES
    valve.cpp
    relay.cpp
    limit_switch.cpp
)

add_library(valve_controller ${SOURCES})

target_include_directories(valve_controller PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../includes)
