/*
Reverse a string
For example: input: "cool" output: "looc"
*/
#include <iostream>	
#include <vector>
		
using namespace std;

int main()								
{
    string pal;
    cout << "Insira a string--> ";
    cin >> pal;
    
    for (int i=pal.size();i>=0;i--)
        cout << pal[i] ;
    cout << endl;
    system("pause");				
	return 0;	
}