#include <iostream>	
#include <string.h>
#include <math.h>		
#include <locale.h>
#include <fstream>
using namespace std;

FILE *file;
char ficheiroAtual[50] = "aula2Files.txt";
char texto[100];

void lerFicheiro(){

        file = fopen (ficheiroAtual, "r");
            //verificação se o ficheiro existe
            if (file == NULL ){
                printf ("Falhou abertura do ficheiro");
            }
            else {
                cout << "Ficheiro aberto com sucesso\n";
                
                
                do {
                    fgets(texto,sizeof(texto), file);
                    puts(texto);
                }while (fgets(texto,100,file) != NULL);
                cout<<"POS:: "<<ftell(file)<<"FSEEK::"<<fseek(file,100,100);
                fclose(file);//cada fopen tem um fclose
            }
}

void escreverFicheiro(){

    file = fopen (ficheiroAtual, "w");
   
    for (int i=0; i<3;i++){
        cout << "Insira uma linha -> ";
        fflush(stdin);
        //cin >> texto;
        fgets(texto,sizeof(texto),stdin);
        fputs(texto,file);
    }
   

    fclose(file);
}

void acrescentarFicheiro(){

        
        file = fopen (ficheiroAtual, "a");
        
        //verificação se o ficheiro existe
        if (file == NULL ){
            printf ("Falhou abertura do ficheiro");
        }
        else {
            cout << "Ficheiro aberto com sucesso\n";
            
            cout << "Insira uma linha -> ";
            fflush(stdin);
            fgets(texto,sizeof(texto),stdin);
            fputs(texto,file);
            

            fclose(file);//cada fopen tem um fclose
        }
}

void menu(){
    cout << "\n1.LER FICHEIRO\n";
    cout << "2.ESCREVER FICHEIRO\n";
    cout << "3.ACRESCENTAR AO FICHEIRO\n";
    cout << "4.ELIMINAR FICHEIRO\n";
    cout << "0.SAIR\n";
}

int main()								
{

   int op;
   do{

   
    menu();
    cout << "Opcao--> ";
    cin >> op;
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
        system("del aula2Files.txt");
        break;
    case 0:
        cout << "ADEUS!";
        exit(0);
        break;
    
    default:
        cout << "Opcao errada bro...\n";
        break;
    }
   }while (true);
  

    cout << endl;
    system ("dir");
    system("pause");				
	return 0;	
}