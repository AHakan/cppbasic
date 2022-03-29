#include <gtest/gtest.h>

#include "../include/math_class.h"

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
  // Expect two strings not to be equal.
  EXPECT_STRNE("hello", "world");
  // Expect equality.
  EXPECT_EQ(7 * 6, 42);
}

TEST(MathClassTest, HandlesZeroInput) {
  MathClass math;

  EXPECT_EQ(math.Square(0), 0);
}

// Demonstrate some basic assertions.
TEST(MathClassTest, MathBasicAssetions) {
  MathClass math;

  EXPECT_EQ(math.Square(5), 25);
}

