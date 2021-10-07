#include <iostream>
#include <cstdlib>
#include <string.h>
#include <stdio.h>
#include <locale>
#include <vector>

using namespace std;
int op(int i,int j=1)
{
	return i*j;
}
int op(char a,char b)
{
	return b-a;
}
int op(float x,float y)
{
	return x/y;
}

int main ()
{
	setlocale (LC_ALL,"Portuguese");
	/*
short s=1;
int i=2;
float f=4;
cout<<i/static_cast<float>(s)+i/2+i/f;

int a=2,b=a>>1;
int c=a>>b;
int d=1<<c;
int e=d>>d;
cout<<e;

vector<char>text(5);
char*chr1=text.data()+2,*chr2=chr1+2;
cout<<chr2-text.data();

string s="123";
s.append(s.substr(2)).push_back(s[s.length()-2]);
cout<<s;

int i=2;
string s="2";
cout<<s==i;

int i=2;
float f=1;
cout<<(static_cast<float>(i)>>1);

vector<double>arr={1e-1,1e0,1e1};
double *ptr=arr.data()+2;
cout<<arr[1]-*ptr;

int i=0,k=i;
while (i==0){
	if(k>1)
	i=k;
	++k;
}
cout<<k;

cout<<op(2)<<op('c','a')<<op(4.f,2.f);

int i=2,j=i++,k=i++;
cin>>i;
cout<<k-i<<j-i;
*/
vector<int> t = { 8, 4, 3, 2, 1 };
int i;
for (i=t[4];i<t[3];i++)
	t[i-1]=-t[3];
cout<<i;

	system("pause");
	return 0;
}


