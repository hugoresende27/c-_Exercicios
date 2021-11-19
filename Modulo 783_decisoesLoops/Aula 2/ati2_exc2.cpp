/*
Dado um número inserido pelo utilizador, verifique se o mesmo é maior, menor ou igual a 10.
*/
#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Insira um valor --> ";
    cin >> num;
    if (num>10)
    {
        cout << "Valor MAIOR do que 10\n";
    }
    else
    {
        if (num<10)
        {
            cout << "Valor MENOR do que 10\n";
        }
        else
        {
            cout << "Valor igual a 10\n";
        }
    }

       
    system ("pause");
    return 0;
}