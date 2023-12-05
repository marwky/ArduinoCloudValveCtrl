cmake_minimum_required(VERSION 3.15)
project(YourProjectName)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11) # Change this according to your needs

# Include CPM.cmake
include(cmake/CPM.cmake)

CPMAddPackage(
    NAME googletest
    GITHUB_REPOSITORY google/googletest
    GIT_TAG release-1.11.0  # Check for the latest release on GitHub
)

add_subdirectory(tests)
add_subdirectory(src)

