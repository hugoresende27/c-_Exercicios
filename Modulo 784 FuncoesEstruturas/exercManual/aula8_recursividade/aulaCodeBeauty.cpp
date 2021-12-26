#include <iostream>	
#include <string.h>
#include <math.h>		
using namespace std;

//SOMAR TODOS OS NÚMEROS ENTRE VAR1 E VAR2
//com loop for
int somar(int x, int y){
    int soma=0,smaller,bigger;
    if (x>y){
        smaller = y;
        bigger = x;
    } 
    else {
        smaller = x;
        bigger = y;
    }
    ///////////////////////////////////////////////////
    for (int i = smaller; i<=bigger;i++){
        soma+=i;
    }
    //////////////////////////////////////////////////
    return soma;
}
//////////////////////////////////////////////////////
int recursive_soma(int m, int n){
    if ( m == n)    //base case, para parár a recursão 
    {
        printf ("%d  = ",m);
        return m;
    }
        
    printf ("%d + ",m);
    return m + recursive_soma( m+1 , n); //vai somar
}

int main()								
{
    int m,n;
    cout << "M:: ";
    cin >>m;
    cout << "N:: ";
    cin >>n;
    cout << "RES:: "<<somar(m,n);
    cout << "\nRES2:: "<<recursive_soma(m,n);
    cout << endl;
    system("pause");				
	return 0;	
}