/*
any_string.compare(substr_start, substr_length, other_string)
any_string.compare(substr_start, substr_length, other_string,  other_substr_start, other_substr_length)
*/
#include <iostream>		
#include <string>			
using namespace std;


int main()								
{
    string alfa ="ABCB";
    cout << alfa.compare(1,2, "BC")<<endl;
    cout <<  alfa.compare(1,1,alfa,3,1)<<endl;
    cout << alfa.compare(1,1, "BC") + alfa.compare(2,1,alfa,2,2) << endl;
                        
    system("pause");				
	return 0;	
}