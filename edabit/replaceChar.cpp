/*
Write a function to replace all instances of character c1 with character c2 and vice versa.
Examples
doubleSwap("aabbccc", 'a', 'b') ➞ "bbaaccc"
doubleSwap("random w#rds writt&n h&r&", '#', '&')
➞ "random w&rds writt#n h#r#"
doubleSwap("128 895 556 788 999", '8', '9')
➞ "129 985 556 799 888"
*/
#include <iostream>		
using namespace std;

string doubleSwap(string s, char c1, char c2) {
    for (int i=0;i<= s.length(); i++)
    {
        if (s[i] == c1)
        {
            s[i]= c2;
        }
        else if (s[i] == c2)
        {
            s[i]= c1;
        }
    }
    return s;	
}


int main()								
{
    cout << doubleSwap("aabbccc", 'a', 'b') << endl;
    cout << doubleSwap("random w#rds writt&n h&r&", '#', '&') << endl;
    cout << doubleSwap("128 895 556 788 999", '8', '9');
    
    cout << endl;
    system("pause");				
	return 0;	
}