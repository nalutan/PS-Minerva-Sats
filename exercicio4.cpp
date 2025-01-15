/******************************************************************************

Leitura de Sensor e Armazenamento em uint32_t

*******************************************************************************/
#include <iostream>
#include <cstdio>
#include <cstdint>
#define sensor1_address 0x19
#define sensor2_address 0x76
using namespace std;

typedef struct SENSOR{
    uint8_t address;
    double temp[5];
} SENSOR;

double calculaMedia(double temp[], int qtd){
    double total = 0.0;
    
    for(int i = 0; i < qtd; i++){
        total += temp[i];
    }
    
    total /= qtd;
    
    return total;
}

void exibeSituacao(SENSOR &s){
    double media;
    
    printf("Sensor no endereco: 0x%x\n", s.address);
    cout << "Temperaturas capturadas: ";
    
    for(int i = 0; i < 5; i++){
        cout << s.temp[i] << " ";
    }
    
    media = calculaMedia(s.temp, 5);
    
    cout << "\nTemperatura media: " << media << "\n";
    cout << "Situacao termica: " << (media >= 30? "calor" : "temperatura normal") << "\n";
    printf("Endereco de memoria do campo 'address': 0x%x\n", s.address);
    cout << "Endereco de memoria do campo 'temp': " << &s.temp << "\n";
}

int main(){
    SENSOR sensor1 = {sensor1_address, {28.5, 29.1, 30.2, 31.0, 27.8}};
    SENSOR sensor2 = {sensor2_address, {32.5, 33.0, 31.8, 30.5, 29.9}};
    
    exibeSituacao(sensor1);
    cout << "\n";
    exibeSituacao(sensor2);
    
    return 0;
}