/*
Dado o ficheiro criado na "Atividade 2", desenvolva um programa que leia os 5 números inseridos no ficheiro para  um array.
*/
#include <iostream>	
#include <string.h>
#include <math.h>		
#include <locale.h>

using namespace std;

int main()								
{

    FILE *file;
  
    int novoArray[5];

        file = fopen ("arrayInteiros.txt", "r");
        //verificação se o ficheiro existe
        if (file == NULL ){
            printf ("Falhou abertura do ficheiro");
        }
        else {
            
            cout << "Ficheiro aberto com sucesso\n";      
              
            for (int i=0; i<5;i++){
                int temp;
                fscanf(file,"%d", &temp);
                novoArray[i] = temp;
                cout << novoArray[i]<<endl;
            }

            fclose(file);//cada fopen tem um fclose
        }
    cout << endl;
    system("pause");				
	return 0;	
}