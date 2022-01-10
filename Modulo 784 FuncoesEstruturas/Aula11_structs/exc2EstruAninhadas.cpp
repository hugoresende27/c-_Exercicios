/*
guardar os alunos de uma turma
data (dia,mes,ano)
aluno (data,nome)
turma (curso,local,coordenador,aluno)
*/
#include <iostream>	
#include <string.h>
#include <math.h>	
#define M 2	
using namespace std;

struct Data {
    int dia;
    int mes;
    int ano;
};

struct Aluno {
    char nome[50];
    Data dataNasc;
};

struct Turma {
    char curso[20];
    char coordenador[50];
    char local[20];
    Aluno alunos[M];
};

int main()								
{
    Turma Turma1;
    cout << "CURSO DA TURMA::";
    fflush(stdin);
    fgets(Turma1.curso,20,stdin);
    cout << "COORDENADOR DA TURMA::";
    fflush(stdin);
    fgets(Turma1.coordenador,50,stdin);
    cout << "LOCAL DA TURMA::";
    fflush(stdin);
    fgets(Turma1.local,20,stdin);

    for (int i=0; i<M; i++){

        cout << "NOME ALUNO:: ";
        fflush(stdin);
        fgets(Turma1.alunos[i].nome,50,stdin);
        cout << "Preencha a DATA\nANO:: ";
        cin >> Turma1.alunos[i].dataNasc.ano;
        cout << "MES:: ";
        cin >> Turma1.alunos[i].dataNasc.mes;
        cout << "DIA:: ";
        cin >> Turma1.alunos[i].dataNasc.dia;
    }


    printf ("\nTURMA %s \tCOORD: %s \tLOCAL: %s", Turma1.curso,Turma1.coordenador,Turma1.local);
    
    for (int i=0; i<M; i++){
        printf ("%d / %d / %d", Turma1.alunos[i].dataNasc.ano,Turma1.alunos[i].dataNasc.mes,Turma1.alunos[i].dataNasc.dia);
        cout << "NOME: "<<Turma1.alunos[i].nome;
    }
    cout << endl;
    system("pause");				
	return 0;	
}