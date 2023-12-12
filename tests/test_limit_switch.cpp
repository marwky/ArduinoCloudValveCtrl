#include "gtest/gtest.h"
#include "../includes/limit_switch.h"


class LimitSwitchTestFixture : public ::testing::Test {
protected:
    
    // SetUp() will be called before each test
    void SetUp() override {
    }

    // TearDown() will be called after each test
    void TearDown() override {
    }

    LimitSwitch limitSwitch;

};


TEST_F(LimitSwitchTestFixture, Test1) {
    EXPECT_EQ(true, limitSwitch.get_status());
}
