/*
Escreva uma função para encontrar os números primos num intervalo de valores dado pelo utilizador.  
A função deverá retornar se um número é primo e se for deverá guardar num vetor esse número.
--input inicio
--input fim
--ciclo de inicio a fim
--funcao retorna primo se for primo
--adiciona primo ao vetor
--imprime vetor
*/
#include <iostream>	
		
using namespace std;

bool primo(int num){
  int contador=0;
  for (int i=1 ; i<=num ; i++){
        if (num % i == 0){
            contador++;
        }
    }
    if (contador == 2)//divisivel por 1 e por ele proprio, contador == 2
    {
        return true;
    }
    else
    {
        return false;
    }
}

void imprime_vetor(int *vet, int t){
    for (int i =0; i<t; i++){
        if (*(vet+i) !=0 ){
            //cout << vet[i]<< " - ";
           // printf ("%d", *(vet+i));        //*vet = vetPrimos[0]
            cout << *(vet+i) << " - ";
        }    
    }
}

int main()								
{
    int inicio,fim;
    
    int cont=0;
    cout << "Qual o limite INICIAL?--> ";
    cin >> inicio;
    cout << "Qual o limite FINAL?--> ";
    cin >> fim;
    int tam = (fim-inicio);
    int vetPrimos[tam+1];
    for (int i=inicio; i<=fim; i++){
        if (primo(i)){
            vetPrimos[cont]=i;
        } else {
            vetPrimos[cont] = 0;
        }
        cont++;
    }
    /*
    for (int i=0; i<cont;i++){
        cout << vetPrimos[i]<<" | ";
        //cout << &vetPrimos[i]<< " # ";
    }
    cout <<"SIZE OF "<<sizeof(vetPrimos)/4<<endl;
*/
    imprime_vetor(vetPrimos,cont);

    system("pause");				
	return 0;	
}