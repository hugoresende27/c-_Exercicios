#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	int dado=0;
	srand (time(0));
	dado = (rand()%10)+1;
	cout<<"tiras te um ::"<<dado<<endl;
	switch (dado)
	{
		case 1://if dado == 1
			cout<<"UM"<<endl;
			break;	
		case 2: 
			cout<<"DOIS"<<endl;
			break;
		case 3:
			cout <<"TR�S"<<endl;
			break;
		case 4 :
			cout <<"QUATRO"<<endl;
			break;
		case 5 :
			cout <<"CINCO"<<endl;
			break;
		case 6 : 
			cout <<"SEIS"<<endl;
			break;
		default :
			cout <<"Inválido"<<endl;
			break;
	}
	cout <<"seu nr-->"<<dado<<endl;
	return 0;
}
