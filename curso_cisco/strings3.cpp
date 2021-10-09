#include <iostream>		
#include <string>			
using namespace std;


int main()								
{
    string primeira,segunda;
    cout << "Insira texto 1:: ";
    getline(cin,primeira);
    cout << "Insira texto 2:: ";
    getline(cin,segunda);
    cout << "Texto inserido: " << primeira + segunda <<endl;
    /*
    if (primeira == segunda)
        cout << primeira << " = " << segunda;       //teste por ordem alfabética  Z > A; em baixo cout com o texto entre "aspas"
    else if (primeira > segunda)
        cout << primeira << " > " << segunda;
    else if (primeira < segunda)
    cout << primeira << " < " << segunda;
    
    if (primeira == segunda)
    cout << "\"" << primeira << "\" == \"" << segunda << "\"" << endl;
    else if (primeira > segunda)
    cout << "\"" << primeira << "\" > \"" << segunda << "\"" << endl;
    else
    cout << "\"" << segunda << "\" > \"" << primeira << "\"" << endl;
    */
    if (primeira.compare(segunda) == 0)             //string1.compare(string2) == < ou > do 0 para comparar se 
    cout << primeira << " = " << segunda;           //se iguais se Z > A
    else if (primeira.compare(segunda) > 0)
        cout << primeira << " > " << segunda;
    else if (primeira.compare(segunda) < 0)
    cout << primeira << " < " << segunda;
    system("pause");				
	return 0;	
}