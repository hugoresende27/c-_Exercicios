
#include <iostream>	
#define MAX 10	
using namespace std;

int * f1(int *valores){//recebo os valores por referência, int* retorna um apontador
    int arr_temp[MAX];
    //int *arr;

    //arr = arr_temp;// atribuir apontador arr a referencia da primeira posicao do arr_temp

    for (int i=0; i<MAX; i++){
        //*(arr + i)= *(valores+i) * 2;
        arr_temp[i]= *(valores+i) * 2;
      
    }
    int *arr = arr_temp;
    return arr;
}

int * max (int *pa,int *pb){//retorna um apontador
    
    // cout << "*PA::"<<*pa<<endl;
    // cout << "PA::"<<pa<<endl;

    if (*pa>*pb){
        *pa = *pa*2;
        return pa;//pa é um endereço de memória
    }else {
        *pb = *pb*2;
        return pb;
    }
}

int teste(int n){
    return n*2;
}

int main()								
{
    int nums[MAX] = {2,3,7,57,39,45,10,19,25,100};
    int *ptr = f1(nums);//ptr é o return da f1
    
    /*
    for (int i=0; i<MAX;i++){
        printf ("%d \t", ptr[i]);
    }
    */

    int *p, i=10,j=25;

    cout << "valor i antes :: "<<i<<endl;
    cout << "valor i antes :: "<<j<<endl;

    p = max(&i,&j); //a funcao max vai alterar o valor da var i
    
    cout << "valor i depois :: "<<i<<endl;
    cout << "valor i depois :: "<<j<<endl;

    // cout << "Endereco i :: "<<&i<<endl;
    
    // cout << *p;
    // cout <<"ENDERECO p:: "<< p<<endl;
    cout <<endl;

    int x=5;
    cout << teste(x)<<endl;
    cout << x<<endl;
    system("pause");				
	return 0;	
}