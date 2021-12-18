/*
. Escreva um programa que contenha uma estrutura representando uma data
válida. Essa estrutura deve conter os campos dia, mês e ano. Em seguida, leia
duas datas e armazene nessa estrutura. Calcule e exiba o número de dias que
decorrem entre as duas datas
*/
#include <iostream>	
#include <string.h>
#include <math.h>	
#define T 2	
using namespace std;

struct exc11{
    int dia;
    int mes;
    int ano;
};

void imprime(exc11 a){
    printf ("\nDia- Mês- Ano\n");
    printf ("%d / %d / %d",a.dia,a.mes,a.ano);
}

int main()								
{
    exc11 dados[2];
    int totalDias;

    for (int i=0; i<T;i++){
        cout << "Qual o ano? --> ";
        cin >> dados[i].ano;
        cout << "Qual o mes? --> ";
        cin >> dados[i].mes;
        cout << "Qual o dia? --> ";
        cin >> dados[i].dia;
    }

    dados[2].ano = abs(dados[0].ano - dados[1].ano);
    dados[2].dia = abs(dados[0].dia - dados[1].dia);
    dados[2].mes = abs(dados[0].mes - dados[1].mes);

    for (int i=0; i<T; i++) imprime(dados[i]);
    totalDias = (dados[2].ano*365) + (dados[2].mes*30) + dados[2].dia;
    cout << "\n\tTotal de DIAS:: "<<totalDias<<endl;
    
    

    cout << endl;
    system("pause");				
	return 0;	
}