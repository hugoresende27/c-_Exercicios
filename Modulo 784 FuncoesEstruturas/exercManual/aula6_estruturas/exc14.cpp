/*
Crie um programa que tenha uma estrutura para armazenar o nome, a idade e
número da carteira de sócio de 50 associados de um clube. Crie também uma estrutura, dentro desta anterior, 
chamada dados que contenha o endereço, telefone
e data de NASCIMENTO.
*/
#include <iostream>	
#include <string.h>
#include <math.h>	
#define MAX 1	
using namespace std;

struct info{
    char endereco[50];
    int tel;
    int diaN;
    int mesN;
    int anoN;
};

struct socio{
    char nome[20];
    int idade;
    int num;
    info infos;
};

int main()								
{
    socio lista[MAX];
    for (int i=0; i< MAX ; i++){
        cout << "NOME::";
        fflush(stdin);
        scanf("%s", &lista[i].nome);
        cout << "ANO NASCIMENTO:: ";
        scanf("%d", &lista[i].infos.anoN);
        cout << "MÊS NASCIMENTO:: ";
        scanf("%d", &lista[i].infos.mesN);
        cout << "DIA NASCIMENTO:: ";
        scanf("%d", &lista[i].infos.diaN);
        cout << "IDADE::";
        scanf("%d", &lista[i].idade);
        cout << "NUM SÓCIO::";
        scanf("%d", &lista[i].num);
        cout << "TELEFONE::";
        scanf("%d", &lista[i].infos.tel);
        cout << "ENDEREÇO::";
        fflush(stdin);
        scanf("%s", &lista[i].infos.endereco);
    }
    cout << "NOME| IDADE|NUM| DATA NASC TEL MORADA\n";
    for (int i=0; i< MAX ; i++){
        printf ("%s \t| %d  %d | %d - %d -%d |  %d \t %s\n",
                lista[i].nome,
                lista[i].idade,
                lista[i].num,
                lista[i].infos.anoN,
                lista[i].infos.mesN,
                lista[i].infos.diaN,
                lista[i].infos.tel,
                lista[i].infos.endereco);
    }
    cout << endl;
    system("pause");				
	return 0;	
}