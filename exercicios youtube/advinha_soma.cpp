#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>   //para random class
#include <iomanip> //para manipular o input

using namespace std;

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	int num1,num2;
	int total_certo,total_user;
	
	//get the system time
	int seed=time(0);
	
	//seed para random number generator
	srand(seed);
	
	num1 =  1 + rand() % 100; //gera numero aleat�rio de 0 a 100
	num2 =  1 + rand() % 100;
	total_certo=num1+num2;
	cout<<setw(15)<<num1<<endl;  //setw(5) � um estilo, nr de espa�os 
	cout<<setw(13)<<" + "<<num2<<endl;	
	cout<<setw(18)<<"------\n";
	cin>>total_user;
	
	if (total_user==total_certo)
		cout<<"Exelente!!!"<<endl;
	else
		cout<<"Está errado...o certo seria "<<total_certo<<endl;

	
	return 0;
}

