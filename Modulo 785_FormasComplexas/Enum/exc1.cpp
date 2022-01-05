/*
Crie um enumeração usando as cores vermelho, verde, azul, amarelo e seguidamente crie as variáveis enumeradas
, “carro”-> “vermelho” e “barco”->”azul”;
*/
#include <iostream>	
#include <string.h>
#include <math.h>		
using namespace std;

enum lista { vermelho, 
             verde, 
             azul, 
             amarelo} carro, barco ;

int main()								
{

    carro = vermelho;
    barco = azul;

    cout << "CARRO :: "<< carro <<endl;
    cout << "BARCO :: "<< barco <<endl;

    cout << endl;
    system("pause");				
	return 0;	
}