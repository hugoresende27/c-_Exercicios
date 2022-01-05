#include <iostream>	
#include <string.h>
#include <math.h>		
using namespace std;

enum direcao {
    array1 = 20,
    array2 = 30,
    array3 = 40,
    array4 = 50
};

enum teste{
    a,b,c
}z;

int main()								
{
    enum teste x;
    teste y;
    cout << "OLA :: "<<x<<endl;
    cout << "OLA :: "<<y<<endl;
    cout << "OLA :: "<<z<<endl;


    for (int i=a; i<=c;i++){
        cout << i<<endl;
    }

    enum direcao dir;
    dir = array3;
    printf ("%d dir \n", dir);
    dir = array4;
    char nome[dir];

    printf("%d", sizeof(nome));
    cout << endl;
    system("pause");				
	return 0;	
}