cmake_minimum_required(VERSION 3.10)
project(Machine_Learning_Library_C C)

# Add include directory
include_directories(include)

# Add the source files
set(SOURCES
    examples/main.c
    src/vector.c
    src/matrix.c
    src/ml_algorithms.c
    src/utils.c
)

# Create the executable
add_executable(main ${SOURCES})

# Link the math library
target_link_libraries(main m)
