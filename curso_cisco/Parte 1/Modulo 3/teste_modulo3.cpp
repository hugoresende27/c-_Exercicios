#include <iostream>			
#include <vector>		
using namespace std;
int fun(int p)
{
    ++p;
    return p++;
}

int main()								
{
    bool ints = sizeof(long) >=sizeof(int) && sizeof(int) >= sizeof(short);
    bool floats = sizeof (double) < sizeof(float);
    bool chars = sizeof(char)==1;
    int v = ints && floats && chars;
    cout<<v<<endl;

    vector<int> t={8,4,2,1};
    int *p1 = &t[0] + 2, *p2 = p1-1;
    p1++;
    cout<<*p1-t[p1-p2]<<endl;

    int a=1,b=fun(a);
    cout<<a+b<<endl;

    system("pause");				
	return 0;	
}