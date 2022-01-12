#include <iostream>	
#include <string.h>
#include <math.h>		
#include <locale.h>
using namespace std;

int main()								
{

    FILE *file2;
    file2 = fopen("string.txt", "a");

    if (file2 == NULL ){
        printf ("Falhou abertura do ficheiro");
        system("pause");
        exit(0);
    }

    fprintf(file2, "MAIS UMA LINHA \nSFF");

    char frase[] = "segunda linha";
    fputs(frase,file2);

    char car = '@';
    fputc(car,file2);

    fclose(file2);

    

    cout << endl;
    system("pause");				
	return 0;	
}