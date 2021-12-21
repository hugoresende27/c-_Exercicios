/*
Escreva um programa que declare uma matriz 10x10 de inteiros. Você criar uma função void (procedimento) para 
inicializar a matriz com zeros usando um ponteiro para a matriz. Faça outra função void para preencher depois a 
matriz com os números de 99 a 0, também usando ponteiro para matriz como parâmetro. Por fim, o programa deve 
imprimir a matriz.
*/
#include <iostream>	
#include <string.h>
#include <math.h>	
#define L 25


using namespace std;

void  iniciaMat(int *m){
    for(int i=0; i<L; i++){
        *m = 0;
        m++;
    }
}

void printMat(int *m){
    cout << endl;
    for (int i=0; i<L; i++){
        cout << *(m+i)<< " | ";
    }
}

void preencheMat(int *m){
    for (int i=0; i<L; i++){
        *(m+i) =rand() % 33 + 1988;// rand() % 100;
    }
}


int main()								
{
    int mat[L];
    iniciaMat(mat);
    printMat(mat);
    preencheMat(mat);
    printMat(mat);
    cout << endl;
    system("pause");				
	return 0;	
}