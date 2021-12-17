/*
Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura deve conter o número de matrícula 
do aluno, seu nome e as notas de três provas. Defina também um tipo para esta estrutura. Agora, escreva um programa
 que leia os dados de cinco alunos e os armazena nessa estrutura. Em seguida, exiba o nome e as notas do aluno que 
 possui a maior média geral dentre os cinco.
*/

#include <iostream>	
#include <string.h>
#define TAM 2
		
using namespace std;

struct alunos{
    int numMat;
    char nome [50];
    float notas[3];
    float media;
};

float calcMedia(float n1, float n2, float n3){
    return (n1+n2+n3)/3;
}

int main()								
{
    struct alunos esc[TAM];
    float melhor=0;
    char nome_melhor[100];

    cout << "\n********ALUNOS*********\n";
    for (int i=0; i<TAM ; i++){
        cout << "Insira o nome: ";
		scanf("%s", &esc[i].nome);
		cout << "Insira o número de matricula: ";
		scanf("%d", &esc[i].numMat);
		for (int j=0; j<3; j++){
            cout << "Nota "<<j+1<< "--> ";
            cin >> esc[i].notas[j];
        }
    }

    cout << "\n********TABELA TODOS OS ALUNOS*********\n";
    for (int i=0; i<TAM ; i++){
        esc[i].media = calcMedia(esc[i].notas[0],esc[i].notas[1],esc[i].notas[2]);
		printf("\n%s", esc[i].nome);
		printf("\t%d", esc[i].numMat);
		for (int j=0; j<3; j++){
            printf ("\t%.2f", esc[i].notas[j]);
        }
        printf("\n%.2f", esc[i].media);
    }
    
    for (int i=0; i<TAM; i++){
        if (esc[i].media>=melhor ){
            melhor = esc[i].media;
            strcpy(nome_melhor,esc[i].nome);
            //nome_melhor = esc[i].nome;
        }
    }

    cout << "\nMELHOR MEDIA NOTA :: "<<melhor<<endl;
    cout << "\nMELHOR MEDIA NOME :: "<<nome_melhor<<endl;

    cout <<endl;

    system("pause");				
	return 0;	
}