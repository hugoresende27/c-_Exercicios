#include <iostream>	
#include<fstream>	
using namespace std;


int main()								
{
    ifstream x ("Alunos.txt");
    int palavras =0;
    string pal;

    while ( x >> pal)
    {
        ++palavras;
    }
    cout << "Existem "<<palavras<<" palavras no ficheiro \n";
    system("pause");				
	return 0;	
}