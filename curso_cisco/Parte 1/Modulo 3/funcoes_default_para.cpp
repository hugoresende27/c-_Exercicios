#include <iostream>					
using namespace std;

void cumps(string nome="Hugo",int reps=2)       //parametros por default, tipo var = default
{
    while (reps>0)
    {
         cout<<"Olá "<<nome<<" !!\n"; 
         reps--;
    }
}

int main()								
{
  
    cumps("Zé",3);
    cumps();

    system("pause");				
	return 0;	
}