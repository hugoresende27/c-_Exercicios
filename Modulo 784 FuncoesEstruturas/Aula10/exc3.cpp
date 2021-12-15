/*
Escreva um programa para mostrar o maior de dois números, utilizando uma função que recebe apontadores para 
esses 2 números e retorna o apontador para o maior deles.
*/


#include <iostream>	
		
using namespace std;

int * maior(int *pt1, int *pt2){
    if (*pt1>*pt2){
        return pt1;
    } else {
        return pt2;
    }
}

int main()								
{
    int numA, numB;
    int *mai;
    
    cout << "num A --> ";
    cin >> numA;
    cout << "num B --> ";
    cin >> numB;

    mai = maior(&numA,&numB);
    cout << *mai << endl;
    system("pause");				
	return 0;	
}