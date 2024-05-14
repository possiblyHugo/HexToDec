#pragma once
#include <iostream>
#include <string>
#include <unordered_map>

class HexToDec {
public:
	HexToDec(std::string hexString);
	int HexDigitToDec(char digit);

private:
	const std::unordered_map<char, int> HexList{
	{ 'A', 10 },
	{ 'B', 11 },
	{ 'C', 12 },
	{ 'D', 13 },
	{ 'E', 14 },
	{ 'F', 15 }
	};
};

HexToDec::HexToDec(std::string hexString) {

}

int HexToDec::HexDigitToDec(char digit) {
	if (isdigit(digit)) {
		return digit - '0';
	}
	else if (HexList.find(digit) != HexList.end()) {
		return HexList.at(digit);
	}
	else {
		return -1;
	}
}