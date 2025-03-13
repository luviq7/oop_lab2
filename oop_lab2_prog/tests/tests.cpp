#include "lab2.h"
#include <gtest/gtest.h>

TEST(ShiftLeft, TestCornerCases) {
    // 0 -> 0
    EXPECT_EQ(ShiftLeft(0b00000000000000000000000000000000, 0), 0b00000000000000000000000000000000U);

    // test max unsigned int
    EXPECT_EQ(ShiftLeft(0b11111111111111111111111111111111U, 0), 0b11111111111111111111111111111111U);

    // 32bit zsuv
    EXPECT_EQ(ShiftLeft(0b10101011110011011110111100010010U, 32), 0b10101011110011011110111100010010U);
}

TEST(ShiftLeft, TestValidInput) {
    // 1 -> 1
    EXPECT_EQ(ShiftLeft(0b0001, 1), 0b0010U);

    // 1 -> 31
    EXPECT_EQ(ShiftLeft(0b00000000000000000000000000000001, 31), 0b10000000000000000000000000000000U);

    // cycle zsuv
    EXPECT_EQ(ShiftLeft(0b1011101010101010, 16), 0b1010101010111010U);

    // >32bit zsuv
    EXPECT_EQ(ShiftLeft(0b1101, 36), ShiftLeft(0b1101, 4));
}

#ifndef NDEBUG
TEST(ShiftLeft, TestAssertTrigger) {
    EXPECT_DEATH(ShiftLeft(UINT_MAX + 1, 1), ".*");
}
#endif

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}