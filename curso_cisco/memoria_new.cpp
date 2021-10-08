#include <iostream>

using namespace std;

int main() 
{
	float *arr = new float[5];

	for (int i = 0; i < 5; i++)
		arr[i] = i * i;

	for (int i = 0; i < 5; i++)
		cout << arr[i] << endl;

	delete[] arr;//no final para libertar espaço o array é esvaziado []

    int *tabptr = new int[5], sum = 0;

	for (int i = 0; i < 5; i++)
		tabptr[i] = i;
	for (int i = 0; i < 5; i++)
		sum += tabptr[i];           //foi usado sum para guardar o valor da soma do vetor
	delete [] tabptr;               //o tabptr[] foi deletado, esvaziando assim o seu espaço na memória
	cout << "sum=" << sum << endl;
}