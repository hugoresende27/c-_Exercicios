/*
Utilizando o ficheiro vendas.txt (anexo), crie um novo ficheiro que seja a sua cópia, verificando inicialmente se o 
referido ficheiro existe e apenas procedendo à sua cópia se o mesmo existir. Sugestão: percorra o ficheiro integralmente
 caracter a caracter (função "fgetc") até chegar ao fim (EOF -End Of File).
*/
#include <iostream>	
#include <string.h>
#include <math.h>		
#include <locale.h>
#include <fstream>
using namespace std;

int main()								
{

   
    FILE *file,*fileCriado;

    file = fopen("vendas.txt", "r");
    fileCriado = fopen("vendasCopia2.txt", "w");

    if (file == NULL ){
        printf ("Falhou abertura do ficheiro");
        system("pause");
        exit(0);
    }
    else {
        do{
            char c = fgetc(file);

            if (feof(file)){//verificação fim do ficheiro
                break;
            }

            printf ("%c", c);
            cout << "<-A escrever no ficheiro\n";

            //escrever no ficheiro
            //fprintf(fileCriado,"%c",c);
            fputc(c,fileCriado);
           
        }while (1);

    }
     fclose(file);
     fclose(fileCriado);

    cout << endl;
    system("pause");				
	return 0;	
}