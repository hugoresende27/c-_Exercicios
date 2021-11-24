/*
Create a function that takes a string and returns the word count. The string will be a sentence.
Examples
countWords("Just an example here move along") ➞ 6
countWords("This is a test") ➞ 4
*/
#include <iostream>	
		
using namespace std;

int countWords(string str) {
    int pal=1;
	for (int i=0; i< str.length(); i++)
    {
        if (str[i]== ' ')
        {
            pal++;
        }
    }
    return pal;
}

int main()								
{
    cout << countWords("Just an example here move along")  << endl;
    cout << countWords("This is a test")   << endl;
    cout << countWords("What an easy task, right")  << endl;
    system("pause");				
	return 0;	
}