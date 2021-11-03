#include <iostream>
#define MAX 10
using namespace std;

int main ()
{

	char str[MAX];	
	cout<<"PROGRAMA STRINGS\nInsira uma string-->";
	cin>>str;
	printf("\n\tORDEM INVERSA ->%c %c %c %c %c %c %c %c %c %c %c\n", str[9],str[8],str[7],str[6],str[5],str[4],str[3],str[2],str[1],str[0]);

	system("pause");
	return 0;
}
