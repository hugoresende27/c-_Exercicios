/*
C++ Program to convert days to years, weeks and days.
*/

#include <iostream>
#include <cstdlib>
#include <string>
#include <locale>

using namespace std;

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	int dias,total_dias;
	float anos,semanas;
	
	cout<<"PROGRAMA CONVERTE DIAS EM ANOS/SEMANAS/DIAS\nQuantos dias?? -> ";
	cin>>dias;
	anos=dias/365;
	semanas=(dias%365)/7;
	total_dias=dias-((anos*365)+(semanas*7));
	
	cout<<"\t"<<dias<< " dias ::: "<<anos<<" anos\t"<<semanas<<" semanas\t"<<total_dias<<" dias\n";

	system("pause");
	return 0;
}


