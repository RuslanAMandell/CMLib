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
)

# Create the executable
add_executable(main ${SOURCES})
