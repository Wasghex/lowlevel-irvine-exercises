#include <iostream>
#include <string>


/*Write a function that receives a string containing a 32-bit hexadecimal integer. The function
must return the string’s integer value.*/

unsigned long convertStrHexForInt(const std::string& hexStr) {

    unsigned int num = 1;
    unsigned long result = 0;
    unsigned long powerI = 1;

    if (hexStr.size() == 8) {
        for (unsigned int i = 0; i < hexStr.size(); i++) {



            if (hexStr[hexStr.size() - 1 - i] <= 57 && hexStr[hexStr.size() - 1 - i] >= 48) {

                num = hexStr[hexStr.size() - 1 - i] - '0';

            }
            else if (hexStr[hexStr.size() - 1 - i] <= 70 && hexStr[hexStr.size() - 1 - i] >= 65) {

                num = hexStr[hexStr.size() - 1 - i] - 'A' + 10;

            }
            else {
                return 0;
            }

            if (i >= 1) {
                powerI *= 16;
            }
            
            result += powerI * num;
            
        }
    }
    else {
        return result;
    }
    return result;
}


int main() {

    std::string hexStrValue = "FFFFFFFF";
    unsigned long valueConverted = convertStrHexForInt(hexStrValue);

    std::cout << "O valor e: " << valueConverted << '\n';

    return 0;
}