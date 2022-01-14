/*
Guarde num array 5 números inseridos pelo utilizador e escreva-os posteriormente num ficheiro. Imprima esse ficheiro no ecrã.
*/
#include <iostream>	
#include <string.h>
#include <math.h>		
#include <locale.h>
using namespace std;

int main()								
{
    FILE *file;
    file = fopen ("arrayInteiros.txt", "w");

    int inteiros[5];
    for (int i=0; i<5;i++){
        cout << i+1<<" -> valor:: ";
        cin >> inteiros[i];
    }
    fputs(inteiros,file);


    cout << endl;
    system("pause");				
	return 0;	
}