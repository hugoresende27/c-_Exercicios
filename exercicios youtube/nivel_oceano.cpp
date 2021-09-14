#include <iostream>
#include <cstdlib>
#include <string>
#include <locale>

using namespace std;

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	float subida=0;
	int anos=25;
	for (int i=1;i<=anos;i++)
	{
		
		cout<<"No ano "<<i<<" vai subir "<<subida<<"mm"<<endl;
		subida+=1.5;
	}
	system("pause");
	return 0;
}

