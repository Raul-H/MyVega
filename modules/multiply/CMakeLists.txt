add_library( multiply ${CMAKE_CURRENT_SOURCE_DIR}/src/Multiplication.cpp )

target_include_directories( multiply PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include )