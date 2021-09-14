#include <iostream>
//#include <cstdlib>
//#include <string>
//#include <ctime>   //para random class
//#include <iomanip> //para manipular o input

using namespace std;

int main ()
{
	//setlocale (LC_ALL,"pt_BR");
	int cota=2500;
	float aumento=0.04;
	int nova_cota=0;
	cout<<"Cota de membros 2.500 EUROS/ANO\nAumento de 4% ao ano"<<endl;
	for (int i=1;i<=6;i++)
	{
		nova_cota=cota*aumento+cota;
		cout<<"No ANO "<<i<<" o valor da anuidade vai ser de "<<nova_cota<<" EUROS"<<endl;
		cota=nova_cota;
	}
	system("pause");
	return 0;
}
