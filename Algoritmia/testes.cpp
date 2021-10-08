#include <iostream>	
#include <string.h>				
using namespace std;


int main()								
{
    char nome[10];
    char nom[10];

    cout<<"NOME?: ";
    cin>>nom;
    strcat(nom,nome);
    cout<<nom;

    system("pause");				
	return 0;	
}