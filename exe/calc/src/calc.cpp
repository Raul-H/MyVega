#include <iostream>

#include "MyVega/add.hpp"
#include "MyVega/multiply.hpp"


int main(int argc, char *argv[])
{
	if(argc != 3) 
	{
		std::cerr << "Provide exacly 2 arguments\n";
		return 1;
	}

    arith::Addition add;
    arith::Multiplication mul;

	int a = std::atoi(argv[1]);
	int b = std::atoi(argv[2]);

    std::cout << "Sum " << add.compute( a, b ) << std::endl;
    std::cout << "Mul " << mul.compute( a, b ) << std::endl;

    return 0;
}

