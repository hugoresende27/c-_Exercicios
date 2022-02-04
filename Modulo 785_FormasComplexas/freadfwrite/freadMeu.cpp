#include <iostream>	
#include <string.h>
#include <math.h>		
#include <locale.h>
#include <fstream>
using namespace std;

/*

fread permite a leitura  de blocos de dados.
Devemos determinar o nr de elementos a serem lidos ou gravados e o tamanho de cada um.
fread aceita 4 parametros (buffer, tamanho de cada elemento, numero de elementos, ponteiro do ficheiro)
atenção fread e fwrite vai sempre ler ou escrever em binário
*/

int main()								
{


    FILE* file;
    char buffer[100];//buffer vai ser um array de char
    
    file =  fopen("string.txt", "r");

    while (!feof(file)) 
    {
        //fread vai ler para o buffer, tamanho do char, 1 char de cada vez, ponteiro file
        fread(buffer, sizeof(buffer), 1, file);
        cout << buffer;
    }
    
    fclose(file);

    cout << endl;
    system("pause");				
	return 0;	
}