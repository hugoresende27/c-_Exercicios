#include <iostream>
#include <cstdlib>
#include <string>
#include <locale>
#include<math.h>

using namespace std;

double distancia(int tempo=0);

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	int tempo=0;
	double dist=0;
	cout<<"PROGRAMA DISTANCIA AO LONGO DE 10segundos--Formula:  d = 1/2 * g * t(to the power of 2)\n";
	for (int i = 1; i<=10; i++)		//loop dos 10 segundos, de i=0 ate i=10
	{
		dist=distancia(i);			//chamada da funcao com a formula, cada iteracao passa se o valor de i, 1,2,3,4,5...
		cout<<"Ao fim de "<<i<<" segundos total de "<<dist<<" metros"<<endl;
	}

	system("pause");
	return 0;
}


double distancia(int t)
{
	double dist=0;
	const double g = 9.8;			//valor da gravidade, pode ser constante
	
	dist = (0.5*g)*pow(t,2);		//elevado ao quadrado, uso da lib math, (var t, elevada a 2)
	return dist;
}


