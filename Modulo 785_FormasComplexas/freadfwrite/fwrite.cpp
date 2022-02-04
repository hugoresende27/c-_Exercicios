#include <iostream>	
#include <string.h>
#include <math.h>		
#include <locale.h>
#include <fstream>
using namespace std;

/*
fwrite permite a e escrita de blocos de dados.
Devemos determinar o nr de elementos a serem lidos ou gravados e o tamanho de cada um.
fwrite aceita 4 parametros (dados a escrever, tamanho de cada elemento, numero de elementos a serem gravados, ponteiro do ficheiro)
atenção fread e fwrite vai sempre ler ou escrever em binário
*/

int main()								
{


    FILE* file;
    char dados[] = "Funções fread e fwrite em C";//dados aqui
    int tamanho = sizeof(dados);
    
    file =  fopen("string2.txt", "w");

    //fwrite não precisa de ciclo aqui, o primeiro argumento também pode ser um ponteiro
    fwrite(&dados,1,sizeof(dados),file);
    
    fclose(file);

    cout << endl;
    system("pause");				
	return 0;	
}