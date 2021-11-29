/*
Create a function to calculate how many characters in total are needed to make up the shape. You will be given an array of strings which make up a shape in the compiler (i.e. a square, a rectangle or a line).
Examples
countCharacters([
  "###",
  "###",
  "###"
]) ➞ 9
countCharacters([
  "22222222",
  "22222222",
]) ➞ 16
countCharacters([
  "------------------"
]) ➞ 18
countCharacters([]) ➞ 0
countCharacters(["", ""]) ➞ 0
Notes
Return 0 if the given array is empty.
*/
#include <iostream>	
		
using namespace std;

//int countCharacters(std::vector<std::string> arr) {
int countCharacters (string str){
    int contador=0;
    for (int i=0; i < str.length(); i++)
    {
        contador++;
    }
    return contador;
}

int main()								
{
    cout << countCharacters("hugo")<<endl;
    cout << countCharacters("------------------")<<endl;
    cout << countCharacters(" ")<<endl;
    system("pause");				
	return 0;	
}