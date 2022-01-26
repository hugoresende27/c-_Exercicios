/*
Crie um programa que possibilite guardar num ficheiro as características de uma 
modalidade desportiva (ID, Nome, Número de praticantes, número de medalhas), servindose para tal de um tipo de 
dados definido pelo utilizador. (nota: não é necessário ler o 
ficheiro). 
*/

#include <iostream>	
#include <string.h>
#include <math.h>		
#include <locale.h>
#include <fstream>
#define MAX 10
using namespace std;


struct modalidade
{
    int id;
    char nome[100];
    int numPraticante;
    int numMedalhas;
};


int main()								
{
    FILE *file;
    modalidade m1;

    
    file = fopen ("modalidades.txt", "w");

    string label[] = {"Id: ", "Nome: ", "Praticantes: ", "Medalhas: "};
    

    char texto[100];
    char item[100] = {};

   cout << "Programa MODALIDADES EXERCICIO 3\n";

   for (int i=0; i<4;i++)
   {       
        cout << label[i]<<" -> ";
        fflush(stdin);
        fgets(texto,sizeof(texto),stdin);
        strcat(strcpy(item, label[i].c_str()),texto);        
        fputs(item,file);
    }
        
    fclose(file);

    cout << endl;
    system("pause");				
	return 0;	
}