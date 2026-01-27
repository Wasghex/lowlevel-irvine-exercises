#include <iostream>
#include <string>


std::string integerHexStringAdd(std::string integerHexStringOne, std::string integerHexStringTwo) {

	std::string ReturnIntegerHexStringAdd(1000, '0');
	char positionHexStringChar = '0';
	int num = 0;
	int sum = 0;
	int molde = 0;

	for (int j = 0; j < integerHexStringOne.size(); j++) {

		for (int i = 0; i < 2; i++) {

			if (i % 2 == 0) {

				positionHexStringChar = integerHexStringOne[integerHexStringOne.size() - j - 1];

			}
			else {

				positionHexStringChar = integerHexStringTwo[integerHexStringTwo.size() - j - 1];

			}

			switch (positionHexStringChar) {
			case '0':
				num = 0;
				break;
			case '1':
				num = 1;
				break;
			case '2':
				num = 2;
				break;
			case '3':
				num = 3;
				break;
			case '4':
				num = 4;
				break;
			case '5':
				num = 5;
				break;
			case '6':
				num = 6;
				break;
			case '7':
				num = 7;
				break;
			case '8':
				num = 8;
				break;
			case '9':
				num = 9;
				break;
			case 'A':
				num = 10;
				break;
			case 'B':
				num = 11;
				break;
			case 'C':
				num = 12;
				break;
			case 'D':
				num = 13;
				break;
			case 'E':
				num = 14;
				break;
			case 'F':
				num = 15;
				break;

			}
			
			sum += num;

		}
		molde = sum % 16;
		switch (molde) {
		case 0:
			ReturnIntegerHexStringAdd[ReturnIntegerHexStringAdd.size() - j - 1] = '0';
			break;
		case 1:
			ReturnIntegerHexStringAdd[ReturnIntegerHexStringAdd.size() - j - 1] = '1';
			break;
		case 2:
			ReturnIntegerHexStringAdd[ReturnIntegerHexStringAdd.size() - j - 1] = '2';
			break;
		case 3:
			ReturnIntegerHexStringAdd[ReturnIntegerHexStringAdd.size() - j - 1] = '3';
			break;
		case 4:
			ReturnIntegerHexStringAdd[ReturnIntegerHexStringAdd.size() - j - 1] = '4';
			break;
		case 5:
			ReturnIntegerHexStringAdd[ReturnIntegerHexStringAdd.size() - j - 1] = '5';
			break;
		case 6:
			ReturnIntegerHexStringAdd[ReturnIntegerHexStringAdd.size() - j - 1] = '6';
			break;
		case 7:
			ReturnIntegerHexStringAdd[ReturnIntegerHexStringAdd.size() - j - 1] = '7';
			break;
		case 8:
			ReturnIntegerHexStringAdd[ReturnIntegerHexStringAdd.size() - j - 1] = '8';
			break;
		case 9:
			ReturnIntegerHexStringAdd[ReturnIntegerHexStringAdd.size() - j - 1] = '9';
			break;
		case 10:
			ReturnIntegerHexStringAdd[ReturnIntegerHexStringAdd.size() - j - 1] = 'A';
			break;
		case 11:
			ReturnIntegerHexStringAdd[ReturnIntegerHexStringAdd.size() - j - 1] = 'B';
			break;
		case 12:
			ReturnIntegerHexStringAdd[ReturnIntegerHexStringAdd.size() - j - 1] = 'C';
			break;
		case 13:
			ReturnIntegerHexStringAdd[ReturnIntegerHexStringAdd.size() - j - 1] = 'D';
			break;
		case 14:
			ReturnIntegerHexStringAdd[ReturnIntegerHexStringAdd.size() - j - 1] = 'E';
			break;
		case 15:
			ReturnIntegerHexStringAdd[ReturnIntegerHexStringAdd.size() - j - 1] = 'F';
			break;

		}

		if (sum > 15) {
			sum = 1;
			if (j > integerHexStringOne.size() - 1 && j > integerHexStringTwo.size() - 1) {
				ReturnIntegerHexStringAdd[j - 2] = '1';
			}
		}
		else {
			sum = 0;
		}

	}

	return ReturnIntegerHexStringAdd;
}




int main() {



	std::string integerHexStringOne = "0FFFF";
	std::string integerHexStringTwo = "0000E0F";

	std::string printIntegerHexString = integerHexStringAdd(integerHexStringOne, integerHexStringTwo);

	std::cout << "valor e: " << printIntegerHexString << "\n";

	return 0;
}