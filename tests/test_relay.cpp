#include "gtest/gtest.h"
#include "../includes/relay.h"


class RelayTestFixture : public ::testing::Test {
protected:
    
    // SetUp() will be called before each test
    void SetUp() override {
    }

    // TearDown() will be called after each test
    void TearDown() override {
    }

    Relay relay;

};


TEST_F(RelayTestFixture, Test1) {
    EXPECT_EQ(true, relay.get_status());
}
