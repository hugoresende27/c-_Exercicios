/*
Um clube social com 37 associados deseja que você faça um programa para
armazenar os dados cadastrais desses associados. Os dados são: nome, dia, mês
e ano de nascimento, valor da mensalidade e quantidade de dependentes. O
programa deverá ler os dados e imprimir depois na tela. Deverá também informar
o associado (ou os associados) com o maior número de dependentes.
*/
#include <iostream>	
#include <string.h>
#include <math.h>	
#define MAX 2	
using namespace std;

struct dataNasc{
    int dia;
    int mes;
    int ano;
};

struct socio{
    char nome [20];
    dataNasc nasc;
    float mensalidade;
    int dependentes;
};



int main()								
{
    socio socios[MAX];
    int aux=0;//indiceMaisDep;
    for (int i=0; i< MAX ; i++){
        cout << "NOME::";
        scanf("%s", &socios[i].nome);
        cout << "ANO NASCIMENTO:: ";
        scanf("%d", &socios[i].nasc.ano);
        cout << "MÊS NASCIMENTO:: ";
        scanf("%d", &socios[i].nasc.mes);
        cout << "DIA NASCIMENTO:: ";
        scanf("%d", &socios[i].nasc.dia);
        cout << "MENSALIDADE::";
        scanf("%f", &socios[i].mensalidade);
        cout << "DEPENDENTES::";
        scanf("%d", &socios[i].dependentes);
        if (socios[i].dependentes>aux){
            aux = socios[i].dependentes;
            //indiceMaisDep = i;
        }

    }
    cout << "NOME\t\tDATA\tMENS \tDEP\n";
    for (int i=0; i< MAX ; i++){
        printf ("%s \t| %d - %d - %d |  %.1f \t %.d\n",
                socios[i].nome,
                socios[i].nasc.ano,
                socios[i].nasc.mes,
                socios[i].nasc.dia,
                socios[i].mensalidade,
                socios[i].dependentes);
    }

    cout << "Socio com mais dependentes:: \n";
    for (int i=0; i< MAX ; i++){
        if (socios[i].dependentes == aux){
              printf ("%s \t| %d - %d - %d |  %.1f \t %.d\n",
                socios[i].nome,
                socios[i].nasc.ano,
                socios[i].nasc.mes,
                socios[i].nasc.dia,
                socios[i].mensalidade,
                socios[i].dependentes);
        }
    }
 
    cout << endl;
    system("pause");				
	return 0;	
}



