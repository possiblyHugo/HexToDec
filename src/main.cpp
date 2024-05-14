#include <iostream>
#include <string>

#include "HexToDec.h"

int main() {
	std::string hex{ "B045" };
	HexToDec newConvert(hex);
	int decValue = newConvert.Convert();

	std::cout << decValue << std::endl;

	return 0;
}