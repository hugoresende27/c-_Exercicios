/*
2.Faça um programa que leia dois conjuntos de números inteiros, compostos cada um por 10 elementos. O output do programa deverá ser os elementos comuns aos dois conjuntos.
*/
#include <iostream>	
#define TAM 10	
using namespace std;


int main()								
{
    int vetA [TAM];
    int vetB [TAM];
    int vetC [TAM];
   
    for (int i=0; i<TAM;i++)
    {
        cout << "CONJUNTO 1  ELEMENTO "<< i+1<<" --> ";
        cin >> vetA[i];
    }
   
    for (int i=0; i<TAM;i++)
    {
        cout << "CONJUNTO 2  ELEMENTO "<< i+1<<" --> ";
        cin >> vetB[i];
    }
    int cont=0;
    cout << "\n*** VALORES EM COMUM ***\n";
    for (int i=0; i<TAM;i++)
    {
        for (int j=0; j<TAM;j++)
        {
            if (vetA[i] == vetB[j])
            {      
                cout << vetA[i]<<" | "; 
                vetC[cont] = vetA[i];
                cont++;
            }
        }      
    }
     cout << "\n*** VALORES EM COMUM VETOR  ***\n";
     
     for (int i=0; i<cont;i++)
     {
         cout << vetC[i]<<" * ";
     }
     cout<< endl << cont<<" <-- Elementos repetidos\n";

    cout << endl;
    system("pause");				
	return 0;	
}
