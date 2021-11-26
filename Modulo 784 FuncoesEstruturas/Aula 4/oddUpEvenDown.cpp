/*
Create a function that performs an even-odd transform to an array, n times. Each even-odd transformation:
Adds two (+2) to each odd integer.
Subtracts two (-2) from each even integer.
Examples
evenOddTransform([3, 4, 9], 3) ➞ [9, -2, 15]
// Since [3, 4, 9] => [5, 2, 11] => [7, 0, 13] => [9, -2, 15]
evenOddTransform([0, 0, 0], 10) ➞ [-20, -20, -20]
evenOddTransform([1, 2, 3], 1) ➞ [3, 0, 5]
*/
#include <iostream>	
#include <vector>
#define MAX 3
using namespace std;
void imprimeVetor(int *arr);
void evenOddTransform( int *arr, int n) ;

int main()								
{
    int arr []= {3,4,9};
    int arr2 []= {0,0,0};
    int arr3 []= {1,2,3};
    evenOddTransform(arr,3);
    evenOddTransform(arr2, 10);
    evenOddTransform(arr3, 1) ;
    system("pause");				
	return 0;	
}

void evenOddTransform( int *arr, int n) {
    int m;
    int contador=0;
    do {
        for (int i=0; i<MAX;i++)
        {
            if (arr[i] % 2 == 0)
            {
                arr[i]-=2;
            }
            else {
                arr[i]+=2;
            }
        }
        contador++;
    } while (contador<n);
    imprimeVetor(arr);
}

void imprimeVetor(int *arr)
{
    for (int i=0; i<MAX; i++)
    {
        cout<< arr[i] << " | ";
    }
    cout << endl;
}
