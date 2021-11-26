
#include <iostream>	
#define MAX 10		
using namespace std;

int soma(int somaAtual,int a)
{   
    return somaAtual+a;
}

float media (int tam,int vet[])
{
    float tot=0;
    for (int i=0; i<tam; i++)
    {
        tot = soma(tot,vet[i]); //recursividade de funções, função soma vai receber o valor da soma atual e o valor do vetor na posição [i]
    }
    //cout << tot<<endl;
    return tot/tam;
}


float mediaB (int vet[])
{
    float t = sizeof(vet)/sizeof(vet[0]);//posso usar a posição de um array para correr em todos os sistemas, o inteiro pode valer 2 bytes noutros sistemas
    float tot=0;
    for (int i=1; i<= t ; i++)
    {
        tot+=vet[i];
    }
    cout << t << "!!!!!";
    //cout << tot<<endl;
    return tot/ t;
}

// Função de Ordenação por Inserção
// Insertion sort function
void insertion_sort(int a[])
{
 int i, j, tmp;
  
 for(i = 1; i < MAX; i++)
 {
  tmp = a[i];
  for(j = i-1; j >= 0 && tmp < a[j]; j--)
  {
   a[j+1] = a[j];
  }
  a[j+1] = tmp;
 }
for (int i=0; i<MAX;i++)
{
    cout << a[i]<< "|";
}
}

int main()								
{
    int nums[MAX] = {2,3,7,57,39,45,10,19,25,100};//{1,2,3,4,5};//
    float med;                          //primeiro divido nums / 10 para saber quanto ocupa cada elemento = 4
    //cout<< (sizeof(nums)/4)<<endl;      //divide por 4 porque cada elemento ocupa 4  bytes, /4 = numero de elementos
    //cout<< (sizeof(med)/4)<<endl;  

    insertion_sort(nums);
    // for (int i=0; i<MAX;i++)
    // {
    //     cout << nums[i]<< "|";
    // }
    cout << media(MAX,nums) <<endl;
    //cout << mediaB(nums) <<endl;
    system("pause");				
	return 0;	
}