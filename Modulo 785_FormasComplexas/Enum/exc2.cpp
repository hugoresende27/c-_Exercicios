/*
Altere o exemplo da enumeração “direção” referida anteriormente, de modo a verificar qual das direções está presente na 
variável “dir” e em função disso, imprimir no ecrã o seu valor.
*/
#include <iostream>	
#include <string.h>
#include <math.h>		
using namespace std;

// /*
// enum direcao { norte = 1,
//                sul = 2,
//                este = 3,
//                oeste = 4,
//                centro = 5} dir;
// */
int main()								
{
    int dir;
    cout << "Qual a direção ? [ 1 | 2 | 3 | 4 | 5 ] --> ";
    scanf ("%d", &dir);
    
    switch (dir)
    {
    case 1:
        cout << "NORTE"<<endl;
        break;
    case 2:
        cout << "SUL"<<endl;
        break;
    case 3:
        cout << "ESTE"<<endl;
        break;
    case 4:
        cout << "OESTE"<<endl;
        break;
    case 5:
        cout << "CENTRO"<<endl;
        break;
    
    default:
        cout<< "INVALIDO"<<endl;
        break;
    }
    cout << endl;
    system("pause");				
	return 0;	
}