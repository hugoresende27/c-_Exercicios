/*
 Program to find the largest number among three number.
 */
#include <iostream>
#include <cstdlib>
#include <string>
#include <locale>

using namespace std;

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	int num[3];
	
	cout<<"QUAL O MAIOR?\n";
	for (int i=0;i<3;i++)
	{
		cout<<"Nr "<<i<<"-->";
		cin>>num[i];
	}
	
	for (int i=0;i<3;i++)
	{
		cout<<num[i]<<endl;
	}
	
	if (num[0]>num[1] && num[1]>num[2])
	{
		cout<<num[0]<<" -> MAIOR\n";
	}
	else if (num[1]>num[0] && num[0]>num[2])
	{
		cout<<num[1]<<" -> MAIOR\n";
	}
	else
	{
		cout<<num[2]<<" -> MAIOR\n";
	}


	system("pause");
	return 0;
}


