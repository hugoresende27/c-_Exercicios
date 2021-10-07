#include <iostream>
#include <cstdlib>
#include <string.h>
#include <stdio.h>
#include <locale>

using namespace std;

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	bool yes=!false;
	bool no =!yes;
	if(!no)
	cout<<"true";
	else
	cout<<"false";
	/*
	int i=0,j=i++,k=--i;
	if(i>0)
	j++;
	else
	k++;
	if(k==0)
	i++;
	else if(k>0)
	k--;
	else
	k++;
	cout<<i*j*k;
	*/
	int i=3,j=0;
	do{
		i--;
		j++;
	}while(i>=0);
	cout<<j;
	


	system("pause");
	return 0;
}


