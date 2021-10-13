
#include <iostream>	
#include <string.h>				
using namespace std;

int main()								
{
    char palavra[10] = "sol";
    char tentativa[10];
    cout << "A palavra a adivinhar é quente...";
    cin >> tentativa;
    if (strcmp(palavra,tentativa) == 0)
    {
        printf( "ADIVINHOU, a palavra era %s \n", palavra);
    }
    else
    {
        printf("\n %s é uma escolha errada... nos dias de calor costuma brilhar...", tentativa);
        cin >> tentativa;
        if (strcmp(palavra,tentativa) == 0)
        {
            printf( "ADIVINHOU, a palavra era %s \n", palavra);
        }
        else
        {
            printf("%s também não é.Falhou em adivinhar, a palavra era %s \n", tentativa,palavra);
        }
    }    
    system("pause");				
	return 0;	
}
