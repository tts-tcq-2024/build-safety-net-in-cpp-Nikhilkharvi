#include <gtest/gtest.h>
#include "Soundex.h"


TEST(SoundexTest, isPrevLetterHWYPass ) {
    assertTrue(isPrevLetterHWY ("tymczak", 2));
}
