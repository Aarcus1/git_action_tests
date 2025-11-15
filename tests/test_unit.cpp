#include <gtest/gtest.h>
#include "../include/calculator.h"

TEST(UnitTest, AddFunction) {
    Calculator c;
    EXPECT_EQ(c.add(2, 3), 6);
}
