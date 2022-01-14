#include <iostream>	
#include <string.h>
#include <math.h>		
#include <locale.h>
#include <fstream>


using namespace std;

int main()								
{

    fstream myFile;

    myFile.open("hr.txt", ios::out); //escrever no ficheiro, writeMode  #OUT

    if (myFile.is_open()) {
        myFile << "Hello\n";
        myFile << "linha 2\n";
        myFile.close();
    }

    myFile.open("hr.txt", ios::app); //append no ficheiro, appendMode   #APP

    if (myFile.is_open()) {
        myFile << "Hugo\n";
        myFile << "Resende\n";
        myFile.close();
    }

    cout << endl;
    system("pause");				
	return 0;	
}