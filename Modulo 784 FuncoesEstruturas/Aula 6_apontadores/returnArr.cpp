
#include <iostream>	
#define MAX 10	
using namespace std;

int* f1(int *valores){//recebo os valores por referência, int* retorna um apontador
    int arr_temp[MAX];
    //int *arr;

    //arr = arr_temp;// atribuir apontador arr a referencia da primeira posicao do arr_temp

    for (int i=0; i<MAX; i++){
        //*(arr + i)= *(valores+i) * 2;
        arr_temp[i]= *(valores+i) * 2;
      
    }
    return arr_temp;
}


int main()								
{
    int nums[MAX] = {2,3,7,57,39,45,10,19,25,100};
    int *ptr = f1(nums);//ptr é o return da f1
    for (int i=0; i<MAX;i++){
        printf ("%d \t", ptr[i]);
    }
    
    cout <<endl;
    system("pause");				
	return 0;	
}