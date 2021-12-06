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
  for (int i=1 ; i<=num ; i++)
    {
        if (num % i == 0)
        {
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

int main()								
{
    int inicio,fim;
    int vetPrimos[500];
    int cont=0;
    cout << "Qual o limite INICIAL?--> ";
    cin >> inicio;
    cout << "Qual o limite FINAL?--> ";
    cin >> fim;
    for (int i=inicio; i<fim; i++){
        if (primo(i)){
            vetPrimos[cont]=i;
            cont++;
        }
    }
    for (int i=0; i<cont;i++){
        cout << vetPrimos[i]<<" | ";
    }

    system("pause");				
	return 0;	
}