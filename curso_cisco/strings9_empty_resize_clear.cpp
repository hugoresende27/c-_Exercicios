#include <iostream>	
#include <string>				
using namespace std;

void print_info(string& s)
{
    cout << "conteudo = " << s << endl;
    cout << "capacity = " << s.capacity() << endl;
    cout << ".empty() = " << (s.empty() ? "VAZIA" : "NÂO VAZIA") << endl;
    cout << "------------" << endl;
}

int main()								
{
    string alfa;
    cout << "Insira um texto::";
    getline (cin,alfa);

    print_info(alfa);

    alfa.resize(50,'??');    //acrescente 50 ??? 
    print_info(alfa);

    alfa.resize(4);         //diminui a string para de 0 a 3
    print_info(alfa);

    alfa.clear();           //esvazia a string
    print_info(alfa);





    system("pause");				
	return 0;	
}