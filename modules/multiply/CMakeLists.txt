add_library( multiply ${CMAKE_CURRENT_SOURCE_DIR}/src/Multiplication.cpp )

target_include_directories( multiply PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include )

add_executable( test_Multiplication ${CMAKE_CURRENT_SOURCE_DIR}/test/t_Multiplication.cpp )
target_include_directories( test_Multiplication PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include )

target_link_libraries( test_Multiplication PRIVATE
    GTest::gtest_main
    GTest::gmock
    multiply
)

add_test( test_Multiplication test_Multiplication )