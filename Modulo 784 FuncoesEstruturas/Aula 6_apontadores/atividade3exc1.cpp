#include <iostream>	
		
using namespace std;


int main()								
{
    int x, y, *p;
    y = 0; //y tem o valor de 0
    p = &y; //p vai receber o endereço de memória de y
    x = *p; //x vai receber o valor de y, ou seja 0
    x = 4; //variável x vai ter o valor 4
    (*p)++;// o apontador p, tem o valor de y, 0, ao adicionar ++ vou adicionar +1, *p = 1
    --x; //a variável x tinha o valor de 4, -1 passou a valer 3
    (*p) += x; //apontador *p tem o valor de 1, variável x vale 3, 1+3 = 4
    
    system("pause");				
	return 0;	
}