#include <iostream>	
#include <string.h>
#include <math.h>		
#include <locale.h>
#include <fstream>
using namespace std;

int recursiveSum(int m, int n){
    if (m == n){    //base case, break da recursion
        return m;
    }
    cout << "\tm::"<<m<<endl;
    cout << "\tn::"<<n<<endl;
    return m + recursiveSum(m+1,n);
}

int fatRecusivo (int m){
    if (m <=1){    //base case, break da recursion
        return m;
    }
    return m * fatRecusivo(m-1);
}

int main()								
{

    int a=1,b=5;

    //cout <<recursiveSum(a,b);
    cout <<fatRecusivo(6);

    cout << endl;
    system("pause");				
	return 0;	
}