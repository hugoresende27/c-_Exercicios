#include <iostream>	
#include <string.h>
#include <math.h>		
#include <locale.h>
using namespace std;

/// "w" escreve por cima , cria o ficheiro se não existir
/// "r" read
/// "a" append no fim 
/**Possíveis modos de abertura de arquivos, função fopen(  )
“r” Abre arquivo para leitura em modo texto. Retorna NULL caso o arquivo não exista.
“w” Cria arquivo em modo texto para gravação. Caso o arquivo já exista, tal arquivo é sobrescrito.
“a” Abre arquivo em modo texto para gravação a partir de seu final. Caso o arquivo não exista, o arquivo é criado.
“r+” Cria arquivo em modo texto para leitura ou gravação. Retorna NULL caso o arquivo não exista.
“w+” Cria arquivo em modo texto para atualização. Caso o arquivo já exista, tal arquivo é sobrescrito.
“a+” Abre arquivo em modo texto para atualização a partir de seu final. Caso o arquivo não exista, o arquivo é criado.
“rb” Abre arquivo para leitura em modo binário. Retorna NULL caso o arquivo não exista.
“wb” Cria arquivo em modo binário para gravação. Caso o arquivo já exista, tal arquivo é sobrescrito.
“ab” Abre arquivo em modo binário para gravação a partir de seu final. Caso o arquivo não exista, o arquivo é criado.
“rb+” Cria arquivo em modo binário para leitura ou gravação. Retorna NULL caso o arquivo não exista.
“wb+” Cria arquivo em modo binário para atualização. Caso o arquivo já exista, tal arquivo é sobrescrito.
“ab+” Abre arquivo em modo binário para atualização a partir de seu final. Caso o arquivo não exista, o arquivo é criado.
*/

int main()								
{

    FILE *file; //apontador *file
    //file = fopen("file1.txt","r"); // abrir ficheiro para ler "r"ead
    //file = fopen("file1.txt","w"); // abrir ficheiro para escrever "w"rite tbm vai criar o ficheiro caso não exista
    //file = fopen("file1.txt","a"); // abrir ficheiro para escrever "a"ppend

    // file = fopen("file1.txt","w");
    
    // fprintf(file,"aula de ficheiros");

    // fclose(file);

//==============================================================================

    file = fopen ("file2.txt", "r");

    if (file==NULL) {   //se ponteiro file for nulo, se o ficheiro não existe
        printf ("Arquivo não encontrado\n");
        system("pause");
        return 0;
    }

    int x,y,z;
    fscanf (file,"%d %d %d", &x, &y, &z);
    printf ("%d %d %d", x, y, z);
    fclose(file);
    

    cout << endl;
    system("pause");				
	return 0;	
}