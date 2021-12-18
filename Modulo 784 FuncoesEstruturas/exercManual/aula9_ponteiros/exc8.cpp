/*
O laboratório de agropecuária da Universidade Federal do Capa Bode tem um
termômetro de extrema precisão, utilizado para aferir as temperaturas de uma
estufa onde cultivam uma variedade de jaca transgênica, com apenas um caroço
do tamanho de uma semente de laranja. O problema é que este termômetro dá
os resultados na escala Kelvin (K) e os pesquisadores que atuam perto da estufa
são americanos, acostumados com a escala Fahrenheit (F). Você deve criar um
programa para pegar uma lista de 24 temperaturas em Kelvin e convertê-las para
Fahrenheit. O problema maior é que esses pesquisadores querem que você faça
essa conversão e imprima os resultados utilizando ponteiros. Para a conversão,
observe as fórmulas a seguir:
F ˘ 1.8£(K ¡273)¯32*/

#include <iostream>	
#define T 4
		
using namespace std;

float converte(int k){
    return (1.8*(k-273)+32);
}

void recebe(float *p,float val){
    *p=val;
}

int main()								
{
    float vet[T];
    float *pt;
    //float *pt = vet;
    //float pt = &vet[i];
    float kelvins;
    for (int i=0; i<T;i++){
        pt = &vet[i];
        cout << "Quantos graus kelvin? --> ";
        cin >> kelvins;
        float res = converte(kelvins);
        //recebe((pt)+i,res);
        recebe(pt,res);
    }

    for (int i=0; i<T; i++){
        cout<< vet[i]<<" | ";
    }
    system("pause");				
	return 0;	
}