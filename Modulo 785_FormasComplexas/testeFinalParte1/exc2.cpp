/*
Crie um programa que leia o ficheiro criado no “ponto 1” para o ecrã, calculando a média 
de idades. */
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
    file = fopen("idades.txt", "r");

    cout << "Programa IDADES EXERCICIO 2\n";
    //verificação se o ficheiro existe
        if (file == NULL ){
            printf ("Falhou abertura do ficheiro");
        }
        else {
            cout << "Ficheiro aberto com sucesso\n";  
            int soma=0;  
            float media=0;
            cout << "Todas as idades\n";
            for (int i=0; i<MAX; i++){
                int temp;
                fscanf(file,"%d\n", &temp);
                cout << temp << "--";
                soma += temp;
            }     
            media = soma / MAX;
            cout << "\n\tMédia de idades --> "<<media<<" anos"<<endl;
        fclose(file);
        }

    cout << endl;
    system("pause");				
	return 0;	

}
