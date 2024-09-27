cmake_minimum_required( VERSION 3.20 )
project( MyVega )

#setup global variables
SET( PATH_MODULES ${CMAKE_SOURCE_DIR}/modules )

#include scripts
SET( CMAKE_SCRIPTS ${CMAKE_SOURCE_DIR}/cmake )
include( ${CMAKE_SCRIPTS}/googletest.cmake )
include( ${CMAKE_SCRIPTS}/benchmark.cmake )

#run scripts
include_googletest()
include_benchmark()

#build project
add_subdirectory( exe )
add_subdirectory( modules )