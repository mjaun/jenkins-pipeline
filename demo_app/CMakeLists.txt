cmake_minimum_required (VERSION 2.8)

project (CALCULATOR)

# Enable C++11 globally
set (CMAKE_CXX_STANDARD 11)

# Set output directories
set (CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set (CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin) 

# Include application
add_subdirectory (src)

# Include tests
add_subdirectory (lib/googletest/googletest)
add_subdirectory (test)

enable_testing ()
add_test (NAME calculator_test COMMAND bin/calculator_test)
