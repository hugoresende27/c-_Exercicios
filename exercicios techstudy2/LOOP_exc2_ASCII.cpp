/*program to print ASCII values of all characters*/
#include <iostream>	
		
using namespace std;


int main()								
{
    for (char a = 'a'; a<='z';a++ )
    {
        printf ("O char %c corresponde a %d no ASCII\n",a,(int)a);
    }
    system("pause");				
	return 0;	
}