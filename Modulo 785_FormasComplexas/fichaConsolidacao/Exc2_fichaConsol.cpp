/*
Utilizando o ficheiro "numeros.txt" (em anexo), guarde num novo ficheiro ("pares.txt"), apenas os números pares 
(utilize uma função para verificar se um número é par).
*/

#include <iostream>	
#include <string.h>
#include <math.h>		
#include <locale.h>
#include <fstream>
using namespace std;


int pares(int x){
    return x % 2 == 0;      //retorna 1 para par e 0 para impar
}


int main()								
{

    FILE *file,*fileCriado;

    file = fopen("numeros.txt", "r");
    fileCriado = fopen("pares.txt", "w");

   

    if (file == NULL || fileCriado == NULL ){
        printf ("Falhou abertura do ficheiro");
        system("pause");
        exit(0);
    }
    else {
        while (1){
            int num;
            fscanf(file,"%d",&num);


            if (feof(file)){//verificação fim do ficheiro
                break;
            }

            if (pares(num) == 1){
                 printf ("%d\n", num);
                 fprintf(fileCriado,"%d\n",num);
            }

        };
 
    
    }
     fclose(file);
     fclose(fileCriado);

    cout << endl;
    system("pause");				
	return 0;	
}