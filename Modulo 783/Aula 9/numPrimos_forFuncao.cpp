/*
verifica numeros primos, apenas divisivel por 1 e por ele proprio
alguns Primos :
2	3	5	7	11	13	17	19	23	29	31	37	41	43	
 179 181	191	193	197	199	211	223	227
*/

#include <iostream>	
		
using namespace std;

int primo (int x)
{
  int contador=0;
  for (int i=1 ; i<=x ; i++)
    {
        if (x % i == 0)
        {
            contador++;
        }
    }
    
    if (contador == 2)//divisivel por 1 e por ele proprio, contador == 2
    {
        return 1;
        //cout << "PRIMO\n";
    }
    else
    {
        return 0;
        //cout << "Não É PRIMO!\n";
    }
}

int main()								
{
    int num;
    cout << "Programa primos\nQual o nr-> ";
    cin >>num;
    //primo(num);
    primo(num) == 1 ? cout << "primo\n" : cout<<"não primo...\n";

  
    system("pause");				
	return 0;	
}