/*
verifica numeros primos, apenas divisivel por 1 e por ele proprio
*/

#include <iostream>	
		
using namespace std;


int main()								
{
    int num, i , contador;
    cout << "Programa primos\nQual o nr-> ";
    cin >>num;
    
    contador = 0;
    i=1;
    while (i <= num)//enquanto  1 <= 11 //2 <=11  //3 <=11  //11<=11
    {
        if (num % i ==0)        // 11 / 1 == 0      11/2 == 1   11/3==1 11/11==1
        {
            contador++;         //contador = 1      //contador = 2
        }
        i++;        //i = 2     //i = 3 //i=4...i=11
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