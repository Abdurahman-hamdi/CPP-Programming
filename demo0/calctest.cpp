#include "gtest/gtest.h"
#include"calc.hpp"
TEST(TEST_SUIT1,TESTCASE1)
{
    EXPECT_EQ(calc(5,5),10);
}

TEST(TEST_SUIT1,TESTCASE2)
{
    EXPECT_EQ(calc(4,4),8);
}
