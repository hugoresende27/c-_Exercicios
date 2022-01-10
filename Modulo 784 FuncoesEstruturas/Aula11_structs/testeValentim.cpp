#include <iostream>	
#include <String.h>	
#define CONST 1	
using namespace std;

struct Data{
    int dia;
    int mes;
    int ano;
};

struct Cliente{
    string cod="";
    string nome="";
    int idade;
};

struct Veiculo{
    string cod="";
    string marca="";
    int anoFab;
};

struct Aluguer{
    string cod="";
    Data data;
    Cliente cli;
    Veiculo vei;
};

int main(){
    Aluguer aluguer[CONST];
    string temp;
    cout<<"Exercicio aluguer automoveis\n";
    
	for (int i=0; i<CONST ; i++){
        cout<<"Introduza numero de reserva: ";
        getline(cin, aluguer[i].cod);
        cout<<"Introduza o ano: ";
        cin>>aluguer[i].data.ano;
        cout<<"Introduza o mes: ";
        cin>>aluguer[i].data.mes;
        cout<<"Introduza o dia: ";
        cin>>aluguer[i].data.dia;
        cout<<"Introduza o numero de cliente: ";
        fflush(stdin);
        getline(cin, aluguer[i].cli.cod);
        cout<<"Introduza o nome: ";
        getline(cin, aluguer[i].cli.nome);
        cout << "Introduza a idade: ";
        cin>>aluguer[i].cli.idade;
        cout<<"Introduza o codigo do veiculo: ";
        getline(cin, aluguer[i].vei.cod);  
        cout<<"Introduza a marca do veiculo: ";
        getline(cin, aluguer[i].vei.marca);
        cout<<"Introduza o ano de fabrico: ";
        cin>>aluguer[i].vei.anoFab;
    }
    for (int i=0; i<CONST; i++){
        cout<<"Ficha de aluguer no." <<i+1;
        i--;
        cout<<"\tNumero da reserva: "<<aluguer[i].cod;
        cout<<"\n\tData de aluguer: "<<aluguer[i].data.dia<<"/"<<aluguer[i].data.mes<<"/"<<aluguer[i].data.ano;
        cout<<"\n\t  Veiculo: "<<aluguer[i].vei.cod;
        cout<<"\n\t  Marca: "<<aluguer[i].vei.marca;
        cout<<"\n\t  Ano fabrico: "<<aluguer[i].vei.anoFab;
        cout<<"\n\tDados cliente: ";
        cout<<"\n\t   Numero cliente: "<<aluguer[i].cli.cod;
        cout<<"\n\t   Nome: "<<aluguer[i].cli.nome<<"   Idade: "<<aluguer[i].cli.idade;
    
	}				
	return 0;	
}