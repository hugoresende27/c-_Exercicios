#include <iostream>	
#include <string.h>
#include <math.h>		
#include <locale.h>
#include <fstream>
#include <mem.h>

//https://www.youtube.com/watch?v=yFboyOwk2oM&ab_channel=CodeVault
using namespace std;

int main()								
{

    //int *p =(int*) malloc(sizeof(int)); //alocar memória
    int *p =(int*) calloc(3,sizeof(int)); //alocar memória
    //*p = 5;
    //printf ("o valor é %d", *p);
    p[1]=3;
    p[2]=90;
  
    printf ("o valor é %d e %d teste %d", p[1],p[2],p[0]); //p[0] vai ter um valor de memória
    free(p);    //desalocar/libertar memória
    
    cout << endl;
    system("pause");				
	return 0;	
}