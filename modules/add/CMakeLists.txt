add_library( add ${CMAKE_CURRENT_SOURCE_DIR}/src/Addition.cpp )

target_include_directories( add PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include )

add_executable( test_Addition ${CMAKE_CURRENT_SOURCE_DIR}/test/t_Addition.cpp )
target_include_directories( test_Addition PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include )

target_link_libraries( test_Addition PRIVATE
    GTest::gtest_main
    GTest::gmock
    add
)

add_test( test_Addition test_Addition )

add_executable( bench_Addition ${CMAKE_CURRENT_SOURCE_DIR}/bench/b_Addition.cpp )
target_include_directories( bench_Addition PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include )
target_link_libraries( bench_Addition PRIVATE benchmark::benchmark_main add )