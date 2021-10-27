/*
Given the string "A string." Print on one line the letter on the index 0, the pointer position and the letter t. undate the pointer to pointer +2. Then, in another line print the pointer and the letters r and g of the string (using the pointer).
*/

#include <iostream>	
#include <string.h>		
using namespace std;


int main()								
{
    char str[]={"A string"};
    char *pt = str;
    printf ("INDEX 0--> %c \n",str[0]);
    printf ("pt--> %c \n",*pt);
    printf ("letra t--> %c \n",str[3]);
    pt+=2;
    printf ("pt--> %c \n",*pt);
    printf ("letra r--> %c \n",pt[2]);
    pt+=5;
    printf ("letra g--> %c \n",*pt);
    length(str);
    system("pause");				
	return 0;	
}