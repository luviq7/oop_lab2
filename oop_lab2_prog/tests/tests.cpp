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



TEST(ShiftLeft, TestAssertTrigger) {
    EXPECT_DEBUG_DEATH(
        {
            EXPECT_EQ(ShiftLeft(UINT_MAX + 1, 1), 0);
        }, ".*");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}