#include <iostream>					
using namespace std;

void cumps()
{
    cout<<"Olá Hugo!!\n";
}
void qtd_cumps(int qtd)
{
    while (qtd>0)
    {
        cumps();
        qtd--;
    }
}

int main()								
{
    int i;
    cout<<"Qual o tamanho do teu ego? -->";
    cin>>i;
    qtd_cumps(i);

    system("pause");				
	return 0;	
}