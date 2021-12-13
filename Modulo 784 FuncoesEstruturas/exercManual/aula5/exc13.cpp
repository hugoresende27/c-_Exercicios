/*
A gerente do cabeleireiro Sempre Bela tem uma tabela em que registra as quantidades de serviços executados nos "pes",
 nas "mãos"e o serviço de podologia
das cinco manicures. Sabendo-se que cada uma ganha 50% do que faturou ao
mês, criar um programa que possa calcular e imprimir quanto cada uma vai
receber, uma vez que não têm carteiras assinadas, os valores, respectivamente,
são: R$10,00, R$15,00 e R$30,00.
--0-pes
--1-maos
--2-podogia
--3-total
--4-50% total
*/

#include <iostream>	
#define T 2	
using namespace std;

int main()								
{

     cout << "PROGRAMA CABELOS \n";
    char lojas [T][100];
    int faturacao[T][5]; //matriz linhas com lojas e colunas com serviços e total
    float totais[T];
    int valA=0,valB=0,valC=0;  
    int aux=0;  

    for (int i=0; i<T; i++){

        cout << "Nome da loja--> ";
        fflush(stdin);
        fgets(lojas[i], 100, stdin);
      
        cout << "Quantos serviços de PÉS na loja "<<lojas[i]<<"--> ";
        scanf("%d", &valA);
        faturacao[i][0]= valA*10;
        cout << "Quantos serviços de MÃOS na loja "<<lojas[i]<<"--> ";
        scanf("%d", &valB);
        faturacao[i][1] = valB*15;
        cout << "Quantos serviços de PODOLOGIA na loja "<<lojas[i]<<"--> ";
        scanf("%d", &valC);
        faturacao[i][2]=valC*30;

    }
    ///////////////////////////////////////PRINT DA MATRIZ SIMPLES

     for (int i=0; i<T; i++){
       for (int j=0; j<3; j++){
           cout << faturacao[i][j]<< "| ";
       }
       cout << endl;
    }

    
   ///////////////////////////////////////ADICIONAR FATURACAO E LUCRO 
    for (int i=0; i<T; i++){
        aux=0;
        for (int j=0; j<3; j++){
            aux += faturacao[i][j];           
        }
        faturacao[i][3] = aux;
        faturacao[i][4] = aux*0.5;
    }

   cout << "\nLISTA LOJAS\n";
    for (int i=0; i<T;i++){
        cout << "LOJA "<< i+1 <<" --> " << lojas[i]<<endl;
    }
    cout << "MATRIZ FINAL FATURAÇÃO\nPES|MÃOS|PODO|TOTAL|50%\n";

    for (int i=0; i<T; i++){
       for (int j=0; j<5; j++){
           cout << faturacao[i][j]<< "| ";
       }
       cout << endl;
    }

    system("pause");				
	return 0;	
}
