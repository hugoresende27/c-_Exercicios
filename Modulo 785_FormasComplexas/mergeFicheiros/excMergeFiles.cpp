#include <iostream>	
#include <string.h>
#include <math.h>		
#include <locale.h>
#include <fstream>
using namespace std;

int main()								
{

    FILE *file1,*file2,*fileMerge;

    file1 = fopen("numeros.txt", "r");
    file2 = fopen("vendas.txt", "r");
    fileMerge = fopen("mergeFile.txt", "w");

    char linha[100];

   

    if (file1 == NULL){
        printf ("Falhou abertura do ficheiro numeros\n");
        system("pause");
        exit(0);
    }
    else if (file2 == NULL){
        printf ("Falhou abertura do ficheiro vendas\n");
        system("pause");
        exit(0);
    }
    else {
        while (1){
            if (feof(file1)){//verificação fim do ficheiro
                break;
            }         
            fgets(linha, sizeof(linha), file1);
            fputs(linha,fileMerge);
        };
        fputs("\n \t\t --- OUTRO FICHEIRO ----- \t\t\n",fileMerge);
        while (1){
            if (feof(file2)){//verificação fim do ficheiro
                break;
            }      
            fgets(linha, sizeof(linha), file2);
            fputs(linha,fileMerge);
        };
        fclose(file1);
        fclose(file2);
        fclose(fileMerge);
        cout << "Ficheiro merge criado com sucesso \n";
    
    }
  

    cout << endl;
    system("pause");				
	return 0;	
}