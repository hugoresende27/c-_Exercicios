#include <iostream>
#include <cstdlib>
#include <string>
#include <locale>
#include<typeinfo.h>
//#include<tlist.h>

using namespace std;

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	int a = 12;
	float k;
	double t;
	//printf("%d", typeof(a).name );
	cout << typeid(k).name() << endl;
	cout<<typeid(a).name()<<endl;
	cout<<typeid(t).name()<<endl;

	system("pause");
	return 0;
}


