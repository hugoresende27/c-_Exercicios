#include <iostream>
#include <cstdlib>
#include <string>
#include <locale>

using namespace std;

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	int numRandom=7;
	int aposta;
	int limite=3;
	int contador=1;
	bool perdeu=false;
	
while (aposta!=numRandom && !perdeu)
	{
		if (contador<=3 )
		{
			cout<<"Insira o numero (jogada "<<contador<<")::";
			cin>>aposta;	
			contador++;
		} 
		else
		{
			perdeu=true;
		}
	}
	if (perdeu)
	{
		cout<<"PERDEU! \n";
	} else {
		cout<<"VENCEDOR"<<endl;;
	}
	
	

	system("pause");
	return 0;
}


