#include <gtest/gtest.h>
#include "Soundex.h"
#include "Soundex.cpp"

TEST_F(IsPrevLetterHWYTest, ReturnsFalseForNonHWY) {
  std::string name = "Tymczak";
  size_t i = 2;
  bool result = isPrevLetterHWY(name, i);
  EXPECT_FALSE(result);
}
