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
    switch (tipo)
    {
        case 'A':
            consumo=kms / veiculo[0];
            break;
        case 'B':
            consumo=kms / veiculo[1];
            break;
        case 'C':
            consumo=kms / veiculo[2];
            break;
        default:
            printf ("Tipo errado!\n");
            break;
    }
    if ( (tipo == 'A') || (tipo=='B') || (tipo=='C') )
    {
        printf ("Veiculo tipo %c percorreu %.2fKm's e gastou  %.2f Litros  \n", tipo,kms,consumo);
    }
    
    system("pause");				
	return 0;	
}