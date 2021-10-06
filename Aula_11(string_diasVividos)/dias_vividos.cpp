#include <iostream>
#include <cstdlib>
#include <string.h>
#include <stdio.h>
#include <locale>
#include <time.h>
#define MAX 50

using namespace std;

int main ()
{
    int dia,mes,ano,ano_n,dia_n,mes_n,total_d,total_m,total_a,total;

    cout<<"PROGRAMA DIAS VIVIDOS\n";
    cout<<"Qual o dia actual? ";
    cin>>dia;
    cout<<"Qual o mês actual? ";
    cin>>mes;
    cout<<"Qual o ano actual? ";
    cin>>ano;

    cout<<"Em que dia nasceu? ";
    cin>>dia_n;
    cout<<"Em que mês nasceu? ";
    cin>>mes_n;
    cout<<"Em que ano nasceu? ";
    cin>>ano_n;
    
    total_d=dia-dia_n;
    total_m=(mes-mes_n)*30;
    total_a=(ano-ano_n)*365;

    cout<<"Total dias"<<total_d<<endl;
    cout<<"Total meses"<<total_m<<endl;
    cout<<"Total anos"<<total_a<<endl;
    total=total_d+total_m+total_a;
    cout<<"\n\tVIVESTE um total de "<<total<<" dias\n";

	system("pause");
	return 0;
}

