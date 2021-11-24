/*
Write a function that converts hours into seconds.
Examples
howManySeconds(2) ➞ 7200
howManySeconds(10) ➞ 36000
howManySeconds(24) ➞ 86400
Notes
60 seconds in a minute, 60 minutes in an hour
Don't forget to return your answer.
*/
#include <iostream>	
		
using namespace std;

int howManySeconds(int hours) {
	return 60*60*hours;
}

int main()								
{
    cout << howManySeconds(2) << endl;
    cout << howManySeconds(10) << endl;
    cout << howManySeconds(24) << endl;
    system("pause");				
	return 0;	
}