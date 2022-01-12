#include <iostream>	
#include <string.h>
#include <math.h>		
#include <locale.h>
using namespace std;

int main()								
{
    FILE *fich,*fich2;
    fich = fopen("texto1.txt", "r"); //"r" -> apenas abre o ficheiro em modo de leitura
    fich2 = fopen("string.txt", "r");

    //verificação se o ficheiro existe
    if (fich == NULL ){
        printf ("Falhou abertura do ficheiro");
    }
    else {
        cout << "Ficheiro aberto com sucesso\n";
        fclose(fich);//cada fopen tem um fclose
    }

    cout << "\nendereco memoria onde aponta *fich--> "<<fich;
    cout << "\nendereco memoria onde aponta *fich2--> "<<fich2;

    

    cout << endl;
    system("pause");				
	return 0;	
}