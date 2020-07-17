cmake_minimum_required(VERSION 3.0)
project(systemc_adder)

find_package(SystemCLanguage CONFIG REQUIRED)
set (CMAKE_CXX_STANDARD ${SystemC_CXX_STANDARD})

file(GLOB src_files
    "*.h"
    "*.cpp"
)

add_executable(adder ${src_files})
target_link_libraries(adder SystemC::systemc)
