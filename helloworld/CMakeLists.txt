cmake_minimum_required(VERSION 3.0)
project(test_systemc)

find_package(SystemCLanguage CONFIG REQUIRED)
set (CMAKE_CXX_STANDARD ${SystemC_CXX_STANDARD})

add_executable(hello_systemc main.cpp)
target_link_libraries(hello_systemc SystemC::systemc)
