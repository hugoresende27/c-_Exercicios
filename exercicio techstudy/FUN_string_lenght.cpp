/*program to find Length of the String by passing String/Character*/
#include <iostream>	
		
using namespace std;


int comprimento (char * pal)
{
    int comp=0;
    for (comp=0; pal[comp] != '\0' ; comp++) ;//de comp 0 até ao último char '\0' de pal; conta comp++
    return comp;
}

int main()								
{
    char palavra [100];
    cout << "Qual a palavra? --> ";
    scanf ("%s",palavra);
    cout << "Comprimento da palavra:: "<<comprimento(palavra)<<endl;
    system("pause");				
	return 0;	
}