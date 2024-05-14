#pragma once
#include <iostream>
#include <string>
#include <unordered_map>
#include <cmath>

class HexToDec {
public:
	HexToDec(std::string hexString);
	int Convert();

private:
	std::string hexString;
	const std::unordered_map<char, int> HexList{
	{ 'A', 10 },
	{ 'B', 11 },
	{ 'C', 12 },
	{ 'D', 13 },
	{ 'E', 14 },
	{ 'F', 15 }
	};

	int HexDigitToDec(char digit);
};

HexToDec::HexToDec(std::string hexStringInput) {
	hexString = hexStringInput;
}

int HexToDec::Convert() {
	int result{ 0 };
	int decValue{ 0 };
	size_t stringLength{ hexString.length() - 1};

	for (int i = 0, j = stringLength; i <= stringLength; i++, j--) { // i = position left to right, j = position right to left
		decValue = HexDigitToDec(hexString[i]);
		
		if (decValue == -1) {
			std::cout << "There was an error converting HexDigit to Dec\n";
			exit(-1);
		}

		result += (decValue * std::pow(16, j));
	}
	return result;
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