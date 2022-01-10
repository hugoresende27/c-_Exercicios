/*
suponha q uma empresa de aluguer de automoveis tente registar a saida e entrada de um veiculo bem como o
 numero e nome do cliente q alugou o mesmo. Desenvolva um programa que possibilite realizar este mesmo registo para 3 veiculos
 e 3 clientes, imprimindo no ecra toda a informacao associada aos mesmos
 estruturas: 
 Data (dia, mes, ano)
 Cliente(nome,idade)
 Veiculo(marca,ano)
  Aluguer (Data,Cliente,Veiculo)
*/
#include <iostream>	
#include <string.h>
#include <math.h>	
#define M 1	
using namespace std;

struct Data {
    int dia;
    int mes;
    int ano;
};

struct Cliente {
    char cod[5];
    char nome[100];
    int idade;
};

struct Veiculo {
    char cod[5];
    char marca[20];
    int anoFab;
};

struct Aluguer {
    char cod[5];
    Data data;
    Cliente cli;
    Veiculo vei;
    enum Preco { A=25, B=50, C=100} prc;
    float total;
};

int main()								
{

    Aluguer alugueres[M];
    cout << "RENT A CAR\n";

    for (int i=0; i<M ; i++){

        


        cout << "ALUGUER :: "<< i+1;
        
        cout << "\nPreencha CODIGO de aluguer :: ";
        fflush(stdin);
        fgets(alugueres[i].cod,5,stdin);
        

        cout << "Preencha a DATA\nANO:: ";
        cin >> alugueres[i].data.ano;
        cout << "MES:: ";
        cin >> alugueres[i].data.mes;
        cout << "DIA:: ";
        cin >> alugueres[i].data.dia;
         
        cout << "CODIGO CLIENTE:: ";
        fflush(stdin);
        fgets(alugueres[i].cli.cod,5,stdin);
        cout << "NOME CLIENTE:: ";
        fflush(stdin);
        fgets(alugueres[i].cli.nome,100,stdin);
        cout << "IDADE:: ";
        cin >> alugueres[i].cli.idade;

        cout << "CODIGO VEICULO:: ";
        fflush(stdin);
        fgets(alugueres[i].vei.cod,5,stdin);    
        cout << "MARCA VEICULO:: ";
        fflush(stdin);
        fgets(alugueres[i].vei.marca,20,stdin);
        cout << "ANO VEICULO:: ";
        cin >> alugueres[i].vei.anoFab;

       
        char op;
        cout << "Qual a categoria de de preco [ A | B | C]--> ";
        cin>>op;
        switch (toupper (op))
        {
        case 'A':
            alugueres[i].prc = alugueres[i].A ;  
            break;
        case 'B':
            alugueres[i].prc = alugueres[i].B ;  
            break;
        case 'C':
            alugueres[i].prc = alugueres[i].C ;  
            break;
        
        default:
            break;
        }
        
       

    }

    for (int i=0; i<M; i++){
        cout << "\n\nFICHA DE ALUGUER\n";
        cout << "\tCOD ALUGUER:: "<<alugueres[i].cod;
        printf ("\tDATA %d / %d / %d \n", alugueres[i].data.dia,alugueres[i].data.mes,alugueres[i].data.ano);
        printf ("\tVEICULO COD: %s \tMARCA: %s \tANO : %d", alugueres[i].vei.cod,alugueres[i].vei.marca,alugueres[i].vei.anoFab);
        printf ("\n\tCLIENTE COD: %s \tNOME: %s \tIDADE : %d", alugueres[i].cli.cod,alugueres[i].cli.nome,alugueres[i].cli.idade);

        cout << "PRECO FINAL:: "<<alugueres[i].prc;
    }
 
    cout << endl;
    system("pause");				
	return 0;	
}