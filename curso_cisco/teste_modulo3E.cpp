#include <iostream>	
#include <vector>				
using namespace std;

int f1(int *a)
{
    return *a;
}
int *f2(int *a)
{
    return a;
}
int *f3(int &a)
{
    return &a;
}



int main()								
{
    int value=2;
    cout<<f1(f2(f3(value)));
    float x=3.14,*p=&x;
    p[0]=++x;
    cout<<x;
    /*
vector<int> t ={0,1,2,3};
cout<<f1(f3(*f2(t.data())));

   

    vector<int> z ={3,2,1};
    int *p = z.data()+1;
    (*(p+1))++;
    (*(p-1))++;
    cout<<z[0]<<z[1]<<z[2];
    */
     system("pause");	
	return 0;	
}