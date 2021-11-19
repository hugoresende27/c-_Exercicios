#include <iostream>
#include <cstdlib>
#include <string.h>
#include <stdio.h>
#include <locale>

using namespace std;

int main ()
{
	int nLin,nCol;
	string matriz[nLin][nCol];
	cout<<"Linhas->";
	cin>>nLin;
	cout<<"Colunas->";
	cin>>nCol;
/*	for (int i=0; i<nLin; i++)
	{
		for (int j=0; j<nCol; j++)
		{
			cout<<i<<":"<<j<<"->";
			cin>>matriz[i][j];
		}
	}
	
/*	for (int i=0; i<nLin; i++)
	{
		for (int j=0; j<nCol; j++)
		{
			cout<<matriz[i][j];
		}
		cout<<endl;
	}*/



	system("pause");
	return 0;
}


