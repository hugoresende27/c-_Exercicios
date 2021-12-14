/*
6. Construa um programa que leia um valor inteiro e retorne se a raiz desse número
é exata ou não. Escreva uma função para fazer a validação. Ao final imprima o
resultado
*/

#include <iostream>	
#include <math.h>
		
using namespace std;

int exato(int num){
    float res = sqrt(num);
    int a = res;
    res = res - a;
    if (res > 0)
        return 0;
    else
        return 1;
}
/*
void raiz(int n) {
    float aux = sqrt(n);
    int a = aux;
    aux = aux - a;
    cout << aux<<endl;
    cout << a <<endl;
    // if (aux > 0)
    //     return 0;
    // else
    //     return 1;
}
*/
int main()								
{
    int num;
    cout << "NUM --> ";
    cin >> num;
    cout << exato(num)<<endl;
    if(exato(num)==1){cout<<"Raiz inteira\n";}
    else{cout<<"NÂO é inteira\n";}

    //raiz(num);
    system("pause");				
	return 0;	
}