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

bool intervalo ( int min, int max, int num)
{
    if (primo (num)==1)
    {
        if (num>=min && num<=max)
            return true;
        else
            return false;
    }
}

int main()								
{
    int num;
    do 
    {
    cout << "Programa primos(-1 para sair)\nQual o nr-> ";
    cin >>num;
    //primo(num);
   //( (primo(num) == 1) && intervalo(10,20,num)) ? cout << "primo\n" : cout<<"não primo...\n";
   if (intervalo(10,20,num))
   {
       cout << "Primo entre 10 e 20\n";
   }
   else
    {
         cout << "NAO Primo entre 10 e 20\n";
    }
    for (int i=1; i<num;i++)
    {
        if (primo(i) == 1)
        {
            cout<< i << " | ";
        }
    }
    }while (num>0);

 

    system("pause");				
	return 0;	
}