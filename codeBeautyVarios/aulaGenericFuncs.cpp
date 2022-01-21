#include <iostream>	
#include <string.h>
#include <math.h>		
#include <locale.h>
#include <fstream>
using namespace std;


void muda(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void muda (int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main()								
{

    int x=9,y=33;

    cout<<"ANTES::x->"<<x<<"y->"<<y<<endl;
    muda(x,y);
    cout<<"DEPOIS::x->"<<x<<"y->"<<y<<endl;
    cout << endl;
    system("pause");				
	return 0;	
}