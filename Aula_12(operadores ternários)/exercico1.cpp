#include <iostream>

using namespace std;

int main ()
{

	int num;

    printf("Operadores Ternários\n");
    do
    {
	printf ("Introduza um número (999)para sair -> ");
    scanf("%d",&num);
    if (num==999) {
	break;}
    num>0 ? printf("\t-->> Mais uma unidade -->> %d = %d \n",num,num+1) : printf("\t<<-- Menos uma unidade <<-- %d = %d \n",num,num-1) ;
	}while (num!=999);
	system("pause");
	return 0;
}
