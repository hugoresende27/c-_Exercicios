/*
Write a function that takes an array of numbers and returns an array with two elements:
The first element should be the sum of all even numbers in the array.
The second element should be the sum of all odd numbers in the array.
Example
sumOddAndEven([1, 2, 3, 4, 5, 6]) ➞ [12, 9]
// 2 + 4 + 6 = 12 and 1 + 3 + 5 = 9
sumOddAndEven([-1, -2, -3, -4, -5, -6]) ➞ [-12, -9])
sumOddAndEven([0, 0]) ➞ [0, 0])
Notes
Count 0 as an even number.
*/
#include <iostream>	
		
using namespace std;

void sumOddAndEven(int *arr, int t) {
    int somaPares=0,somaImpares=0;
    int retVet[2];
	for (int i=0; i < t; i++)
    {
        if (arr[i] % 2 == 0)
        {
            somaPares+=arr[i];
            
        }
        else {
            somaImpares += arr[i];
        }
        retVet[0]=somaPares;
        retVet[1]=somaImpares;
    }
    for (int i=0; i<2;i++)
    {
        cout << retVet[i]<< " | ";
    }
    cout << endl;
}

int main()								
{
    int arr []= {1,2,3,4,5,6};
    int tamArr = sizeof(arr)/sizeof(arr[0]);
    int arr1 []= {-1,-2,-3,-4,-5,-6};
    int tamArr1 = sizeof(arr1)/sizeof(arr1[0]);
    int arr2 []= {0,0};
    int tamArr2 = sizeof(arr2)/sizeof(arr2[0]);
    
    sumOddAndEven(arr,tamArr);
    sumOddAndEven(arr1,tamArr1);
    sumOddAndEven(arr2,tamArr2);
  
    
    system("pause");				
	return 0;	
}