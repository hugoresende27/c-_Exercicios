#include <iostream>
#include <cstdlib>
#include <string>
#include <locale>

#include "retangulo.h"

using namespace std;


Retangulo::Retangulo(){
	altura=1;
	comp=1;
	
}

Retangulo::Retangulo(double a,double c){
	altura=a;
	comp=c;
	
}

void Retangulo::defAltura(double a)
{
	if (a>0)
	altura=a;
	else
	{
		cout<<"Altura minimo 1"<<endl;
		exit(EXIT_FAILURE);
	}
}

void Retangulo::defComp(double c)
{
	if (c>0)
	comp=c;
	else
	{
		cout<<"Comprimento minimo 1"<<endl;
		exit(EXIT_FAILURE);
	}
}



