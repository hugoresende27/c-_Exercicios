#include <iostream>	
#include <vector>				
using namespace std;


int main()								
{
    vector<int> numeros {8,10,6,2,4};
   // int cont=0;
    bool troca;
do{
    troca = false;
    for (int i=0; i<(numeros.size()-1);i++)      //percorro o vetor 4x para o ordenar, porque o vetor tem 5 posições
    {                           //n elementos estão para n-1 pares adjacentes
        if (numeros[i]>numeros[i+1])
        {
            int aux = numeros[i];
            numeros[i]=numeros[i+1];
            numeros[i+1]=aux;
            //cont++;
        }
        
    }
}while (troca);

    for (int i = 0; i<numeros.size();i++)
    {
        cout<<"|"<<numeros[i];
    }
    //cout<<"Contador::"<<cont;
    cout<<endl;
    system("pause");				
	return 0;	
}