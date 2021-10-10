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
        troca=false;            //troca falsa para começar
        for (int i=0;i<qtd-1;i++)   //loop para percorrer o vetor
        {
            if (numeros[i]>numeros[i+1])    //testa se o indice é maior q o indice seguinte
            {
                troca=true;         //se for, troca true
                int m=numeros[i];   //m como variável auxiliar, recebe primeiro indice
                numeros[i]=numeros[i+1];//primeiro indice recebe o indice da frente, que é maior
                numeros[i+1]=m; //indice da frente recebe valor q estava no primeiro indice
            }                   //valor do primeiro indice foi guardado numa var auxiliar, bolha, 
                                //ficou guardado lá em cima
        }
   
    } while (troca);    //enquanto troca for verdadeira
    
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