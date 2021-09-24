#include <iostream>
#include <cstdlib>
#include <string>
#include <locale>

using namespace std;

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	char nome[10];
	int numeros [10];
	int tamanho=0;
	
	numeros[0]=5;
	numeros[1]=10;
	numeros[2]=20;
	numeros[3]=40;
	numeros[4]=44;
	numeros[5]=55;
	numeros[6]=78;
	numeros[9]=99;
	cout<<"NUMEROS[6]::";
	cin>>numeros[6];
	printf ("\n----> %d", numeros[5]);
	
	printf("\nindice [5]::");
	scanf("%d", &numeros[5]);
	
	printf ("\n valor ocupado em memoria por array em bytes:: %d", (sizeof(numeros)));
	tamanho = (sizeof(numeros)/sizeof(numeros[0]));		//sizeof tamnho em bytes, syzeof/sizeof(arr[0]) numero de indices
	printf("\n numero total de index:: %d", tamanho);
	
	for (int i=0;i<10;i++)
	{
		cout<<"\nPosicao "<<i<<" -> "<<numeros[i]<<endl;
	}
	

	cout<<nome<<endl;
	
	/*
	cout<<"Nome?";
	scanf("%s",nome);
	
	printf("%s\n",nome);
	*/
	system("pause");
	return 0;
}


