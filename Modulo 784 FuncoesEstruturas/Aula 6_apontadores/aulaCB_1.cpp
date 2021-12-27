#include <iostream>	
#include <string.h>
#include <math.h>		
using namespace std;

int main()								
{

    int n = 5;
    cout << &n;
    int * ptr = &n;
    cout <<"\t" <<ptr ;
    cout <<"\t" <<*ptr ;
    *ptr = 10;
    cout <<"\t" <<*ptr ;
    cout <<"\t" <<n ; //n tbm altera para 10

    int v;
    int * ptr2 = &v;   //apontador ptr2 aponta para v
    *ptr2 = 7;
    cout <<"\tV= " <<v ;

    cout << endl;
    system("pause");				
	return 0;	
}