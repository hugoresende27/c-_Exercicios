/*
imprime numeros primos, apenas divisivel por 1 e por ele proprio, até um valor n
*/

#include <iostream>	
#include <math.h>	
using namespace std;

int primo (int x)
{
  int primo=1;
  for (int i=2 ; i<=sqrt(x) ; i++)
    {
        if (x % i == 0)
        {
            primo=0;
            break;
        }
    }
    
    if (primo == 1)
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
    cout << "Programa primos\nPrimos até ?-> ";
    cin >>num;
    //primo(num);
    for (int i=2; i<=num;i++){
        if (primo(i) == 1){
            printf ("%d -- ",i);
        }
    }
  
    system("pause");				
	return 0;	
}
