#include <iostream>
#include <string>
#include <unordered_map>
#include "HexToDec.h"

int main() {
	std::string hex{ "5C6" };
	HexToDec newConvert(hex);
	int decValue = newConvert.Convert();

	std::cout << decValue << std::endl;

	return 0;
}