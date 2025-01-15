/******************************************************************************

Exercício 2: Impressão de Pirâmide de Asteriscos

Dada uma macro N que corresponde a um número inteiro (definida usando a diretiva
define) que representará o número de linhas da figura. Imprima uma pirâmide de
asteriscos conforme o exemplo abaixo.

*******************************************************************************/
#include <iostream>
#define N 5
using namespace std;

int main(){
    for(int j = 0; j <= N; j++){
        for(int i = 0; i < j; i++){
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}