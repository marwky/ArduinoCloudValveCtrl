# src/CMakeLists.txt

# List your source files for the library
set(SOURCES
    my_math.cpp  # Replace with your actual source files
)

add_library(my_math ${SOURCES})

target_include_directories(my_math PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../includes)
