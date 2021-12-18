//Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e exiba o maior endereço.


#include <iostream>	
		
using namespace std;


int main()								
{
    int z,b;
    cout <<&z<<endl;
    cout <<&b<<endl;
    printf("\n\t%d", &z);
    printf("\n\t%d", &b);
    if (&z > &b){
        cout<< "\nA maior\n";
    }else {
        cout << "\nB maior\n";
    }
    system("pause");				
	return 0;	
}