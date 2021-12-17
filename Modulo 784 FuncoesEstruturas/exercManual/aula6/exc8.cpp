/*
Crie uma estrutura capaz de armazenar o nome e a data de nascimento de uma
pessoa. Faça uso de estruturas aninhadas e definição de novo tipo de dado. Agora,
escreva um programa que leia os dados de seis pessoas. Calcule e exiba os nomes
da pessoa mais nova e da mais velha
*/
#include <iostream>	
#include <string.h>
#include <math.h>
#define MAX 3
#define ANO 2021

using namespace std;

struct dataNasc{
    int dia;
    int mes; 
    int ano;
};

struct pessoas{
    char nome[100];
    dataNasc dataN;
};

int main()								
{
    pessoas tab[MAX];
    pessoas mais_velho;
    // mais_velho.dataN.ano = 2021;
    // mais_velho.dataN.mes = 12;
    // mais_velho.dataN.dia = 31;
    
//////////////////////////////////////////////////////////INPUT
    for (int i=0; i<MAX; i++){
        cout << "Qual o seu nome? --> ";
        scanf("%s", &tab[i].nome);
        cout<< "ANO de nascimento? -->";
        scanf ("%d", &tab[i].dataN.ano);
        cout<< "MES de nascimento? -->";
        scanf ("%d", &tab[i].dataN.mes);
        cout<< "DIA de nascimento? -->";
        scanf ("%d", &tab[i].dataN.dia);
        if (((mais_velho.dataN.ano>tab[i].dataN.ano) || i==0 )|| 
            (tab[i].dataN.ano==mais_velho.dataN.ano && tab[i].dataN.mes<mais_velho.dataN.mes) ||
            (tab[i].dataN.ano==mais_velho.dataN.ano && tab[i].dataN.mes<mais_velho.dataN.mes && tab[i].dataN.dia<mais_velho.dataN.dia)
        )
        {
            mais_velho.dataN = tab[i].dataN;
            strcpy(mais_velho.nome,tab[i].nome);
        }
}
////////////////////////////////////////////////////OUTPUT
cout << "-----------------------------------\n";
    for (int i=0; i<MAX; i++){  
        printf("\n%s", tab[i].nome);
        printf ("\t\t%d", tab[i].dataN.ano);
        printf ("-%d", tab[i].dataN.mes);
        printf ("-%d", tab[i].dataN.dia);
    }
    cout << "\n-----------------------------------\n";
    printf ("O mais velho é o/a %s nascido em %d-%d-%d com %d anos", 
    mais_velho.nome, mais_velho.dataN.dia, mais_velho.dataN.mes, mais_velho.dataN.ano, ANO-mais_velho.dataN.ano);
    cout << endl;
    system("pause");				
	return 0;	
}
