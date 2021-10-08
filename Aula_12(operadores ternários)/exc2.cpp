#include <iostream>

using namespace std;

int main ()
{
	int num;
    printf("Operadores Ternários\nInsira um número --> ");
    scanf("%d",&num);
    num>0 ? printf("\t-->> Mais uma unidade -->> %d = %d \n",num,abs(num+1)) : printf("\t<<-- Menos uma unidade <<-- %d = %d \n",num,abs(num-1)) ;
	system("pause");
	return 0;
}