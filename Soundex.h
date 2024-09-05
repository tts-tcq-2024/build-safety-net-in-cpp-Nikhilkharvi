#ifndef SOUNDEX_H
#define SOUNDEX_H

#include <string>
#include "Soundex.cpp"

std::string generateSoundex(const std::string& name);
bool isPrevLetterHWY(const std::string& name, size_t& i);
char getSoundexCode(char c);
void generateSoundexForPrevLetterHWY(const std::string& name, size_t& i, std::string& soundex, char& lastCode);
void generateSoundexForCurrentLetter(const std::string& name, size_t& i, std::string& soundex, char& previousCode);
void handleSoundexLengthFour(std::string& soundex);
void generateSoundexForLetter(const std::string& name, size_t& i, std::string& soundex, char& previousCode, char& lastCode);
void handleSoundex(std::string& soundex, const std::string& name);

#endif // SOUNDEX_H
