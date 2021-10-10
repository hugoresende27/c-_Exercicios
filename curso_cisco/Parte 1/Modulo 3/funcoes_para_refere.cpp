#include <iostream>					
using namespace std;

void misturas (int val1, int & val2)    //val2 é passado por referencia
{
    val2 = val1 + 9;
}

int main()								
{
    int x=1,y;
    misturas(x,y);      //x vale 1, e y vai ser por referencia o val1 + 9, neste caso 10
    cout<<"O x vale :: "<< x << " e o y vale :: "<< y <<endl;
    system("pause");				
	return 0;	
}