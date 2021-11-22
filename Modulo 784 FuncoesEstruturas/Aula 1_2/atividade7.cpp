//Com base no ficheiro em anexo (num_primo.cpp), altere o mesmo para que seja possível verificar se um número é "primo", utilizando uma função
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