// File: test_my_math.cpp
#include "gtest/gtest.h"
#include "../includes/my_math.h"

// Test case for the add function
TEST(AddTest, PositiveNumbers) {
    // Test inputs
    int a = 5;
    int b = 10;

    // Expected result
    int expected_sum = 15;

    // Call the function
    int result = add(a, b);

    // Check the result against the expected value
    ASSERT_EQ(expected_sum, result);
}
