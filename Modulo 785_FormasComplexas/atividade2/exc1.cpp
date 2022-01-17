/*
Guarde num array 5 números inseridos pelo utilizador e escreva-os posteriormente num ficheiro. Imprima esse ficheiro no ecrã.
Em ficheiros uma string é a linha completa
*/
#include <iostream>	
#include <string.h>
#include <math.h>		
#include <locale.h>
using namespace std;

int main()								
{
    FILE *file;
    char nomeFicheiro[50] = "arrayInteiros.txt";
    file = fopen (nomeFicheiro, "w");

    int inteiros[5];
    char texto[100];

    if (file != NULL){
        for (int i=0; i<5;i++){
            cout << i+1<<" -> valor:: ";
            cin >> inteiros[i];
            fprintf(file,"%d ",inteiros[i]);
        }
    } else {
        cout << "ERRO !!!Nao foi criado o ficheiro por falta de permissão ou espaço\n";
    }

    
 
    fclose(file);

    //verificação se o ficheiro existe
    if (file == NULL ){
        printf ("Falhou abertura do ficheiro");
    }
    else {
        cout << "Ficheiro aberto com sucesso\n";
        file = fopen ("arrayInteiros.txt", "r");
        fgets(texto,100, file);
        puts(texto);
        fclose(file);


        file = fopen ("arrayInteiros.txt", "r");
        int inteirosB[5];
        for (int i=0; i<5; i++){
            int temp;
            fscanf(file,"%d", &temp);
            inteirosB[i] = temp;
            cout << inteirosB[i]<< " - ";
        }


        fclose(file);//cada fopen tem um fclose
    }

    cout << endl;
    system("pause");				
	return 0;	
}
