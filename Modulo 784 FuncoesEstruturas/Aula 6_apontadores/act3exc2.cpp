#include <iostream>
using namespace std;
int main( ) {

int i=5, *p;

p = &i;

cout << p << '\t' << (*p+2) << endl<<'\t\t\t' << &i;

}