#include <iostream>
#include <string>					
using namespace std;


int main()								
{
    string teste;
    cout << "Insira texto-->";
    //cin >> teste;               //vai fazer input de texto até ao espaço
    getline(cin,teste);     //getline para ler strings com espaços , usar getline(cin,var)
    cout << teste;

    string pass ="1234";
    string tent;
    cout << "Insira password::";
    getline(cin,tent);
    if (pass == tent)                   //posso comparar strings usando o sinal de igualdade ==
        cout << "ACESSO GARANTIDO";
    else
        cout << "PASSWORD INVÁLIDA";

    string pass2 ="1234";
    string tent2;
    cout << "Insira password::";
    getline(cin,tent2);
    if (pass2.compare(tent2) == 0 )            //posso comparar strings usando a função compare
        cout << "ACESSO GARANTIDO";            //var1.compare(var2) == 0
    else                                       //posso tbm usar var1.compare(var2) > 0 ou < 0 regra Z > A
        cout << "PASSWORD INVÁLIDA";

    cout << endl;
    system("pause");				
	return 0;	
}
