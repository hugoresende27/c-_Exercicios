#include <iostream>					
using namespace std;


int main()								
{
    system ("color 4E"); // cor da tela = preta, fonte = amarela
    int idade;
    cout << "Qual a sua idade? --> ";
    cin >> idade;
    if (idade>=1 && idade<=120)     //limite da idade válida  entre 1 e 12064
    {
        if (idade>=65)      //entre 0 e infinito
            cout << "Idoso\n";
        else 
            if (idade>=18)  //entre 18 e 65
                cout << "Adulto\n";
            else            //entre 0 e 18
                cout << "Não adulto\n"; 
    }
    else
        cout << "Idade Inválida!!\n";
    system("pause");				
	return 0;	
}