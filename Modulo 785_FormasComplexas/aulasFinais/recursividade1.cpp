#include <iostream>	
#include <string.h>
#include <math.h>		
#include <locale.h>
#include <fstream>
using namespace std;

int main()								
{

    int fatorial(int x);

    int num;

    cout << "NUM :: ";
    cin >> num;
    cout << endl;

    cout << "FATORIAL :: "<< fatorial(num)<<endl;
    system("pause");				
	return 0;	
}

int fatorial (int x) 
{
    if (x==1){
        return 1;
    } else {
        return x*fatorial(x-1);
    }
}