/*
 Receba do teclado um nome até 10 caracteres em minúsculas e imprima-o por ordem
inversa, integralmente em maiúsculas;
*/

#include <iostream>	
#include <bits/stdc++.h>

using namespace std;

int main()								
{
    char nome[10],inverso[10];
    int contInv=0;
    cout << "******* EXERCICIO 1 *******\n";
    cout << "Qual o nome? -->";
    scanf ("%s",nome);
    for (int i=9; i>=0;i--)
    {
        inverso[contInv]=nome[i];
        contInv++;
        nome[i]=toupper(nome[i]);
        cout << (nome[i]);
    }


    //printf ("\nInverso %s", inverso);
    //cout << inverso;
   
    for (int i=0; i<10; i++)
    {
        cout << inverso[i];
    }
    
    /*
    string str = "";
    cout << "Nome 2:: ";
    cin >> str;   
    // Reverse str[begin..end]
    reverse (str.begin(), str.end() ) ;
    */
    cout<<"\nEncerrando...\n";
    system("pause");				
	return 0;	
}