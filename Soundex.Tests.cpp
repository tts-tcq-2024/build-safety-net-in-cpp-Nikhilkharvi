#include <gtest/gtest.h>
#include "Soundex.h"
#include "Soundex.cpp"

TEST(SoundexTest, isPrevLetterHWYPass ) {
    EXPECT_TRUE(isPrevLetterHWY("tymczak", 2));
}
