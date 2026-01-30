#include <iostream>
#include <string>

/*Write a function that receives an integer. The function must return a string containing the
binary representation of the integer.*/

std::string conversionDecToBinaryString(int num) {

	std::string binaryString;
	std::string binaryStringInvert;

	int remainder;

	do {
		remainder = num % 2;
		num /= 2;

		if (remainder == 0) {
			binaryString += '0';
		}
		else if (remainder == 1) {
			binaryString += '1';
		}
	} while (num != 0); 

	for (int i = 0; i < binaryString.size(); i++) {
	binaryStringInvert += binaryString[binaryString.size() - 1 - i];
}
	return binaryStringInvert;
}



int main() {

	int y = 999;

	std::string binaryStringPrint = conversionDecToBinaryString(y);

	std::cout << binaryStringPrint << '\n';

	return 0;
}