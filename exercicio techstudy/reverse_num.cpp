/*
program to reverse a number using while & for loop
*/

#include <iostream>
#include <cstdlib>
#include <string.h>
#include <stdio.h>
#include <locale>

using namespace std;

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	int num,rev,rev2,num2;
	
	cout<<"Programa reverse numero\nInsira numero::";
	cin>>num;
	cout<<"CICLO WHILE\n";
	while (num>0)
	{							//Ex: 56
		rev = rev * 10;			//rev = 0			
		rev = rev+ num%10;		//rev = 0 + 56%10=6	
		num = num / 10;			//num = 56/10 = 5		
	}
	cout<<"Numero revertido::"<<rev<<endl;
	
	cout<<"\nInsira numero::";
	cin>>num2;
	cout<<"CICLO FOR\n";
	
	for (rev2=0;num2>0;num2=num2/10)
	{
		rev2 = rev2 * 10 ;
		rev2 = rev2 + num2%10;
	}
	cout<<"Numero revertido::"<<rev2<<endl;
	system("pause");
	return 0;
}


