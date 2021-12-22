/*
Crie um programa que possibilite guardar numa estrutura os seguintes atributos de uma
empresa com 10 funcionários – Codigo, Nome, Morada, Telefone, Vencimento. Imprima
uma listagem de todos os funcionários e a média dos seus vencimentos.
-*/

#include <iostream>	
#include <string.h>
#include <math.h>	
#define MAX 3	
using namespace std;

struct funcionario {
    int codigo;
    char nome[50];
    char morada[200];
    int tel;
    float vencimento; 
};

void printFunc(funcionario a){
    printf ("%s \t %d \t %s \t %d \t %.2f€ \n ",
            a.nome,a.codigo,a.morada,a.tel,a.vencimento);

}

int main()								
{
    funcionario funcionarios[MAX];
    float totalVenc=0,mediaVenc=0;


    for (int i=0; i<MAX;i++){
        cout << "Nome:: ";
        scanf ("%s", &funcionarios[i].nome);
        fflush(stdin);
        cout << "Código:: ";
        scanf ("%d", &funcionarios[i].codigo);
        cout << "Morada:: ";
        scanf ("%s", &funcionarios[i].morada);
        fflush(stdin);
        cout << "Telefone:: ";
        scanf ("%d", &funcionarios[i].tel);
        cout << "Vencimento:: ";
        scanf ("%f", &funcionarios[i].vencimento);
        totalVenc += funcionarios[i].vencimento;
    }
    mediaVenc = totalVenc/MAX;


    for (int i=0; i< MAX; i++){
        printFunc(funcionarios[i]);
    }
    printf ("Media Vencimentos %.2f Euros", mediaVenc);
    cout << endl;
    system("pause");				
	return 0;	
}