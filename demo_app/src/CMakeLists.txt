add_library (calculator_lib Calculator.cpp Calculator.h)
add_executable (calculator_app main.cpp)
target_link_libraries (calculator_app calculator_lib)
