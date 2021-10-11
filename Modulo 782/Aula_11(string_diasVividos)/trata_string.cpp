#include <iostream>
#include <cstdlib>
#include <string.h>
#include <stdio.h>
#include <locale>
#define MAX 50

using namespace std;

int main ()
{
	
	char str[MAX];
	int convertido[MAX];
	cout<<"PROGRAMA Converte char em int ASCII \n";
	fgets(str,sizeof(str),stdin);
	
	cout<<"CONVERSAO DIRECTA\n";
	printf("\n\tConvertendo, %c = %d",str[0], int(str[0]));
	printf("\n\tConvertendo, %c = %d",str[1], int(str[1]));
	printf("\n\tConvertendo, %c = %d",str[2], int(str[2]));
	printf("\n\tConvertendo, %c = %d",str[3], int(str[3]));
	printf("\n\tConvertendo, %c = %d",str[4], int(str[4]));
	
	//converter o vetor
	convertido[0]=int(str[0]);
	convertido[1]=int(str[1]);
	convertido[2]=int(str[2]);
	convertido[3]=int(str[3]);
	convertido[4]=int(str[4]);
	cout<<"\nPRINT DO VETOR CONVERSAO\n";
	printf ("\n\tIndex 0-> %c em char fica ->%d", str[0],convertido[0]);
	printf ("\n\tIndex 1-> %c em char fica ->%d", str[1],convertido[1]);
	printf ("\n\tIndex 2-> %c em char fica ->%d", str[2],convertido[2]);
	printf ("\n\tIndex 3-> %c em char fica ->%d", str[3],convertido[3]);
	printf ("\n\tIndex 4-> %c em char fica ->%d", str[4],convertido[4]);

	
	cout<<"\n\nCICLO FOR";
	cout<<"\nTESTE"<<strlen(str)<<endl;
	
	for (int i =0; i<(strlen(str)-1);i++)
	{
		cout<<endl<<i;
		printf("\n\tConvertendo, %c = %d", str[i],int(str[i]));
	}
	cout<<endl;
	system("pause");
	return 0;
}


