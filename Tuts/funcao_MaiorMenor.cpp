#include <iostream>	
		
using namespace std;

int maior (int x, int y)
{
    if (x > y) return x;
    else return y;
}


int main()								
{
    int x,y,z;
    cout << "Valor X-->";
    cin>> x;
    cout << "Valor Y-->";
    cin>> y;
    cout << "Valor Z-->";
    cin>> z;
    cout << "O maior é "<<maior (x,maior(y,z))<<endl;
    system("pause");				
	return 0;	
}