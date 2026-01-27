#include <iostream>
#include <string>
#include <cmath>

long long stringIntValue(const std::string& binario) {

    long long soma = 0;
    int numVezes = 0;

    for (int i = 0; i < binario.size(); i++) {

        char bitAtual = binario[i];

            int expoente = binario.size() - 1 - i;
            switch (bitAtual) {
            case '1':
                numVezes = 1;
                break;

            case '2':
                numVezes = 2;
                break;

            case '3':
                numVezes = 3;
                break;
            case '4':
                numVezes = 4;
                break;

            case '5':
                numVezes = 5;
                break;

            case '6':
                numVezes = 6;
                break;
            case '7':
                numVezes = 7;
                break;

            case '8':
                numVezes = 8;
                break;

            case '9':
                numVezes = 9;
                break;
            case 'A':
                numVezes = 10;
                break;

            case 'B':
                numVezes = 11;
                break;

            case 'C':
                numVezes = 12;
                break;
            case 'D':
                numVezes = 13;
                break;

            case 'E':
                numVezes = 14;
                break;

            case 'F':
                numVezes = 15;
                break;

            default:
                numVezes = 0;
                break;
            }
            long long potenciaXNumVezes = pow(16, expoente) * numVezes;
            soma += potenciaXNumVezes;
        
    }

    return soma;
}


int main() {


    std::string s1 = "10";
    long long valor = stringIntValue(s1);

    std::cout << "O valor e: " << valor << '\n';

    return 0;
}