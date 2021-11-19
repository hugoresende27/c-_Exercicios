#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	char letra1 = 72;
	char letra2 = 117;
	char letra3 = 103;
	char letra4 = 111;
	cout<<"72  = letra "<<letra1<<endl;
	cout<<"117 = letra "<<letra2<<endl;
	cout<<"103 = letra "<<letra3<<endl;
	cout<<"111 = letra "<<letra4<<endl;
	
	int num1='H';
	int num2='u';
	int num3='g';
	int num4='o';
	printf ("%c\n",letra1);
	
	cout << "valor :: "<<(char)num1<<"-->"<<num1<<endl;
	cout << "valor :: "<<(char)num2<<"-->"<<num2<<endl;
	cout << "valor :: "<<(char)num3<<"-->"<<num3<<endl;
	cout << "valor :: "<<(char)num4<<"-->"<<num4<<endl;
	
	
	char carater;
	cout<<"Qual o carater? "<<endl;
	cin>>carater;
	cout <<carater<<" corresponde a --> "<<(int)carater<<endl;
	

	return 0;
}

