/*
Receba um vetor de 5 inteiros e use uma função para calcular o maior valor encontrado, retornando o mesmo.
*/

#include <iostream>	
		
using namespace std;

int vetiMax( int *arr){
    int maior = 0;
    for (int i=0; i<5;i++){
        if (arr[i]>maior){
            maior = arr[i];
        }
    }
    return maior;
}

int main()								
{
    int vet[5];
    for (int i=0; i<5;i++){
        printf ("Posição %d --> ", i+1);
        cin >> vet[i];
    }
    cout << "O maior valor vai ser o "<<vetiMax(vet)<<endl;
    system("pause");				
	return 0;	
}