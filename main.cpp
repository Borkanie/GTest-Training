#include <iostream>
#include <gtest/gtest.h>

using namespace std;

TEST(TestName, Subtest_1){
    ASSERT_EQ(1,2);
    cout<<"ASSERT stops execution on fail"<<endl;
}

TEST(TestName, Subtest_2){
    EXPECT_EQ(1,2);
    cout<<"EXPECT doesn't stop execution on fail"<<endl;
}

int main(int argc,char** argv){
    testing::InitGoogleTest(&argc,argv);
    cout<<"Works";
    return RUN_ALL_TESTS();
}