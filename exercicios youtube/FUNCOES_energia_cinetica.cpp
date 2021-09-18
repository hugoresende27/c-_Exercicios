#include <iostream>
#include <cstdlib>
#include <string>
#include <locale>
#include <math.h>

using namespace std;

double energiaC (float,float);

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	float massa,velocidade,total;
	
	cout<<"PROGRAMA ENERGIA CINETICA--Formula KE = 1/2 * m * v(to the power of 2) \n";
	cout<<"Massa(kgs)?--> ";
	cin>>massa;
	cout<<"Velocidade(m/s)?--> ";
	cin>>velocidade;
	total= energiaC(massa,velocidade);
	cout<<"Total de Joules:: "<<total<<" J"<<endl;
	system("pause");
	return 0;
}

double energiaC (float m,float v)
{
	float ke=0;
	ke=(0.5*m)*pow(v,2);
	return ke;
}


