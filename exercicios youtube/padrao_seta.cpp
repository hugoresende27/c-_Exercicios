#include <iostream>
#include <cstdlib>
#include <string>
#include <locale>

using namespace std;

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	
	cout<<"PROGRAMA SETA\n";
	
	//primeiro triangulo
	for (int i=0;i<15;i++)
	{
		for(int f=0;f<=i;f++)			//loop dentro de loop, primeiro i ate 15, depois f ate i
		{
			cout<<"+";
		}
		cout<<"\n";						//quando f maior do que i(15) muda de linha
	}
	cout<<"\n";
	//segundo triangulo
	for (int i=15;i>0;i--)
	{									//mesmo principio, 2 loops, agora i comeca em 15 e i-- ate 0
		for(int b=0;b<i;b++)
		{								//quando b for menor do que i(0), muda de linha
			cout<<"+";
		}
		cout<<"\n";
	}
	cout<<"\nFINAL\n";
	system("pause");
	return 0;
}


