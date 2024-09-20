#include <iostream>

#include "MyVega/add.hpp"
#include "MyVega/add/Addition.hpp"
#include "MyVega/multiply.hpp"


int main()
{
    arith::Addition add;
    arith::Multiplication mul;

    std::cout << add.compute(5.0, 5.0 ) << std::endl;
    //std::cout << mul.compute(5.0, 5.0 ) << std::endl;

    return 0;
}

