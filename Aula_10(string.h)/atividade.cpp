#include <iostream>
#include <cstdlib>
#include <string.h>
#include <stdio.h>
#include <locale>
#define MAX 10
using namespace std;

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	char str1[MAX]="Estacao";
	char str2[MAX]=" Outono";
	char str_temp[MAX];
	
	cout<<"PROGRAMA STRINGS\n";
	cout<< "string 1::"<<str1<<endl;
	cout<< "string 2::"<<str2<<endl;
	printf("\t2.ORDEM INVERSA -> %c %c %c %c %c %c %c\n", str1[6],str1[5],str1[4],str1[3],str1[2],str1[1],str1[0]);
	strcpy(str_temp,str1);//copiar str1 para str_temp
	strcat(str1,str2);	//concatenar str1 + str2
	printf("\t3.CONCATENACAO -> %s \n",str1);
	strcpy(str1,str_temp);//copia a str_temp para str1 novamente
	printf("\t4.TAMANHO str1:: %d\n\t\t  str2:: %d\n", strlen(str1),strlen(str2));
	printf("\t5.COMPARA %d\n", strcmp(str1,str2));//compara str1 com str2
	system("pause");
	return 0;
}


