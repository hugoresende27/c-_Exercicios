/*
Create a function that takes a string and returns a string in which each character is repeated once.
Examples
doubleChar("String") ➞ "SSttrriinngg"
doubleChar("Hello World!") ➞ "HHeelllloo  WWoorrlldd!!"
doubleChar("1234!_ ") ➞ "11223344!!__  "
*/
#include <iostream>	
#include <string.h>	
using namespace std;

string doubleChar(string str) {

    for (int i=0; i<str.length(); i++){
       cout << string(2,str[i]);
    }	
}

int main()								
{
    cout << doubleChar("String") << endl;
    cout << doubleChar("Hello World!")  << endl;
    cout << doubleChar("1234!_ ")  << endl;
    system("pause");				
	return 0;	
}