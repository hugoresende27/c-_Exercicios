#include <iostream>		
using namespace std;
/*FATORIAL N! 1x2x3x4x5*/
/*
n   !n
0	1
1	1
2	2
3	6
4	24
5	120
6	720
7	5.040
8	40.320
9	362.880
10	3.628.800
*/

int main()								
{
    int n,x=1,fat=1,fat2=1;
    cout<<"fatorial --> ";
    cin>>n;

    for (int i=1; i<=n; i++)
    {
        fat *= i;
        //fat = fat*(i+1);
        cout << " -> " << fat;
    }
    cout<< "\nFATORIAL::"<<fat<<endl;

    cout<< "\n*****************\n";
    while (x<=n)
    {
        //fat2 = fat2*(x+1);
        fat2 *= x;
        cout << " -> " << fat2;
        x++;
    }
    cout<< "\nFATORIAL[2]::"<<fat2<<endl;
    cout<< "\n*****************\n";
    system("pause");				
	return 0;	
}