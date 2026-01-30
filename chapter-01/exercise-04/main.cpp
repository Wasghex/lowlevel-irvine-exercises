#include <iostream>
#include <string>

std::string conversionDecToHex(int integerDecValue) {

	std::string decimalToHex;
	std::string reverseDecimalToHex;
	int remainder{ 0 };

	   while (integerDecValue != 0) {
	    
		remainder = integerDecValue % 16;
		integerDecValue /=  16;
		

		switch (remainder) {
		case 0:
			decimalToHex += '0';
			break;

		case 1:
			decimalToHex += '1';
			break;

		case 2:
			decimalToHex += '2';
			break;
		case 3:
			decimalToHex += '3';
			break;

		case 4:
			decimalToHex += '4';
			break;
		case 5:
			decimalToHex += '5';
			break;

		case 6:
			decimalToHex += '6';
			break;
		case 7:
			decimalToHex += '7';
			break;

		case 8:
			decimalToHex += '8';
			break;

		case 9:
			decimalToHex += '9';
			break;
		case 10:
			decimalToHex += 'A';
			break;

		case 11:
			decimalToHex += 'B';
			break;
		case 12:
			decimalToHex += 'C';
			break;

		case 13:
			decimalToHex += 'D';
			break;
		case 14:
			decimalToHex += 'E';
			break;

		case 15:
			decimalToHex += 'F';
			break;
		}
	}
	   
	   for (int i = decimalToHex.size() -1; i >= 0; i--) {
	   
		   reverseDecimalToHex += decimalToHex[i];

	   }

	   return reverseDecimalToHex;
}


int main() {

	int value = 999;
	std::string result{ conversionDecToHex(value) };
	
	std::cout << "valor: " << result << '\n';

	return 0;
}