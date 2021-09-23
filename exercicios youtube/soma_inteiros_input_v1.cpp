 	#include <iostream>
#include <cstdlib>
#include <string>
#include <locale>

using namespace std;

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	int num,soma=0;
	printf("SOMA NUMEROS\n");
	printf("Num--> ");
	scanf("%d", &num);
	for (int i=0;i<=num;i++)
	{
		soma+=i;
	}
	printf("A soma :: %d\n", soma);

	system("pause");
	return 0;
}


