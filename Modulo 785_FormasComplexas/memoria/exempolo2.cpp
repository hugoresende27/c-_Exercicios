#include <iostream>	
#include <string.h>
#include <math.h>		
#include <locale.h>
#include <fstream>
#include <mem.h>

//https://www.youtube.com/watch?v=yFboyOwk2oM&ab_channel=CodeVault
using namespace std;

void fail (){
    cout << "Falhou!";
    exit(EXIT_FAILURE);
}

int main()								
{

    int *z =(int*) malloc(sizeof(int)); //alocar memória
    int *p =(int*) calloc(3,sizeof(int)); //alocar memória
    *z = 5;
    printf ("o valor é %d", *z);
    p[1]=3;
    p[2]=90;
  
    printf ("o valor é %d e %d teste %d", p[1],p[2],p[0]); //p[0] vai ter um valor de memória
    free(p);    //desalocar/libertar memória
    free(z);

    char *name = (char*)malloc(4*sizeof(char));
    if (name == NULL) fail();
    strcpy(name,"hugo");
    cout << name;

    free(name);

    
    cout << endl;
    system("pause");				
	return 0;	
}