include_directories (${CALCULATOR_SOURCE_DIR}/src ${GTEST_INCLUDE_DIRS})
add_executable (calculator_test TestCalculator.cpp)
target_link_libraries (calculator_test calculator_lib gtest_main)
