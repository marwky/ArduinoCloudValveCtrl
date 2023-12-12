#include "gtest/gtest.h"
#include "../includes/valve.h"


class ValveTestFixture : public ::testing::Test {
protected:
    
    // SetUp() will be called before each test
    void SetUp() override {
    }

    // TearDown() will be called after each test
    void TearDown() override {
    }

    Valve valve;

};


TEST_F(ValveTestFixture, Test1) {
    EXPECT_EQ(true, valve.get_status());
}
