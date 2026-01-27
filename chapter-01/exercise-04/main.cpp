#include <iostream>
#include <string>

std::string conversionHexForDec(int integerDecValue) {

	std::string returnConversionHexForDec;
	std::string returnReverseConversionHexForDec;
	int molde{ 0 };

	   while ( integerDecValue != 0) {
	    
		molde = integerDecValue % 16;
		integerDecValue = integerDecValue / 16;
		

		switch (molde) {
		case 0:
			returnConversionHexForDec += '0';
			break;

		case 1:
			returnConversionHexForDec += '1';
			break;

		case 2:
			returnConversionHexForDec += '2';
			break;
		case 3:
			returnConversionHexForDec += '3';
			break;

		case 4:
			returnConversionHexForDec += '4';
			break;
		case 5:
			returnConversionHexForDec += '5';
			break;

		case 6:
			returnConversionHexForDec += '6';
			break;
		case 7:
			returnConversionHexForDec += '7';
			break;

		case 8:
			returnConversionHexForDec += '8';
			break;

		case 9:
			returnConversionHexForDec += '9';
			break;
		case 10:
			returnConversionHexForDec += 'A';
			break;

		case 11:
			returnConversionHexForDec += 'B';
			break;
		case 12:
			returnConversionHexForDec += 'C';
			break;

		case 13:
			returnConversionHexForDec += 'D';
			break;
		case 14:
			returnConversionHexForDec += 'E';
			break;

		case 15:
			returnConversionHexForDec += +'F';
			break;

		default:
			returnConversionHexForDec = +'NULL';
			break;
		}
		
		

	}
	   
	   for (int i = returnConversionHexForDec.size() -1; i >= 0; i--) {
	   
		  returnReverseConversionHexForDec += returnConversionHexForDec[i];

	   }

	   return returnReverseConversionHexForDec;
}


int main() {

	int integerDecValue = 999;
	std::string ReverseConversionHexForDec{ conversionHexForDec(integerDecValue) };
	
	std::cout << "valor: " << ReverseConversionHexForDec << std::endl;

	return 0;
}