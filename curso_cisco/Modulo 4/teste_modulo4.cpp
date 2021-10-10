#include <iostream>

using namespace std;
namespace alpha {
    int var = 1;
}
namespace beta {
    int var = alpha::var+1;
}

int main()
{
    
    beta::var += alpha ::var;
    {
        using namespace beta;
        cout << var <<endl;
    }
  /*  
    int *t[2]= {new int [2], new int [2]};

    for (int i=0;i<4;i++)
        t[i%2][i/2]=i;

    cout<<t[0][1]+t[1][0] <<endl;
    delete[]t[0];
    delete[]t[1];


    int i=2,j=3;
    float a=2,b=3;
    cout<< float(j) /static_cast<float> (i) << " " << int (b) /static_cast<int>(a);
    
    double d = 987654321.123456789;
    float f = d;
    int i = d == f;
    cout << i << endl;
    
   double d= 0.99999;
   float f=.0;
   int i= (int)d == static_cast<int>(f);
   cout << i << endl;
   
  int Int = 1;
  char Char = 3;
  float Float = 4.9;

  Int = Int + Char + Float;
  cout << Int << endl;
  
 string s = "Skipper", t ="Private";
 int i = s.compare("Kowalski")>0;
 int j= s.compare("Rico")<0;
 cout << i+j<<endl;

 
s = AbcA
t = AAbc>

string s = "Abc", t="A";
s = s+t;
t = t+s;
int i = s.compare(t)>0;//1
int j = s.length() < t.length();
cout << i +j << endl;

string str1,str2;
str1="ABCDEF";
str2=str1.substr(1,1)+ str1.substr(4)+str1.substr();
str1=str2.substr(1,1)+str2.substr(4)+str2.substr();
cout << (str2>str1) <<endl;
 
string s ="A";
s.append(s).append(s).append(s);
cout << s;
cout << s.length() << endl;
*/


   return 0;
}