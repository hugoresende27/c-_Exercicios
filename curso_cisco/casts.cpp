#include <iostream>					
using namespace std;


int main()								
{
    int x=5;

    cout << float(x);               //maneira obsoleta
    cout << (float)x;               //maneira moderna
    cout << static_cast <int> (x);  //static cast, c++

    //short s = 32767;
    //int i= s;
    int i = 3258714;
    short s =i;             //como short é mais pequeno que int, alguns bits vão se perder e o resultado vai ser diferente
    double f = 1334.58746;  //mesma situação, cast de double para float vai perder dados, float para double não
    float d = f;
    if (f==d)
        cout << "IGUAL";
    else   
        cout << "DIFERERNTE";

    float f1=123.456;
    float g = 1e100;
    int z = f1;
    int j = g;
    cout << z << endl;
    cout << j << endl;

    int Int = 2;
    char Char = 3;
    short Short = 4;
    float Float = 5.6;
    int total;
    total =Int+ Short + Char + Float;
    cout << total << endl;

    cout<<endl;
    system("pause");				
	return 0;	
}