#include <iostream>					
using namespace std;

/*programa para ondenar um array, no fim limpa o array para libertar memória. o número de posições do array é dado pelo user*/
int main()								
{
    int qtd;
    int *numeros = new int[qtd];        //ao usar new garanto o espaço de memória,regra simples para usar a palavra-chave new; toda vez que você digitar new, digite delete, ajuda a evitar problemas de memória
    bool troca;

    printf ("Quantos números para arranjar? --> ");
    scanf("%d",&qtd);
    if  (qtd <= 0 || qtd > 10000)
    {
        printf("\nImpossivel...\n");
        return 1;                       //programa termina e devolve 1 como erro
    }

    for (int i=0;i<qtd;i++)
    {
        printf("Valor %d -->",i+1);
        scanf("%d",&numeros[i]);
    }
    do
    {
        troca=false;
        for (int i=0;i<qtd-1;i++)
        {
            if (numeros[i]>numeros[i+1])
            {
                troca=true;
                int m=numeros[i];
                numeros[i]=numeros[i+1];
                numeros[i+1]=m;
            }
         
        }
   
    } while (troca);
    
    printf("\n\t-------ARRAY ORDENADO-----\n");
    for (int i=0;i<qtd;i++)
    {
        printf("|%d",numeros[i]);
    }
    delete [] numeros;
    cout<<endl;
    system("pause");				
	return 0;	
}