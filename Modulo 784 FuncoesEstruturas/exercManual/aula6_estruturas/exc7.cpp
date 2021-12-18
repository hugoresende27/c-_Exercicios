/*
 Crie uma estrutura representando uma hora. Essa estrutura deve conter os campos hora, minuto e segundo. 
 Agora, escreva um programa que leia um vetor de
cinco posições dessa estrutura e imprima a maior hora
*/

#include <iostream>	
#include <string.h>
#include <math.h>		
#define MAX 3
using namespace std;

struct horas{
    int hora;
    int minuto;
    int segundo;
};

int main()								
{
    horas tabela[MAX];
    horas maior;
    maior.hora =0;
    maior.minuto =0;
    maior.segundo =0;
    //////////////////INPUT DADOS
    for (int i=0; i<MAX;i++){
        cout << "HORA:: ";
        cin >> tabela[i].hora;
        cout << "MINUTO:: ";
        cin >> tabela[i].minuto;
        cout << "SEGUNDO:: ";
        cin >> tabela[i].segundo;
        if ((maior.hora<tabela[i].hora) 
        || (maior.hora == tabela[i].hora && maior.minuto < tabela[i].minuto)
        || (maior.hora == tabela[i].hora && maior.minuto == tabela[i].minuto && maior.segundo < tabela[i].segundo )){
            maior.hora=tabela[i].hora;
            maior.minuto=tabela[i].minuto;
            maior.segundo=tabela[i].segundo;
        }
        /*
        if (maior.hora == tabela[i].hora && maior.minuto < tabela[i].minuto){
            maior.hora=tabela[i].hora;
            maior.minuto=tabela[i].minuto;
            maior.segundo=tabela[i].segundo;
        }
        if (maior.hora == tabela[i].hora && maior.minuto == tabela[i].minuto && maior.segundo < tabela[i].segundo ){
            maior.hora=tabela[i].hora;
            maior.minuto=tabela[i].minuto;
            maior.segundo=tabela[i].segundo;
        }
        */
    }
    /////////////////OUTPUT DADOS
    cout << "\n-------------------------------------------\n";
     for (int i=0; i<MAX;i++){
        cout <<tabela[i].hora<<":"<< tabela[i].minuto<<":"<< tabela[i].segundo<<endl;
    }
    /////////////////OUTPUT DADOS MAIOR
    printf ("A maior hora %d : %d : %d", maior.hora, maior.minuto, maior.segundo);

    cout << endl;
    system("pause");				
	return 0;	
}