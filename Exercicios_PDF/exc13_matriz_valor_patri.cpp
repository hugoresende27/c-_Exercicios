/*
Faça um programa que calcula o valor patrimonial dos produtos de uma empresa. O
programa deve ler 3 vetores com 5 elementos cada: COD (números inteiros), QUANT (números
inteiros) e VAL (números reais). Correspondentes ao código do produto, quantidade em estoque e
valor unitário. O programa deve fazer a leitura dos valores referentes a cada vetor e calcular o
valor patrimonial dos produtos, fazendo somatório da multiplicação da quantidade em estoque
pelo valor unitário, utilizando os dados armazenados nos vetores QUANT e VAL. Imprima o
Código, seguido do valor patrimonial do produto.
*/
#include <iostream>			
using namespace std;

int main()								
{
    int cod[5],qtd[5];
    float val[5],tot[5];
    float soma=0;
    for (int i=0;i<5;i++)
    {
        printf ("Código do produto?--> ");
        scanf("%d",&cod[i]);
        printf ("Quantidade?--> ");
        scanf("%d",&qtd[i]);
        printf ("Valor unitário do produto?--> ");
        scanf("%f",&val[i]);
        tot[i]=val[i]*qtd[i];
    }
    for (int i=0;i<5;i++)
    {
        printf ("\tCOD::%d --- QTD::%d \tVALOR UNI::%.2f€\tTOTAL::%.2f\n",cod[i], qtd[i], val[i], tot[i]);
        soma+=tot[i];
    }

    printf ("Total stock:: %.2f\n",soma);
    system("pause");				
	return 0;	
}