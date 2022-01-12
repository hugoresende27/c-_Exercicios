#include <iostream>	
#include <string.h>
#include <math.h>		
#include <locale.h>
using namespace std;

int main()								
{

    FILE *fich;
    
    fich = fopen("texto1.txt", "w");//com "w" não faz sentido verificar se ficheiro existe, porque se não existir é criado

    cout << "A escrever no ficheiro\n";
    fprintf(fich, "%d %d %d", 12,10,2022 );
    fprintf(fich, "%s", "\nhugao");
    fprintf(fich,  "\nResende");
    fclose(fich);
    
    char texto[100];
    char frase[100];

    fich = fopen("texto1.txt" ,"r");

     //verificação se o ficheiro existe
    if (fich == NULL ){
        printf ("Falhou abertura do ficheiro");
    }
    else {
        cout << "Ficheiro aberto com sucesso\n";

        //fscanf(fich, "%s", &texto ); //fscanf não lê do espaço para a frente
        //cout << texto;
        //fgets(texto,100, fich);
        //puts(texto);

        //fputs(texto,fich);
        //puts(texto);

        while (fgets(frase,100,fich) != NULL) 
        {
            printf ("O texto que o ficheiro tem :: %s", frase);
        }
      
        fclose(fich);
    }

    

    cout << endl;
    system("pause");				
	return 0;	
}