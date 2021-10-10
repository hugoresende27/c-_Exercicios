#include <iostream>	
#include <string>				
using namespace std;

int main()
{
    string alfa,beta="???";
    cout << "Insira texto para converter em Juntar com ??? :: ";
    getline (cin, alfa);

    beta.append( 3, '!');       //adiciona 3 !!! no final
    beta.append(alfa);          //adiciona var alfa no final
    beta.append(alfa,0,3);      //adiciona var alfa no final do index 0 a index 3

    cout << "ALFA--> " << alfa << endl;
    cout << "BETA--> " << beta << endl;

    //ciclo para imprimir o abecedário com a função push_back(var)
    for (char c= 'A'; c<= 'Z'; c++)
        beta.push_back(c);
    cout << "BETA 2 --> " << beta; 

    string omega="ABCDEFG", teta="1234567";
    //omega.insert(1,2,' ');          //a partir do index 1 coloca 2 espaços ' '
    //omega.insert (4,teta,3,2);      //a partir do index 4, vai juntar a var teta do index 3 e 4 (2)
    omega.insert (5,teta,5,5);  
    cout << "\nOMEGA-->" << omega << endl;
    teta.assign(80,'#');                //muda a var teta, passa a conter 80 X '#'
    cout << "\TETA-->" << teta << endl;
    system("pause");				
	return 0;	
}
