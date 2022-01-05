/*
Altere o exemplo da enumeração “direção” referida anteriormente, de modo a verificar qual das direções está presente na 
variável “dir” e em função disso, imprimir no ecrã o seu valor.
*/
#include <iostream>	
#include <string.h>
#include <math.h>		
using namespace std;

enum direcao { norte, sul, este, oeste, centro} dir;

int main()								
{
    dir = norte;
    switch (dir)
    {
    case norte:
        cout << "NORTE"<<endl;
        break;
    case sul:
        cout << "SUL"<<endl;
        break;
    case este:
        cout << "ESTE"<<endl;
        break;
    case oeste:
        cout << "OESTE"<<endl;
        break;
    case centro:
        cout << "CENTRO"<<endl;
        break;
    
    default:
        break;
    }
    cout << endl;
    system("pause");				
	return 0;	
}