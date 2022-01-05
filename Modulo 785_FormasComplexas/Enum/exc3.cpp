/*
Crie uma enumeração para guardar o sexo “masculino - 10” e “feminino-20” e em função do valor passado à variável,
 mostre a informação do respetivo sexo no ecrã (use um switch..case);
*/
#include <iostream>	
#include <string.h>
#include <math.h>		
using namespace std;

enum sexos {masculino = 10, feminino = 20} s;

int main()								
{

    cout << "SEXO--> ";
    scanf ("%d" , &s);

    switch (s)
    {
    case 10:
        cout << "MACHO valor-> "<<s<<endl;
        break;
    case 20:
        cout << "FEMEA valor-> "<<s<<endl;
        break;
    
    default:
        break;
    }
    cout << endl;
    system("pause");				
	return 0;	
}