#include <gtest/gtest.h>
#include "../src/math_functions.h"

// Тест для функції Sum
TEST(MathFunctionsTest, SumTest) {
    EXPECT_EQ(Sum(2, 3), 5);
    EXPECT_EQ(Sum(-1, 1), 0);
}

// Тест для функції Multiply
TEST(MathFunctionsTest, MultiplyTest) {
    EXPECT_EQ(Multiply(3, 4), 12);
    EXPECT_EQ(Multiply(-2, 5), -10);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
