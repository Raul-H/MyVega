#include "MyVega/multiply.hpp"
#include "MyVega/multiply/Multiplication.hpp"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

TEST( Multiply, test_miltyply )
{
    arith::Multiplication mul;
    EXPECT_DOUBLE_EQ( mul.compute(10, 5), 50 );
}

TEST( Multiply, test_commutative )
{
    arith::Multiplication mul;
    EXPECT_DOUBLE_EQ( mul.compute( -6, -7 ), mul.compute( -7, -6 ) );
}