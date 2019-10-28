cmake_minimum_required (VERSION 3.9)

include(config.cmake)

project(testcmpopt)
add_executable(testcmpopt testcmpopt.cc)

find_package(OpenMP)
if(OpenMP_CXX_FOUND)
    target_link_libraries(testcmpopt PUBLIC OpenMP::OpenMP_CXX)
endif()

set(CMAKE_VERBOSE_MAKEFILE on)  #  to see if it's all used
