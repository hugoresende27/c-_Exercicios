#include <iostream>	
#include <string.h>
#include <math.h>		
using namespace std;
/*
para implementar uma função recursiva é importante
que a mesma sempre tenha uma condição de saída da recursividade para evitar o loop
infinito.
*/
int fatorial(int n){
    int fat=1;
    for (int i=n; i>=1; i--){
        fat *= i;
    }
    return fat;
}

int fatorialRecursivo(int x){//função recursiva deixa de ter iterações(loop for) para ter recursões
    if (x <= 1){    //instrução de saída da função
        cout << x<<" = ";
        return 1;
    } else {
        cout << x <<" x ";
        return x*fatorialRecursivo(x-1);//função evocada novamente
    }
}

int main()								
{
    int num;
    cout << "NUM:: ";
    cin >>num;
    cout << fatorial(num)<<endl;
    cout << fatorialRecursivo(num);
    cout << endl;
    system("pause");				
	return 0;	
}