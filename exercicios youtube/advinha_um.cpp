#include <iostream>
#include <cstdlib>
#include <string>
#include <locale>
#include <time.h>
using namespace std;

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	srand (time(NULL));
	/*for (int i=0;i<5;i++)
	{
		cout << (rand() % 10)<<endl;	
	}*/
	int num=(rand() % 10)+1;
	int aposta=0,contador=0;
	//cout<<"auxiliar teste-->"<<num<<endl;
	while (aposta!=num)
	{
		cout<<"Advinha o nr entre 1 e 10:: ";
		cin>>aposta;
		while (aposta<1 || aposta>10)
		{
			cout<<"entre 1 e 10:: ";
			cin>>aposta;
		}
		contador+=1;
			if (aposta==num)
			{
				
				break;
			}
			else if (aposta<num)
			{
				cout<<"aposta muito baixa\n";
			}
			else 
			{
				cout<<"aposta muito alta\n";
			}
		
	}
	cout<<"Parabens, venceu! Jogadas--> "<<contador<<endl;
 	

	system("pause");
	return 0;
}


