/******************************************************************************

Exercício 3: Manipulação de Bits

A partir de dois números arbitrários, de sua preferência, representados em binário 8
bits e realize as seguintes operações:
● Comparação bit a bit
● Deslocamento à esquerda
● Deslocamento à direita
● Verificação do bit menos significativo (LSB - Least Significant Bit)

*******************************************************************************/
#include <iostream>
#include <bitset>
using namespace std;

int comparaBit(int a, int b){
    int compara = a & b;
    return compara;
}

int deslocaDireita(int a){
    return a >> 1;
}

int deslocaEsquerda(int a){
    return a << 1;
}

int inverteBits(int a){
    return ~a;
}

void printaBinario(int x){
    cout << std::bitset<8>(x) << endl;
}

int main(){
    string str1, str2;
    
    cout << "Número binário 1: ";
    cin >> str1;
    cout << "Número binário 2: ";
    cin >> str2;
    
    // O C++ não interpreta diretamente valores binários. 
    // Foi declarado números binários como string e depois é feita a conversão de string para int
    unsigned int a = bitset<8>(str1).to_ulong();
    unsigned int b = bitset<8>(str2).to_ulong();

    
    int x = comparaBit(a, b);
    
    cout << "Comparação bit a bit: ";
    printaBinario(x);
    cout << "Deslocamento à esquerda: ";
    printaBinario(deslocaEsquerda(a));
    cout << "Deslocamento à direita: ";
    printaBinario(deslocaDireita(a));
    
    if(x & 1){
        cout << "O bit menos significativo é 1. Invertendo todos os bits... \n";
        printaBinario(inverteBits(a));
    } else {
        cout << "O bit menos significativo é 0. Ele está inativo...";
    }
    
    return 0;
}
