/*Take input in variable and display same value by pointer.*/
#include <iostream>	
		
using namespace std;


int main()								
{
    int a;
    cout << "A:: ";
    cin >> a;
    int *pt = &a;
    cout << "PTN:: "<<*pt<<"\tendereço de memória:: "<< pt << endl;
    
    system("pause");				
	return 0;	
}