#include <stdio.h>
#include <gtest/gtest.h>
#include <vector>
#include <iostream>

using namespace std;

TEST(aaa,bbb)
{
    ASSERT_EQ(1,2);
}


int main(int argc, char* argv[])
{
    testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}
