#include <iostream>
#include <string>					
using namespace std;

//newstr = oldstr.substr(substring_start_position, length_of_substring)

int main()								
{
    
    string alfa,omega;
    cout << "Insira texto --> ";
    getline (cin, alfa);
    //beta = alfa.substr(1,1);    //vai extrair a partir do index 1, 1 char
    omega = alfa.substr(1,1) + alfa.substr(4) + alfa.substr();  //substr(4) vai extrair do index 4 até ao fim
    cout << omega << endl;                                      //substr() vai extrair a string do index 0 até ao fim
/*
    string str1 = "ABCDEF";
	string str2 = str1.substr(1, 1) + str1.substr(4) + str1.substr();
	cout << str2 << endl;
*/
    system("pause");				
	return 0;	
}