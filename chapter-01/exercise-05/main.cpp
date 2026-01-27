#include <iostream>
#include <string>

std::string sumBaseXString(int base, std::string numOneString, std::string numTwoString) {

    std::string returnSumBaseXString(1000, '0');

    int oneStringCount = 0;
    int twoStringCount = 0;
    int sum = 0;
    int num = 0;
    int molde = 0;
    char bitAtual = '0';
    int i;

    if (base >= 2 && base <= 10) {
        
        for (int j = 0; j < numOneString.size(); j++) {
            i = 0;
            for (; i < 2; i++) {
                if (i / 2 == 0 && !(i == 1)) {
                    if (oneStringCount < numOneString.size()) {
                        bitAtual = numOneString[numOneString.size() - 1 - j];
                        oneStringCount += 1;
                    }
                    else {
                        bitAtual = '0';
                        oneStringCount += 1;
                    }
                }

                else {
                    if (twoStringCount < numTwoString.size()) {
                        bitAtual = numTwoString[numTwoString.size() - 1 - j];
                        twoStringCount += 1;
                    }
                    else {
                        bitAtual = '0';
                        twoStringCount += 1;
                    }
                }

                switch (bitAtual) {
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
                default:
                    num = 0;
                    break;

                }
                sum += num;
            }
            molde = sum % base;

            switch (molde) {
            case 1:
                returnSumBaseXString[returnSumBaseXString.size()-j-1] = '1';
                break;

            case 2:
                returnSumBaseXString[returnSumBaseXString.size()-j-1] = '2';
                break;

            case 3:
                returnSumBaseXString[returnSumBaseXString.size()-j-1] = '3';
                break;
            case 4:
                returnSumBaseXString[returnSumBaseXString.size()-j-1] = '4';
                break;

            case 5:
                returnSumBaseXString[returnSumBaseXString.size()-j-1] = '5';
                break;

            case 6:
                returnSumBaseXString[returnSumBaseXString.size()-j-1] = '6';
                break;
            case 7:
                returnSumBaseXString[returnSumBaseXString.size()-j-1] = '7';
                break;

            case 8:
                returnSumBaseXString[returnSumBaseXString.size()-j-1] = '8';
                break;

            case 9:
                returnSumBaseXString[returnSumBaseXString.size()-j-1] = '9';
                break;
            default:
                returnSumBaseXString[returnSumBaseXString.size()-j-1] = '0';
                break;
            }

            if (sum > base-1) {
                sum = 1;
            }
            else {
                sum = 0;
            }

            if (oneStringCount >= numOneString.size() && twoStringCount >= numTwoString.size() && sum == 1) {
                returnSumBaseXString[returnSumBaseXString.size() - j - 2] = '1';
            }

        }
    }
        return returnSumBaseXString;
    
}


	int main() {


	std::string numOne = "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999";
    std::string numTwo = "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999";
	int base = 10;
	std::string sumBaseXStringPrint =  sumBaseXString(base, numOne, numTwo);

	std::cout << "valor: " << sumBaseXStringPrint << "\n";

	return 0;
}