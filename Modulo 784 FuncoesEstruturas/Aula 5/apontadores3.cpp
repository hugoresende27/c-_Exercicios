/*
Distinga:
*ptr
ptr
&ptr
*/
#include <iostream>	
		
using namespace std;

int main()								
{
    int a = 999;
    int *ptr;
    ptr = &a;
    printf ("Valor de a:: %d\n", a);
    printf ("Valor de ptr(d):: %d\n", ptr);   //ptr = endereco inteiro da posição de memória
    printf ("Valor de ptr(p):: %p\n", ptr);   //ptr = endereco hexadecimal da posição de memória
    printf ("Valor de *ptr:: %d\n", *ptr);    //*ptr = conteudo da var para onde o ptr está a apontar
    printf ("Valor de &ptr:: %d\n", &ptr);    //&ptr endereco de memoria

    int num1= 10;
    int num2= 20;
    int *ptrZ,*ptrX;
    ptrZ = &num1;
    ptrX = &num2;
    cout << "NUM1::"<< *ptrZ << endl;
    cout << "NUM2::"<< *ptrX << endl;
    cout << ptrZ << endl;
    cout << ptrX << endl;
    cout << "*********************\n";
    /*
    ptrZ = &num2;
    ptrX = &num1;
    cout << "NUM2::"<< *ptrZ << endl;
    cout << "NUM1::"<< *ptrX << endl;
    cout << ptrZ << endl;
    cout << ptrX << endl;
    cout << "*********************\n";
    */
    int temp = *ptrZ; //igual a temp = num1
    *ptrZ = *ptrX;  //igual a num1 = num2
    *ptrX = temp;
    cout << "NUM2::"<< *ptrZ << endl;
    cout << "NUM1::"<< *ptrX << endl;
    cout << "NUM2::"<< num1 << endl;
    cout << "NUM1::"<< num2 << endl;
    cout << ptrZ << endl;
    cout << ptrX << endl;
    system("pause");				
	return 0;	
}