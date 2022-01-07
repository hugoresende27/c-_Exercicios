/*
Crie um enumeração usando as cores vermelho, verde, azul, amarelo e seguidamente crie as variáveis enumeradas
, “carro”-> “vermelho” e “barco”->”azul”;
*/
#include <iostream>	
#include <string.h>
#include <math.h>		
using namespace std;

enum lista { 
             vermelho, 
             verde, 
             azul, 
             amarelo,
             cinza} LI  ;

int main()								
{

    lista carro,barco,bicicleta;

    carro = vermelho;
    barco = azul;
    bicicleta = verde;

    cout << "CARRO :: "<< carro <<endl;
    cout << "BARCO :: "<< barco <<endl;
    cout << "BIKE :: "<< bicicleta <<endl;

    int cor_carro;
    cout << "Qual a cor do carro?";
    cin >> cor_carro;
    if ( cor_carro == carro){
        cout << "WIN\n";
    } else {
        cout << "FAIL\n";
    }

    cout << "TYPEID (): "<<typeid(carro).name()<<endl;
    cout << "syzeof(tamanho de 1 var): "<<sizeof(lista)<<endl;

    int i;
    for (i=vermelho; i<=cinza; i++){
        cout << i << endl;
    }
    cout << "FINAL i :: "<<i<<endl;

    switch (bicicleta)
    {
    case 0:
        cout << "vermelhor";
        break;
    
    case 1:
        cout << "verde";
        break;
    
    case 2:
        cout << "azul";
        break;
    
    case 3:
        cout << "amarelo";
        break;
    
    default:
        break;
    }


    cout << endl;
    system("pause");				
	return 0;	
}