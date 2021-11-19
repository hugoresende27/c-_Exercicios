#include <iostream>
#include <cstdlib>
#include <string>
#include <locale>
#include<stdio.h>//nao necessario se iostream ja incluido

using namespace std;

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	int int_num=255;
	float float_num=99.99895;
	long big_num=1250500750.75;		//tipo long int, nao confundir com double, apesar de escrever .75 nao vai passar porque big_num int
	double l_num=999.3874;
	
	cout<<"12345678901234567890\n";
	cout<<int_num<<endl;
	cout<<float_num<<endl;
	cout<<big_num<<endl;
	printf("\n\n\t########################################################\n\n");
	
	printf("12345678901234567890\n");
	printf("int_num = %i\n",int_num);
	printf("float_num = %.5f\n",float_num);
	printf("big_num = %d\n",big_num);
	printf("long_float = %.2f\n",l_num);

	system("pause");
	return 0;
}


