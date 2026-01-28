#include <iostream>
#include <string>

/*Write a function that receives a string containing a 16-bit binary integer. The function must
return the string’s integer value.*/

int BinaryStringDecCon(const std::string& binaryStr) {

    int placeValue = 1;
    int result = 0;

    if (binaryStr.size() == 16) {
        for (unsigned i = 0; i < binaryStr.size(); i++) {
            char currentBitChar = binaryStr[binaryStr.size() - i - 1];

            if (currentBitChar == '1') {
                result += placeValue;

            }
            else if(currentBitChar != '0' && currentBitChar != '1') {
                return 0;
            }
            placeValue += placeValue;
        }
    }
    return result;
}


int main() {


	std::string binaryStr = "0000000000000111";
	int decValue = BinaryStringDecCon(binaryStr);

	std::cout << "O valor e: " << decValue << '\n';

	return 0;
}