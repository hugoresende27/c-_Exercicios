#include <iostream>	
#include <string>				
using namespace std;
/*
int string_size = any_string.size();
int string_length = any_string.length();
*/

int main()								
{   
    string alfa,beta,omega;
    cout << "Insira texto --> ";
    getline (cin, alfa);
    cout << "size" << alfa.size() <<endl;
    cout << "length" << alfa.length() <<endl;

    string str = "12345";
    int pos = 1;
    cout << " 2345.345.45.size()=2 " << str.substr(pos).substr(pos).substr(pos).size() << endl; 
                                       //      2345    .     345    .     45  . size() = 2 
    cout << endl;
    system("pause");				
	return 0;	
}