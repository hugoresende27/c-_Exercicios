#include <iostream>

using namespace std;

int main ()
{

	int num;
    printf("Operadores Ternários\n");
    printf ("Introduza um número -> ");
    scanf("%d",&num);
    num>0 ? printf("\tMais uma unidade %d = %d \n",num,num+1) : printf("\Menos uma unidade %d = %d \n",num,num-1) ;
	system("pause");
	return 0;
}