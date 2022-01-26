/*
Crie um programa que armazene num ficheiro 10 idades de pessoas, inseridos pelo 
utilizador e guardados num vetor (nome do ficheiro “idades.txt”). 
*/

#include <iostream>	
#include <string.h>
#include <math.h>		
#include <locale.h>
#include <fstream>
#define MAX 10
using namespace std;

int main()								
{
    int idades[MAX];

    FILE *file;
    file = fopen("idades.txt", "w");

    cout << "Programa IDADES EXERCICIO 1\n";
    for (int i=0; i<MAX; i++){
        cout << "Idade "<< i+1<< "--> ";
        cin >> idades[i];
        fprintf(file,"%d\n",idades[i]); 
       
    }

    fclose(file);

    cout << endl;
    system("pause");				
	return 0;	
}