#include <iostream>
#include <string>


std::string conversionIntBinaryString(int num) {

	std::string binaryString;
	std::string binaryStringInvert;

	while (num != 0) {

		int molde = num % 2;
		num = num / 2;

		if (molde == 0) {
			binaryString += '0';

		}
		else {

			binaryString += '1';

		}
	}

	for (int i = binaryString.size() - 1; i >= 0; i--) {
		
		binaryStringInvert += binaryString[i];

	}

	return binaryStringInvert;
}



int main() {

	int y = 999;

	std::string binaryStringPrint = conversionIntBinaryString(y);

	std::cout << binaryStringPrint << std::endl;

	return 0;
}