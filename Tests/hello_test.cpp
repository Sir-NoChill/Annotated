//
// Created by ayrton on 22/03/23.
//
#include <gtest/gtest.h>

class Sample_classTest : public ::testing::Test {
protected:
    void SetUp() override {

    }
};



TEST(Test_test, test) {
    EXPECT_EQ(1, 1);
}