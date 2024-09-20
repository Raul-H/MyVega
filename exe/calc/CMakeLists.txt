add_executable( calc src/calc.cpp )

target_include_directories( calc PRIVATE 
    ${PATH_MODULES}/add/include
    ${PATH_MODULES}/multiply/include )

target_link_libraries(calc PRIVATE add multiply)