#include <iostream>	
#include <string.h>
#include <math.h>	
#define M 1	
using namespace std;
//struct em C é como se fosse uma Classe

struct Departamento{
    int cod;
    char descricao[30]  ;  
};
struct Cargo{
    int cod;
    char descricao[30]   ; 
};

struct Funcionario{
    int cod;
    char nome[30];
    float salario;
    struct Departamento dpt;
    struct Cargo crg;
    
};


int main()								
{

    Funcionario funcs[M];

    for (int i=0;i<M;i++ ){
        cout<<"NOME "<<i<<" :: ";
        cin>> funcs[i].nome;
        cout<<"COD "<<i<<" :: ";
        cin>> funcs[i].cod;
        cout<<"SALARIO "<<i<<" :: ";
        cin>> funcs[i].salario;
        cout<<"DEPARTAMENTO [codigo] "<<i<<" :: ";
        cin>> funcs[i].dpt.cod;
        cout<<"DEPARTAMENTO [descrição] "<<i<<" :: ";
        fflush(stdin);
        fgets(funcs[i].dpt.descricao,30,stdin);
        cout<<"CARGO [codigo] "<<i<<" :: ";
        cin>> funcs[i].crg.cod;
        cout<<"CARGO [descrição] "<<i<<" :: ";
        fflush(stdin);
        fgets(funcs[i].crg.descricao,30,stdin);    
    }

    for (int i=0;i<M;i++ ){
        
        cout<<"\nNOME "<< funcs[i].nome;  
        cout<<"\nCOD "<< funcs[i].cod;       
        cout<<"\nSALARIO " <<funcs[i].salario;      
        cout<<"\nDEPARTAMENTO [codigo] " <<funcs[i].dpt.cod;     
        cout<<"\nDEPARTAMENTO [descrição] "<< funcs[i].dpt.descricao;       
        cout<<"\nCARGO [codigo] "<< funcs[i].crg.cod;      
        cout<<"\nCARGO [descrição] "<<funcs[i].crg.descricao;
    }
    cout << endl;
    system("pause");				
	return 0;	
}