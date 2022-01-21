/*
Crie um programa que guarde num ficheiro 5 modelos de veículos, inserindo cada modelo numa linha com os respetivos atributos
 separados por "espaço". Os atributos são: ID, marca, modelo, cor. O output deverá ser efetuado para o ficheiro "carros.txt".
*/
#include <iostream>	
#include <string.h>
#include <math.h>		
#include <locale.h>
#include <fstream>
#define MAX 2
using namespace std;

struct carro{
    int id;
    char marca[20];
    char modelo[20];
    char cor[20];
};

int main()								
{

    carro carros[MAX];

    FILE *file;

    file = fopen("carros.txt", "w");

    if (file == NULL ){
        printf ("Falhou abertura do ficheiro");
        system("pause");
        exit(0);
    }
    else {
        for (int i=0; i<MAX; i++){

             ////SOLUÇÃO DE INPUT TODOS OS DADOS NUMA LINHA 
            cout << "Insira ID MARCA MODELO COR\n";
            scanf("%d %s %s %s", &carros[i].id,carros[i].marca,carros[i].modelo, carros[i].cor);
            //cin >> carros[i].id >> carros[i].marca>> carros[i].modelo >> carros[i].cor;
            fprintf (file, "%d %s %s %s\n",carros[i].id , carros[i].marca , carros[i].modelo , carros[i].cor );


            /*  //SOLUÇÃO DE INPUT 1 DADO DE CADA VEZ
            cout << "ID carro "<<(i+1)<<" -> "; 
            cin >> carros[i].id;
            fprintf(file,"ID:: %d\n",carros[i].id);
            cout << "Marca carro "<<(i+1)<<" -> ";
            cin >> carros[i].marca;
            fprintf(file,"MARCA:: %s\n",carros[i].marca);
            cout << "Modelo carro "<<(i+1)<<" -> ";
            cin >> carros[i].modelo;
            fprintf(file,"MODELO:: %s\n",carros[i].modelo);
            cout << "Cor carro "<<(i+1)<<" -> ";
            cin >> carros[i].cor;
            fprintf(file,"COR:: %s\n",carros[i].cor);
            fputs("===================================\n",file);
*/
           
        }

    }
     fclose(file);
     

    cout << endl;
    system("pause");				
	return 0;	
}