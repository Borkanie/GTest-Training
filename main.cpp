#include <iostream>
#include <gtest/gtest.h>

using namespace std;

class MyClass{
    private:
        string id;
    public: 
        MyClass(string _id) : id(_id) {}
        string GetId(){ return this->id; }
};

TEST(MyClassTest,SubTest_1){
    
    // Arrange
    MyClass act("Daddy");

    // Act
    string value = act.GetId();

    // Assert
    //Fails
    //ASSERT_EQ(value.c_str(),"Daddy");
    //works
    ASSERT_STREQ(value.c_str(),"Daddy");
}


TEST(TestName, Subtest_1){
    // Arrange
    int value = 100;
    int increment = 5;

    // Act
    value += increment;

    // Assert
    ASSERT_EQ(value,105);
    ASSERT_EQ(increment,5);
}

TEST(TestName, Subtest_2){
    // Arrange
    int value = 100;
    int increment = 5;

    // Act
    value += increment;

    // Assert
    ASSERT_EQ(value,105);
    ASSERT_EQ(increment,5);
}


int main(int argc,char** argv){
    testing::InitGoogleTest(&argc,argv);
    cout<<"Works";
    return RUN_ALL_TESTS();
}