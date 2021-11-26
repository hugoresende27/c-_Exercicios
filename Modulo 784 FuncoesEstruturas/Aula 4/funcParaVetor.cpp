
#include <iostream>	
#define MAX 10		
using namespace std;

float media (int tam,int vet[])
{
    float tot=0;
    for (int i=0; i<tam; i++)
    {
        tot+=vet[i];
    }
    
    return tot/tam;
}

float mediaB (int vet[])
{
    int t = sizeof(vet)/sizeof(vet[0]);//posso usar a posição de um array para correr em todos os sistemas, o inteiro pode valer 2 bytes noutros sistemas
    float tot=0;
    for (int i=0; i< t ; i++)
    {
        tot+=vet[i];
    }
    
    return tot/ t;
}


int main()								
{
    int nums[MAX] = {2,3,7,57,39,45,10,19,25,34};
    float med;                          //primeiro divido nums / 10 para saber quanto ocupa cada elemento = 4
    cout<< (sizeof(nums)/4)<<endl;      //divide por 4 porque cada elemento ocupa 4  bytes, /4 = numero de elementos
    cout<< (sizeof(med)/4)<<endl;       
   
    cout << media(MAX,nums) <<endl;
    cout << mediaB(nums) <<endl;
    system("pause");				
	return 0;	
}