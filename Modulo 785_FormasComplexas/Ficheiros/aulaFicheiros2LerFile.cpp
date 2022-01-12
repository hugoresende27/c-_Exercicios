#include <iostream>	
#include <string.h>
#include <math.h>		
#include <locale.h>
using namespace std;

int main()								
{

    FILE *file;

    file = fopen("string.txt", "r");

    if (file == NULL ){
        printf ("Falhou abertura do ficheiro");
        system("pause");
        exit(0);
    }

    //fprintf(file,"aula de c com manipulação de ficheiros @@");

    char frase[100];

    while (fgets(frase,100,file) != NULL) {
        printf ("%s", frase);
    }

    fclose(file);

    cout << endl;
    system("pause");				
	return 0;	
}