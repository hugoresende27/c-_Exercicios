#include <iostream>	
		
using namespace std;

void mudas(char a){
    a = 'Z';
}
void mudas2(char *a){
    *a = 'Z';
}

int main()								
{
    char a = 'A';
    mudas(a);
    cout << a << endl;
    mudas2(&a);
    cout << a << endl;

    system("pause");				
	return 0;	
}