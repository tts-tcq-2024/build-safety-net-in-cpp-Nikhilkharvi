#include <gtest/gtest.h>
#include "Soundex.h"


TEST(SoundexTest, isPrevLetterHWYPass ) {
    EXPECT_TRUE(isPrevLetterHWY ("tymczak", 2));
}
