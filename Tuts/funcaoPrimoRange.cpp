#include <iostream>	
/*
 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43
*/		
using namespace std;

int primo (int);
int primo2 (int);

int main()								
{
    int num;
    cout << "Qual o número?--> ";
    cin >> num;
    
    for (int i=1;i<=num;i++)
    {
        if (primo(i)==1)
        {
            cout << i<<"|";
        }
    }
    
    //primo2(num)==1 ? cout<< num<<" é primo2\n" : cout << num << " não é primo2\n";
    system("pause");				
	return 0;	
}

int primo (int x)
{
    int cont=0;//contador

    for (int i=1; i<=x;i++)  //ciclo de 1 ate ao x
    {
        if (x % i == 0)   //se x % 1,2,3,...x == 0 contador++
        cont++;
    }
    if (cont == 2)      //se o x for divisivel apenas por ele e por 1, contador vai ser 2
    return 1;
    else
    return 0;
}