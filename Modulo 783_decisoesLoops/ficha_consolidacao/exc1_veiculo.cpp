/*
Crie um programa que receba um tipo de veículo (A, B e C), o percurso percorrido em km e calcule o consumo estimado, conforme o tipo, sendo (A=8, B=9 e C=12) km/litro. Nota: Crie duas versões do programa, usando "if" e "switch case".
*/
#include <iostream>	
		
using namespace std;


int main()								
{                //A,B,C
    int veiculo[]={8,9,12};     // km/litro
    char tipo;
    float kms,consumo;  
    printf ("Qual o tipo de veiculo? ([A|B|C]) --> ");
    scanf ("%c",&tipo);
    tipo=toupper(tipo); 
    printf ("Quantos Km's percorreu?--> ");
    scanf("%f",&kms);
    if (tipo=='A')
    {
        consumo=kms / veiculo[0];
    }
    else
    {
        if (tipo=='B')
        {
            consumo=kms / veiculo[1];
        }
        else
        {
            if (tipo=='C')
            {
                consumo=kms / veiculo[2];
            }
            else
            {
                printf ("Escolha errada!\n");
                exit(1);
            }
        }
    }
    printf ("Veiculo tipo %c percorreu %.2fKm's e gastou  %.2f Litros  \n", tipo,kms,consumo);
    system("pause");				
	return 0;	
}