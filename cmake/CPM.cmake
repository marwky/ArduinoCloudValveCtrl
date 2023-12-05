# File: CPM.cmake

# CPM (CMake Project Manager) script
# Source: https://github.com/cpm-cmake/CPM.cmake

if(NOT EXISTS "${CMAKE_CURRENT_LIST_DIR}/cmake/CPM.cmake")
  message(STATUS "Downloading CPM.cmake from https://github.com/cpm-cmake/CPM.cmake")
  file(DOWNLOAD
    "https://raw.githubusercontent.com/cpm-cmake/CPM.cmake/master/cmake/CPM.cmake"
    "${CMAKE_CURRENT_LIST_DIR}/cmake/CPM.cmake"
    EXPECTED_HASH SHA256=ab40a1e96f6fba195ab78b237c5b23df1f3a2d1123dc459b58e71fb79a495898
    SHOW_PROGRESS
    )
endif()

include("${CMAKE_CURRENT_LIST_DIR}/cmake/CPM.cmake")
