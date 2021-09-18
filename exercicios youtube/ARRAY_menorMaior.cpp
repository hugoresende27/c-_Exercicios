/*
Write a program that lets the user enter 10 values into an array. The program should then display the largest and smallest values stored in 
the array.
*/
#include <iostream>
#include <cstdlib>
#include <string>
#include <locale>

using namespace std;

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	int array[10];
	int maior=0,menor=0;
	
	cout<<"PROGRAMA ARRAYS\n";
	
	for (int i=0;i<10;i++)
	{
		cout<<"Valor::"<<i+1<<"::";
		cin>>array[i];
		if (i==0)
		{
			maior=array[0];
			menor=array[0];
		}
		else
		{
			if (array[i]>maior)
			{
				maior=array[i];
			}
			else if (array[i]<menor)
			{
				menor=array[i];
			}
		}
	}
	
	for (int i=0;i<10;i++)
	{
		cout<<array[i]<<"|";
	}
	
	cout<<"\nMAIOR::"<<maior<<"\nMENOR::"<<menor<<endl;

	system("pause");
	return 0;
}


