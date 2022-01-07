#include <iostream>	
#include <string.h>
#include <math.h>	
#define MAX 1	
using namespace std;

struct dataNasc{
    int diaN;
    int mesN;
    int anoN;

};

struct info{
    char endereco[200];
    int tel;
    dataNasc datas;
};

struct socio{
    char nome[20];
    int idade;
    int num;
    info infos;
};

int main()								
{

    socio lst[MAX];
    for (int i=0; i<MAX;i++){
        cout<< "nome ->";
        cin >> lst[i].nome;
        cout<< "idade ->";
        cin >> lst[i].idade;
        cout<< "nums ->";
        cin >> lst[i].num;
        cout<< "Ano nascimento ->";
        cin >> lst[i].infos.datas.anoN;
    }


    for (int i=0; i<MAX;i++){
        cout<< lst[i].nome<<" | ";
        cout<< lst[i].idade<<" | ";
        cout<< lst[i].num<<" | ";
        cout<< lst[i].infos.datas.anoN<<" | ";
        cout<<endl;

    }

    cout << endl;
    system("pause");				
	return 0;	
}