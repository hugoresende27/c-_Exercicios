/*
https://www.youtube.com/watch?v=G79YG-ce_CA&ab_channel=TheCSharpProgrammerZambia
output
1
1 2 
1 2 3
1 2 3 4 
1 2 3 4 .. n
n é o input
*/
#include <iostream>		
using namespace std;

void numeroPrint(int limite)
{
    for (int i=0; i<=limite;i++)        //loop principal
    {
      for (int j=1; j <= i; j++)                    //loop para print 
      {
          cout << j << " ";
      }
      cout << endl;
    }
}

int main()								
{
    int n;
    cout << "Qual o valor de n?--> ";
    cin >> n;
    numeroPrint(n);
    system("pause");				
	return 0;	
}