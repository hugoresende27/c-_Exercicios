//União em q os atributos façam sentido estar numa união

#include <iostream>	
#include <string.h>
#include <math.h>		
#define M 2
using namespace std;

typedef union aluno{

    int num;
    int idade;

    char nome[20];
    char curso[20];
    
} ;

int main()								
{
    union aluno aluno1[M];

    for (int i=0; i<M;i++){
        cout << "Qual o nome --> ";
        cin >>aluno1[i].nome;
        cout <<"NOME:: "<<aluno1[i].nome<<endl;
    
        cout << "Qual a idade --> ";
        cin >>aluno1[i].idade;
        cout <<"IDADE:: "<<aluno1[i].idade<<endl;

        cout << "Qual o curso --> ";
        cin >>aluno1[i].curso;
        cout <<"CURSO:: "<<aluno1[i].curso<<endl;

        cout << "Qual o num --> ";
        cin >>aluno1[i].num;
        cout <<"NUM:: "<<aluno1[i].num<<endl;
    }

    
    for (int i=0; i<M;i++){

        printf ("NOME:: %s\n", aluno1[i].nome);
        printf ("IDADE:: %d\n", aluno1[i].idade);
        printf ("CURSO:: %s\n", aluno1[i].curso);
        printf ("NUM:: %d\n", aluno1[i].num);
      
    }

    cout << "SIZEOF "<<sizeof(aluno1);

    cout << endl;
    system("pause");				
	return 0;	
}