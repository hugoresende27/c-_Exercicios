/*
Faça uma função que recebe por parâmetro um valor inteiro e positivo e retorna o valor lógico Verdadeiro caso o valor seja
primo e Falso em caso contrário.
*/
#include <iostream>	
		
using namespace std;

bool funcao1 (int n)
{
    int aux=0,primo=0;
    if (n>0)
    {
        return true;
    }
    else 
    {
        for (aux = 2; primo && (aux <= n/2); aux++)
        if ((n % aux) == 0)
        primo = 0;
        if (primo)
            return false;
  
    }
        
    
}

int main()								
{
    int num;
    printf ("Qual o nr? --> ");
    scanf ("%d",&num);
    cout << funcao1(num) << endl;
    system("pause");				
	return 0;	
}