#include <iostream>					
using namespace std;

void cumps(string nome,int reps)
{
    while (reps>0)
    {
         cout<<"Olá "<<nome<<" !!\n"; 
         reps--;
    }
}


int main()								
{
    int i;
    string nome;
    cout<<"Qual o teu nome? -->";
    cin>>nome;
    cout<<"Qual o tamanho do teu ego? -->";
    cin>>i;
    cumps(nome,i);

    system("pause");				
	return 0;	
}