#include <iostream>
//#include <cstdlib>
//#include <string>
//#include <ctime>   //para random class
//#include <iomanip> //para manipular o input

using namespace std;

int main ()
{
	//setlocale (LC_ALL,"pt_BR");
	
	const float AUMENTO=0.04;
	const int ANOS=6;
	float cota=2500;
	
	
	cout<<"Cota de membros 2.500 EUROS/ANO\nAumento de 4% ao ano"<<endl;
	for (int i=1;i<=ANOS;i++)
	{
		cota=cota*AUMENTO+cota;
		cout<<"No ANO "<<i<<" o valor da anuidade vai ser de "<<cota<<" EUROS"<<endl;
		
	}
	system("pause");
	return 0;
}
