#include <iostream>
#include <cstdlib>
#include <string>
#include <locale>

using namespace std;

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	int num;
	int resultado=0;
	cout<<"Introduza um valor:: "<<endl;
	cin>>num;
	
	while (num<0)
	{
		cout<<"Apenas positivos...\n";
		cin>>num;
	}
	
	for (int i=1;i<=num;i++)
	{	
	/*	if (i==num)
		{
			cout<<" = ";
		}	*/
	
		resultado+=i;
		//cout<<resultado<<" + ";	
		
	}
	cout<<"total "<<resultado<<endl;

	system("pause");
	return 0;
}

