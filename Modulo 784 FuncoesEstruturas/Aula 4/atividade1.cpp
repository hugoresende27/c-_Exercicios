/*receber um array de 5 inteiros e retornar o maior deles*/
#include <iostream>	
#define MAX 5
using namespace std;

int maior (int tam, int arr[])
{
    int max = arr[0];
    for (int i=0; i<tam; i++)
    {
        if (arr[i]>max)
        {
            max = arr[i];
        }
    }
    return max;
}


int main()								
{
    int vet [MAX];
    cout << "PROGRAMA MAIOR DO ARRAY!\n";
    for (int i=0; i<MAX; i++)
    {
        cout << "VALOR "<< i+1<< "--> ";
        cin >> vet[i];
    }
    cout << "O maior é o "<< maior(MAX,vet) <<endl;
    system("pause");				
	return 0;	
}