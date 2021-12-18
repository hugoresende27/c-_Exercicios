/*
Crie um programa que leia números reais em um vetor de tamanho 10. Imprima
o endereço de cada posição desse vetor
*/


#include <iostream>	
		
using namespace std;


int main()								
{
    float vet[10];
    for (int i=0; i<10; i++){
        cout << "INPUT "<<i+1<<":: ";
        cin>> vet[i];
    }
    for (int i=0; i<10; i++){
        cout << &vet[i]<<endl;
    }
    system("pause");				
	return 0;	
}