/*Ler o ficheiro "vendas.txt", para um array de estruturas
*/
#include <iostream>	
#include <string.h>
#include <math.h>		
#include <locale.h>
#include <fstream>

#define MAX 3

using namespace std;

struct vendas{
    char loja[50];
    int trimestre1;
    int trimestre2;
    int trimestre3;
    int trimestre4;
};

int main()								
{
    vendas lojas[3];

    FILE *file;
    char ficheiroAtual[50] = "vendas.txt"; 
    char ficheiroCriado[50] = "totais.txt"; 
    char tempNome[20];
    int somaLojas[3];
    int total;

    file = fopen (ficheiroAtual, "r");
    //verificação se o ficheiro existe
    if (file == NULL ){
        printf ("Falhou abertura do ficheiro");
    }
    else {
        cout << "Ficheiro aberto com sucesso\n";
        
        int i=0;
        //while fscanf == 5, quando não tiver mais 5 vars para ler o scanf vai parar
        while (fscanf(file, "%s %d %d %d %d", lojas[i].loja, &lojas[i].trimestre1, &lojas[i].trimestre2, &lojas[i].trimestre3, &lojas[i].trimestre4) == 5)
        {
            //somar 4 trimestres a cada volta do ciclo
            somaLojas[i] = lojas[i].trimestre1+lojas[i].trimestre2+lojas[i].trimestre3+lojas[i].trimestre4;

            //var total vai acumulando o somaLojas
            total += somaLojas[i];

            //print dos dados
            cout << lojas[i].loja << " " << lojas[i].trimestre1 << " " << lojas[i].trimestre2 << " " << lojas[i].trimestre3 << " " << lojas[i].trimestre4 << endl;
            cout << "\tTotal zona -> "<<somaLojas[i]<<endl;

            i++;//incremento ciclo
 	    }

        cout<< "\tTOTAL::::::: "<<total;//TOTAL GLOBAL

        fclose(file);
        }

    file = fopen (ficheiroCriado, "w");
    cout << "\n...A escrever no ficheiro...\n";
    fputs("NORTE CENTRO SUL TOTAL\n",file);
    fprintf(file, "%d %d %d %d", somaLojas[0],somaLojas[1],somaLojas[2] ,total);
    
    fclose(file);

    char frase[100];

    file = fopen (ficheiroCriado, "r");
    //verificação se o ficheiro existe
    if (file == NULL ){
        printf ("Falhou abertura do ficheiro");
    }
    else {
        cout << "Ficheiro aberto com sucesso\n";
        
        int i=0;
        //while fscanf == 5, quando não tiver mais 5 vars para ler o scanf vai parar
        while (fgets(frase,100,file) != NULL) 
        {       
            printf ("%s", frase);
       
 	    }

        fclose(file);
        }

    cout << endl;
    system("pause");				
	return 0;	
}