
#include <iostream>	
#define MAX 10	
using namespace std;
const int lnktest1 = 100; //constante global

int soma(int somaAtual,int a)
{   
    return somaAtual+a;
}

float media (int *vet)  //* passar o vetor com uma referência, um apontador
{                       //um apontador é uma variável especial q aponta para uma posição da memória
    float tot=0;
    for (int i=0; i<MAX; i++)       //passar um vetor por referência é melhor para gestão de memória
    {
        tot = soma(tot,vet[i]); 
    }
    vet[3]=5;
    return tot/MAX;
}


void retorna2(int *vet)
{
    for (int i=0; i<MAX; i++)
    {
        cout<< vet[i]<<"|";
    }
}

int main()								
{
    int nums[MAX]= {1,2,3,4,5,6,7,8,9,0};
    cout << "antes da função media:::::"<< nums[3]<<endl;
    cout << media(nums) <<endl;
    cout << "*********************\n";
    retorna2(nums);
    cout << "\nDEPOIS da função media:::::"<< nums[3]<<endl;
    retorna2(nums);
    //lnktest1 = 200;
    cout << lnktest1;
    system("pause");				
	return 0;	
}