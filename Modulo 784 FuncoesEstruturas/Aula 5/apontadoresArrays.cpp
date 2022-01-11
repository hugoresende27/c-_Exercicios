
#include <iostream>	
		
using namespace std;


int main()								
{
    char arr[] = {'a','b','c','d','e'};
    char *apt;
    apt = &arr[1];
    cout << char(*apt+1) << endl;//vai buscar o elemento 'b' e soma 1
    cout << *(apt+1) << endl; //vai buscar o elemento [1]+1, elemento 2, 'c'

    int nums[]={11,22,33,44,55,69,75,83,97,110};
    int *pont=&nums[0];
    //pont = &nums[0] + 5;
    cout << pont <<endl;
    cout << *pont <<endl;
    cout << *pont+1 <<endl; //valor do index [0] = 11 + 1 = 12
    cout << *(pont+1) <<endl;//valor do index [0+1] = 22

    //*pont = 666;
    for (int i=0; i< 10; i++)
    {
       // cout << nums[i] << " | ";
        printf ("%d | ",*pont+i);
    }

    system("pause");				
	return 0;	
}