/*
verifica numeros primos, apenas divisivel por 1 e por ele proprio
*/

#include <iostream>	
		
using namespace std;


int main()								
{
    int num, i , contador,ate=1;
    cout << "Programa primos\nQual o nr-> ";
    cin >>ate;
    
    num=2; 
    while (num<=ate)
    {
        contador = 0;
        i=1;
        while (i <= num)
        {
            if (num % i ==0)        
            {
                contador++;         
            }
            i++;       
        }
        if (contador == 2)//divisivel por 1 e por ele proprio, contador == 2
        {
            cout << num << " | ";
        }
        num++;
    };
    system("pause");				
	return 0;	
}