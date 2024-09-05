#include <gtest/gtest.h>
#include "Soundex.h"
#include "Soundex.cpp"

bool isPrevLetterHWY(const std::string& name, size_t& i);
char getSoundexCode(char c);
void generateSoundexForPrevLetterHWY(const std::string& name, size_t& i, std::string& soundex, char& lastCode);
void generateSoundexForCurrentLetter(const std::string& name, size_t& i, std::string& soundex, char& previousCode);
void handleSoundexLengthFour(std::string& soundex);
void generateSoundexForLetter(const std::string& name, size_t& i, std::string& soundex, char& previousCode, char& lastCode);
void handleSoundex(std::string& soundex, const std::string& name);
std::string generateSoundex(const std::string& name);

TEST_F(SoundexTest, isPrevLetterHWYPass) {
  std::string name = "Tymczak";
  size_t i = 2;
  bool result = isPrevLetterHWY(name, i);
  EXPECT_FALSE(result);
}
