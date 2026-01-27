#include <iostream>
#include <string>
#include <cmath>

int stringIntValue(const std::string& binario) {

    int soma = 0;

    for (int i = 0; i < binario.size(); i++) {

        char bitAtual = binario[i];
        

        if (bitAtual == '1') {
            int expoente = binario.size() - 1 - i;
 
            soma += static_cast<int>(pow(2, expoente));
        }
    }
    
    return soma;
}


int main() {


	std::string s1 = "1000000000000101";
	int valor = stringIntValue(s1);

	std::cout << "O valor e: " << valor << '\n';

	return 0;
}