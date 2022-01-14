/*
Altere o programa anterior para que seja possível ao utilizador definir se quer ler o ficheiro, escrever no ficheiro ou
 adicionar mais texto a esse ficheiro (pode utilizar um "switch case para o efeito").
*/
#include <iostream>	
#include <string.h>
#include <math.h>		
#include <locale.h>
using namespace std;

void menu(){
    cout << "\n1.LER FICHEIRO\n";
    cout << "2.ESCREVER FICHEIRO\n";
    cout << "3.ACRESCENTAR AO FICHEIRO\n";
    cout << "4.SAIR\n";
}

void lerFicheiro(){

        FILE *file;
        char texto[100];

        file = fopen ("arrayInteiros.txt", "r");
            //verificação se o ficheiro existe
            if (file == NULL ){
                printf ("Falhou abertura do ficheiro");
            }
            else {
                cout << "Ficheiro aberto com sucesso\n";        
                fgets(texto,100, file);
                puts(texto);

                fclose(file);//cada fopen tem um fclose
            }
}

void escreverFicheiro(){

    FILE *file; 
    int inteiros[5];

    file = fopen ("arrayInteiros.txt", "w");
        for (int i=0; i<5;i++){
            cout << i+1<<" -> valor:: ";
            cin >> inteiros[i];
            fprintf(file,"%d ",inteiros[i]); 
        }
        fclose(file);
}

void acrescentarFicheiro(){

        FILE *file;
        file = fopen ("arrayInteiros.txt", "a");
        //verificação se o ficheiro existe
        if (file == NULL ){
            printf ("Falhou abertura do ficheiro");
        }
        else {
            cout << "Ficheiro aberto com sucesso\n";
            
            int valor=0;
            cout <<" -> valor:: ";
            cin >> valor;
            fprintf(file,"%d ",valor); 

            fclose(file);//cada fopen tem um fclose
        }
}

int main()								
{
  
    int op;

do{

    menu();
    cout<< "opcao--> ";
    cin>>op;
    switch (op)
    {
    case 1:
        lerFicheiro();
        break;
    
    case 2:
        escreverFicheiro();
        break;

    case 3:
        acrescentarFicheiro();
        break;
        
    case 4:
        cout<< "Adeus...";
        break;
    default:
        cout << "error...\n";
        break;
    }

}while (op !=4);

    
    cout << endl;
    system("pause");				
	return 0;	
}