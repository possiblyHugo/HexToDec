#include <iostream>
#include <string>
#include <unordered_map>

int main() {

	std::string hex{ "5C6" };

	for (int i = hex.length() - 1; i >= 0; i--) {
		std::cout << hex[i] << "\n";
	}

	return 0;
}