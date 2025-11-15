#include <gtest/gtest.h>
#include "../include/calculator.h"

TEST(IntegrationTest, AddAndDivide) {
    Calculator c;
    double sum = c.add(8, 2);
    double result = c.divide(sum, 2);
    EXPECT_EQ(result, 5);
}
