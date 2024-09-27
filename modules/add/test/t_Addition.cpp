#include "MyVega/add.hpp"
#include <gmock/gmock.h>
#include <gtest/gtest.h>

TEST(Addition, test_sum)
{
    arith::Addition add;
    EXPECT_DOUBLE_EQ( add.compute(10, 5), 15 );
}

TEST(Addition, test_commutative)
{
    arith::Addition add;
    EXPECT_DOUBLE_EQ( add.compute(-6, 50), add.compute( 50,-6 ) );
}