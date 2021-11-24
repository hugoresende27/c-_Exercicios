/*
This Triangular Number Sequence is generated from a pattern of dots that form a triangle. The first 5 numbers of the sequence, or dots, are:
1, 3, 6, 10, 15
1, 1+2=3; 3+3=6; 6+4=10; 10+5=15; 15+6=21;
This means that the first triangle has just one dot, the second one has three dots, the third one has 6 dots and so on.
Write a function that returns the number of dots when given its corresponding triangle number of the sequence.
*/
#include <iostream>	
		
using namespace std;

void triSeq (int x)
{
    int v=1;
    for (int i=1; i<=x; i++)
    {
        cout << v << " | ";
        v += i+1;
    }

}

int triangle(int n) {
	int res=1;
    for (int i=1; i<n; i++)
    {
        res += i+1;
    }
	return res;
}

int main()								
{
    int lim;
    cout << "Limite--> ";
    cin >> lim;
    triSeq(lim);
    cout << "Limite--> ";
    cin >> lim;
    cout << triangle(lim)<<endl;
    system("pause");				
	return 0;	
}