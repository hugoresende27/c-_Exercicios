/*
verifica numeros primos, apenas divisivel por 1 e por ele proprio
alguns Primos :
2	3	5	7	11	13	17	19	23	29	31	37	41	43	
 179 181	191	193	197	199	211	223	227
*/

#include <iostream>	
		
using namespace std;


int main()								
{
    int num, i , contador=0;
    cout << "Programa primos\nQual o nr-> ";
    cin >>num;

    for (int i=1 ; i<=num ; i++)
    {
        if (num % i == 0)
        {
            contador++;
        }
    }
    
    if (contador == 2)//divisivel por 1 e por ele proprio, contador == 2
    {
        cout << "PRIMO\n";
    }
    else
    {
        cout << "Não É PRIMO!\n";
    }
    system("pause");				
	return 0;	
}