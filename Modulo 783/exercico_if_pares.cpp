#include <iostream>					
using namespace std;


int main()								
{
  
    int num;
    cout << "Qual o número --> ";
    cin >> num;
    if (num % 2 == 0)
        cout << "PAR\n";
    else
        cout << "IMPAR\n";
    system("pause");				
	return 0;	
}