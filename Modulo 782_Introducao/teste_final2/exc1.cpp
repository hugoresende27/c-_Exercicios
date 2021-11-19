#include <iostream>					
using namespace std;

int main()								
{
    float base,altura,area;
    cout<<"Programa Area triângulo\nInsira a Base-->";
    cin>>base;
    cout<<"Insira a altura-->";
    cin>>altura;
    area=(base*altura)/2;
    printf("A área vai ser %.2f\n",area);
    system("pause");				
	return 0;	
}