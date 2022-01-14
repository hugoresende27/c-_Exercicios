#include <iostream>	
#include <string.h>
#include <math.h>		
#include <locale.h>
#include <fstream>
using namespace std;

int main()								
{

    fstream f;
    string fileName = "hr.txt";
    f.open(fileName, ios::in); //ler o ficheiro     #IN
    if (f.is_open()){
        string line;
        while(getline(f,line)){
            cout << line << endl;
        }
        f.close();
    }
    
    cout << endl;
    system("pause");				
	return 0;	
}