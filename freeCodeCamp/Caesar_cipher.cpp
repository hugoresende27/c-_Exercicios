#include <iostream>	
#include <string.h>

using namespace std;

string encriptar (string txt, int s)
{
    string res=" ";
    for (int i=0; i< txt.length(); i++)
    {
        if (isupper(txt[i]))
        {
            res += char (int(txt[i] + s - 65) % 26 + 65);
        }
        else
        {
            res += char (int(txt[i] + s - 97) % 26 + 97);
        }
    }
    return res;
}


int main()								
{
    char var[100];
    int num;
    cout << "Qual o texto? --> ";
    gets(var);
    cout<<"Valor da encriptação? --> ";
    cin >> num;
    cout << "O texto " << var << " vai ficar igual "<< encriptar(var,num);
    system("pause");				
	return 0;	
}