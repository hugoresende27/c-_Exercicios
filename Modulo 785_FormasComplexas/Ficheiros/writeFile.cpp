#include <iostream>	
#include <string.h>
#include <math.h>		
#include <locale.h>
using namespace std;

int main()								
{

    FILE *fich;
    fich = fopen("texto1.txt", "wt");//com "w" não faz sentido verificar se ficheiro existe, porque se não existir é criado

    cout << "A escrever no ficheiro\n";
    fprintf(fich, "%d %d %d", 12,10,2022 );
    fprintf(fich, "%s", "\nhugao");
    fprintf(fich,  "\nResende");
    fclose(fich);

    cout << endl;
    system("pause");				
	return 0;	
}