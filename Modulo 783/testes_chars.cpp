#include <iostream>		
#include <string>
#include <locale.h>	
		
using namespace std;


int main()								
{
    //system ("color 0E"); // cor da tela = preta, fonte = amarela
    //setlocale(LC_ALL, "Portuguese"); // Leitura do idioma
    //system("chcp 1252>null");
    setlocale(LC_ALL,"pt");
    //setlocale(LC_ALL, "pt_BR.UTF-8");
    char palavra[11] = "Situação";
    printf("%s",palavra);
    scanf ("%s",palavra);
    
    cout << palavra;

    system("pause");				
	return 0;	
}
