#include<iostream>
using namespace std;
int main()
{
    char charType;
    short shortType;
    int intType;
    long longType;
    float floatType;
    double doubleType;
   
    cout << "Size of char: " << sizeof(charType) <<" byte" << endl;
    cout<<"Size of Short: " << sizeof(shortType) <<" bytes" << endl;

    cout<<"Size of int: " << sizeof(intType) <<" bytes" << endl;
    cout<<"Size of long: " << sizeof(longType) <<" bytes" << endl;

    cout<<"Size of float: " << sizeof(floatType) <<" bytes" << endl;
    cout<<"Size of double: " << sizeof(doubleType) <<" bytes" << endl;
	system("pause");
    return 0;;
}

