#include <gtest/gtest.h>
#include "Soundex.h"

TEST_F(SoundexTest, isPrevLetterHWYPass) {
  std::string name = "Tymczak";
  size_t i = 2;
  bool result = isPrevLetterHWY(name, i);
  EXPECT_FALSE(result);
}
