# tests/CMakeLists.txt

cmake_minimum_required(VERSION 3.16)

project(UnitTests)

# List your source files for the library
set(SOURCES
    test_main.cpp
    test_my_math.cpp
    test_valve.cpp
    )

add_executable(tests ${SOURCES})

# Link the test executable with your library and Google Test
target_link_libraries(tests PRIVATE 
    my_math
    gtest)

# Include directories for the tests
target_include_directories(tests PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

# Automatically discover and register tests
include(GoogleTest)
gtest_discover_tests(tests)
