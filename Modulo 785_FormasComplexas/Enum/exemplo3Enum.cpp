#include <iostream>	
#include <string.h>
#include <math.h>		
using namespace std;

enum semana{
    segunda = 1, terca = 2, quarta = 3, quinta = 5, sexta = 6
} w1,w2,w3;

int main()								
{

    enum semana s;
    s = quarta;
    printf ("%d \n", s);

    cout << "TERCA-> "<<terca<<endl;

    printf ("w1-> %d \n", w1);
    printf ("w2-> %d \n ", w2);
    printf ("w3-> %d \n", w3);

    ////////////////////////
    cout <<"IMprimir diretamente:: " << terca << endl;

    cout << endl;
    system("pause");				
	return 0;	
}