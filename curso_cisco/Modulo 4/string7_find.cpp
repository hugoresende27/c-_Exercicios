/*
int where_it_begins = any_string.find(another_string, start_here);
int where_it_is = any_string.find(any_character, start_here);
*/
#include <iostream>	
#include <string>				
using namespace std;


int main()								
{
    string ola ="O meu nome é Hugo, Hugo Resende";
    string quem="Hugo";
    int virgula = ola.find(',');

    if (ola.find(quem) != string::npos)     //.var.find("texto" ou var) != string::npos verifica se string está presente 
        cout << "É ele sim!" << endl;       //está presente na outra string
    else
        cout << "Não é ...." << endl;
    if (virgula != string::npos)
        cout << "Usou a virgula..." <<endl;

    system("pause");				
	return 0;	
}