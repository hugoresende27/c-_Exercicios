#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	string nome;
	cout<<"Como te chamas? --> ";
	cin>>nome;
	cout<<"Ol� "<<nome;
	return 0;
}

