#include <iostream>	
#include <string.h>

using namespace std;

string encriptar (string txt, int s)
{
    string res="";
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

string encriptar2 (string txt, int s)
{
    char ch;
    for (int i=0; i< txt[i] != '\0'; ++i)
    {
        ch = txt[i];
        if (ch>='a' && ch<='z')
        {
            ch -= s;
            if (ch < 'a')
            {
                ch = ch + 'z'-'a'+1;
            }
        txt[i]=ch;
        }
        else if (ch>='A' && ch<='Z')
        {
            ch -= s;
            if (ch < 'A')
            {
                ch = ch + 'Z'-'A'+1;
            }
        txt[i]=ch;
        }
    }
    return txt;
}


int main()								
{
    char var[999];
    int num;
    cout << "Qual o texto? --> ";
    //cin>> var;
    gets(var);
    cout<<"Valor da encriptação? --> ";
    cin >> num;
    cout << "O texto " << var << " vai ficar igual "<< encriptar(var,num);
    cout << "O texto " << var << " vai ficar igual "<< encriptar2(var,num);
    system("pause");				
	return 0;	
}