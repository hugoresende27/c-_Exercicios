/*
Faça um programa que verifique se um número é primo por meio de um função.
Ao final imprima o resultado.
*/

#include <iostream>	
		
using namespace std;

bool primo(int n){
    int cont=0;
    for (int i=1; i<=n;i++){
        if(n % i == 0){
            cont++;
        }
    }
    if (cont==2) return true;
    return false;
}


int main()								
{
    int num;
    cout << "NUM:: ";
    cin >> num;
    cout << primo(num) <<endl;
    if (primo(num)) cout << "PRIMO";
    else cout << "NOT PRIMO";
    cout << endl;
    system("pause");				
	return 0;	
}