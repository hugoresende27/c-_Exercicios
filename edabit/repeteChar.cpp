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

string doubleChar(string str) { //se str == ola
    string nova(str+str);       //string nova vai ser olaola
    for (int i=0; i<str.length(); i++){
        nova[2*i] = str[i];             //olaola na posição (2*0)[0] = o   //oolaola na posição (2*1)[2] = l(str[1])
        nova[2*i + 1] = str[i];         //olaola na posição (2*0+1)[1] = o; oolaola    //oolaola na posição (2*1+1)[3] = l
       //cout << string(2,str[i]);      //oollaola na posição (2*2)[4] = a      //oollaa    
    }	                                //oollaola na posição (2*2+1)[5] = a    //length de str é 3, faz index [0],[1],[2]
    return nova;
}
string doubleChar2(string str) {
    string nova=" ";        //string nova iniciada vazia " "
    for (int i=0; i<str.length(); i++){
        nova += str[i];     //" " += o  //"oo" += l //"ooll" += a
        nova += str[i];     //"o" += o  //"ool"+= l //"oolla"+= a
    }	
    return nova;
}

int main()								
{
    cout << doubleChar("String") << endl;
    cout << doubleChar("Hello World!")  << endl;
    cout << doubleChar("1234!_ ")  << endl;
    cout << doubleChar("ola")  << endl;
    cout << doubleChar2("String") << endl;
    cout << doubleChar2("Hello World!")  << endl;
    cout << doubleChar2("1234!_ ")  << endl;
    cout << doubleChar2("ola")  << endl;
    system("pause");				
	return 0;	
}
