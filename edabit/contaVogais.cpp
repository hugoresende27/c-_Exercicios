/*
Create a function that takes a string and returns the number (count) of vowels contained within it.
Examples
countVowels("Celebration") ➞ 5
countVowels("Palm") ➞ 1
countVowels("Prediction") ➞ 4
*/
#include <iostream>	
		
using namespace std;

int countVowels(string str) {

    int vogais=0;
    for (int i=0; i<str.length(); i++)
    {
        str[i] = tolower(str[i]);
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i]== 'u')
        {
            vogais++;
        }
    }
	return vogais;
}

int main()								
{
    cout << countVowels("Celebration") << endl;
    cout << countVowels("Palm")  << endl;
    cout << countVowels("Prediction")  << endl;
    system("pause");				
	return 0;	
}