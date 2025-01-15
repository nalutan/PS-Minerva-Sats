/******************************************************************************

Exercício 1: Cálculo de Média e Aprovação

Dadas duas notas de um aluno, sendo elas obtidas como preferir. Certifique-se de
utilizar o tipo de dado apropriado. Calcule a média das notas. Imprima o tamanho
em bytes do tipo de dado utilizado para armazenar as notas. Verifique se o aluno foi
aprovado ou reprovado, considerando que a média mínima para aprovação é 5.0.
Exiba a média e o status do aluno (Aprovado ou Reprovado).

*******************************************************************************/
#include <iostream>
using namespace std;

int main(){
    float p1, p2, media;
    
    cout << "Digite a primeira nota: \n";
    cin >> p1;
    cout << "Digite a segunda nota: \n";
    cin >> p2;
    
    media = (p1+p2)/2;
    
    if(media >= 5){
        cout << "Tipo de dado utilizado: " << sizeof(p1) << "bytes \n";
        cout << "Média: " << media << "\n";
        cout << "Status: aprovado";
    } else {
        cout << "Tipo de dado utilizado: " << sizeof(media) << " bytes \n";
        cout << "Média: " << media << "\n";
        cout << "Status: reprovado";
    }
    

    return 0;
}