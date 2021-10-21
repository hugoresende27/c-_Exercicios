/*
sum of natural numbers in given range using recursion
Principio?--> 5
Fim? --> 15
29
42
54
65
75
84
92
99
105
110
110
 */
#include <iostream>	
		
using namespace std;

int somaNumero(int pri, int fim)
{
    int teste;
    if (pri==fim)
        return pri;
    else
        teste = pri + somaNumero( pri +1 , fim) ;
        cout << teste << endl;
        return teste;
        //return pri + somaNumero( pri +1 , fim) ;   
}
int main()								
{
    int principio,final;
    cout << "Principio?--> ";
    cin >> principio;
    cout << "Fim? --> ";
    cin >> final;

    cout << somaNumero(principio,final) << endl;
    system("pause");				
	return 0;	
}