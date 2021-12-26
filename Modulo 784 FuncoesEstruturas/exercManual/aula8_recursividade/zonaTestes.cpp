#include <iostream>	
#include <string.h>
#include <math.h>		
using namespace std;

int rec1(int a){
    if (a>0){
        //printf ("%d ",a + rec1(a-1));
        return a+ rec1(a-1);
    } else {
        return 0;
    }
}

int main()								
{
    printf ("%d -- ",rec1(200));
    cout << rec1(20) << " | ";
    cout << endl;
    system("pause");				
	return 0;	
}