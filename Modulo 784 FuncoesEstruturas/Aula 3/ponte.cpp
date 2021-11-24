/*
Create a function which validates whether a bridge is safe to walk on (i.e. has no gaps in it to fall through).
*/
#include <iostream>	
		
using namespace std;


bool verPonte (string p)
{
    fflush(stdin);
    for (int i=0; i< p.length(); i++)
    {
        if (p[i] == ' ')
            return false;
    }
    return true;
}


int main()								
{

    string ponteA = "##########";
    string ponteB = "###  #####";

    if (!(verPonte(ponteB)))
    {
        cout << "PERIGO!\n";
    }
    else
    {
        cout << "seguro!\n";
    }
    system("pause");				
	return 0;	
}