#include <iostream>	
	
using namespace std;
#define MAX 10

int main()								
{
    int nums [MAX]= { 1 , 2 , 3 , 4 , 5 };
    int i=0;
    do
    {
        if (nums[i]!=0)
            printf("%d | ",nums[i]);
        i++;
    }while (i<MAX);

    cout << endl;

    for (int i=0;i<MAX;i++)
    {
        if (nums[i]!=0)
            printf ("%d | ", nums[i]);
    }

    cout << endl;

    for (int i=MAX-1;i>=0;i--)
    {
        if (nums[i]!=0)
            printf ("%d | ", nums[i]);
    }
    cout << endl;
    for (int i=0;i<10;i++)
    {
        for (int j=0;j<=i;j++) 
            {
                printf ("*");
            }
            printf ("\n");
    }
    system("pause");				
	return 0;	
}