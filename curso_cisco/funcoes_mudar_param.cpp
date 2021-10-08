#include <iostream>					
using namespace std;

void posso_mudar(int x)
{
    cout<<"agora vale "<<x<<endl;
    x++;
    cout<<"agora vale x++ "<<x<<endl;
}
void posso_mudar_referencia(int& x)
{
    cout<<"agora vale "<<x<<endl;
    x++;
    cout<<"agora vale x++ "<<x<<endl;
}

int main()								
{
    posso_mudar(5);
    int x=5;
    posso_mudar_referencia(x);
    cout<<"Quanto vale agora o x::: "<<x<<endl;
    system("pause");				
	return 0;	
}