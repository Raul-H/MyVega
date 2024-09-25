#cmake_minimum_required(VERSION 3.14)
#project(sample_cpp_project)
#
#add_executable(main src/main.cpp src/my_add.cpp)
#
#include(FetchContent)
#FetchContent_Declare(
#    googletest
#    GIT_REPOSITORY https://github.com/google/googletest.git
#    GIT_TAG v1.15.2
#)
#FetchContent_MakeAvailable(googletest)
#
#
#enable_testing()
#add_executable(tests tests/test_add.cpp src/my_add.cpp)
#target_include_directories(test  )
#target_link_libraries(tests gtest_main)


cmake_minimum_required( VERSION 3.20 )
project( MyVega )

#setup global variables
SET( PATH_MODULES ${CMAKE_SOURCE_DIR}/modules )

#include scripts
SET( CMAKE_SCRIPTS ${CMAKE_SOURCE_DIR}/cmake )
include( ${CMAKE_SCRIPTS}/googletest.cmake )

#run scripts
include_googletest()

#build project
add_subdirectory( exe )
add_subdirectory( modules )