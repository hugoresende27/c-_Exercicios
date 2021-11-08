/*
imprime numeros primos, apenas divisivel por 1 e por ele proprio, até um valor n
*/

#include <iostream>	
		
using namespace std;


int main()								
{
    int num,contador=0;
    int auxCont=1;
    cout << "Programa primos\n Até qual nr-> ";
    cin >> num;
    auxCont=2;

    for (int i=0 ; i<=num ; i++)
    {
        for (int j=1;j<=i;j++)
        {
            if (auxCont % j == 0)
            {
                contador++;
            }
            if (contador == 2)//divisivel por 1 e por ele proprio, contador == 2
            {
                cout <<auxCont;
            }
            auxCont++;
        }
    
  
    }

  
    system("pause");				
	return 0;	
}