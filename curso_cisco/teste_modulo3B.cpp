#include <iostream>					
using namespace std;
/*
int fun1(int p)
{
    int cnt=0;
    for (p=2*p;p>0;p>>=2)
    cnt++;
    return cnt;
}
int fun2(int &p)
{
    ++p;
    return p++;
}

void foon (int p)
{
    for (int cnt=fun(p);cnt>0;cnt--)
    cout<<"*";
}
1 + 1+1 + 2+1+2 = 1 + 2 + 5 = 8
1 + 0 + 1 = 2
*/
int fun(int p=2,int q=3)
{
    return p+q;
}


int main()								
{
    /*foon(2);
    cout<<endl;

    int a=1;
    int b= fun1(a);
    int c= fun2(b);
    cout<<a+b+c<<endl;
    */
   cout<<fun()+fun(1)+fun(1,2)<<endl;
    system("pause");				
	return 0;	
}