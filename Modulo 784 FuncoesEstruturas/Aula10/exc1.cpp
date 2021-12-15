/*
Crie um programa que guarde num array 10 números inteiros recebidos do utilizador e que por intermédio de uma 
função, copie para um novo array apenas as posições ímpares do array inicial. Imprima os dois arrays no ecrã. 
Nota: Utilize apenas apontadores para manipular os arrays.
*/

#include <iostream>	
#define T 10	
using namespace std;


void imprimeArray(int *pt){
    for (int i=0; i<T;i++){
        cout << *(pt+i)<<" | ";
    }
}

void mudaArray(int *ptA, int *ptB){
    int cont=0;
    for (int i=0; i<T;i++){ 
        if (i % 2 == 0){
            *(ptB+cont) = *(ptA+i);
            cont++;
        }
    }
}

void mudaArray2(int *ptA, int *ptB){
   int cont=0;
    for (int i=1; i<T; i= i+2){ 
            *(ptB+cont) = *(ptA+i);
            cont++;   
        }
    }

int * mudaArray3(int *ptA){
   int cont=0, arr2[5];
   int *pt = arr2;
    for (int i=1; i<T; i= i+2){ 
            arr2[cont] = *(ptA+i);
            cont++;   
        }
    return pt;
    }
   
int *f1(int *ns){
    int nums1[T/2];
    int j=0;
    for (int i=0; i<T;i++){
        if (i%2 != 0 && i != 0){
            *(nums1+j) = *(ns+i);//nums1[0] -> nums1[1]
            j++;
            cout << (nums1+j)<< "-";
        } 
    }
    return nums1;
}

int main()								
{
    int arrA[T];
    int arrB[5];
    int *pontA = arrA;// pontA aponta para arrA
    int *pontB = arrB;// pontB aponta para arrB
    

    for (int i=0; i<T; i++){
        cout << "Posição "<<i+1<<" | "<<(arrA+i)<<"--> ";
        //cin >> arrA[i];
        //cin>>*(pontA + i);
        cin>>*(arrA + i);
    }

    imprimeArray(pontA);
    cout << "###################################\n";
    //mudaArray(pontA,pontB);
    
    mudaArray2(pontA,pontB);
    cout << "###################################\n";
    for (int i=0; i<5;i++){
        cout << arrB[i] <<" | ";
    }

    cout << "###################################\n";
    int *ptr ;
    int *ptr2=arrA;
    //ptr = f1(arrA);
    //cout << *(ptr) <<" ::::: ";
    for (int i=0; i<(T/2);i++){
        cout << *(ptr+i) <<" | ";
        *(ptr+i) = f1(ptr2);
        //cout << (ptr) <<" | ";
       // ptr = f1(arrA);
    }
    
    system("pause");				
	return 0;	
}
