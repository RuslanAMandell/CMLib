cmake_minimum_required(VERSION 3.10)
project(CMLib C)

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
add_library(CMLib_static STATIC ${SOURCES})
add_library(CMLib_shared SHARED ${SOURCES})

# Link math library if needed
target_link_libraries(CMLib_static m)
target_link_libraries(CMLib_shared m)

# Set the output names for the libraries
set_target_properties(CMLib_static PROPERTIES OUTPUT_NAME "CMLib")
set_target_properties(CMLib_shared PROPERTIES OUTPUT_NAME "CMLib" VERSION 1.0 SOVERSION 1)

# Install rules for headers and libraries
install(TARGETS CMLib_static CMLib_shared
    ARCHIVE DESTINATION lib
    LIBRARY DESTINATION lib
)
install(DIRECTORY include/ DESTINATION include)
