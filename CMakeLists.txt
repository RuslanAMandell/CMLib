cmake_minimum_required(VERSION 3.10)
project(MachineLearningLibrary C)

# Add the include directory for public headers
include_directories(include)

# Specify the source files for the library
set(SOURCES
    src/vector.c
    src/matrix.c
    src/ml_algorithms.c
    src/utils.c
)

# Create the static and shared libraries
add_library(ml_library_static STATIC ${SOURCES})
add_library(ml_library_shared SHARED ${SOURCES})

# Link math library if needed
target_link_libraries(ml_library_static m)
target_link_libraries(ml_library_shared m)

# Set the output names for the libraries
set_target_properties(ml_library_static PROPERTIES OUTPUT_NAME "ml_library")
set_target_properties(ml_library_shared PROPERTIES OUTPUT_NAME "ml_library" VERSION 1.0 SOVERSION 1)

# Install rules for headers and libraries
install(TARGETS ml_library_static ml_library_shared
    ARCHIVE DESTINATION lib
    LIBRARY DESTINATION lib
)
install(DIRECTORY include/ DESTINATION include)
