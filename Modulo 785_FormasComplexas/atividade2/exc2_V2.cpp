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
    cout << "4.COLOCAR FICHEIRO NUM ARRAY\n";
    cout << "5.ELIMINAR FICHEIRO\n";
    cout << "0.SAIR\n";
}

void lerFicheiro(){

        FILE *file;
        char texto[100];
        int x;
        file = fopen ("fileV2.txt", "r");
            //verificação se o ficheiro existe
            if (file == NULL ){
                printf ("Falhou abertura do ficheiro");
            }
            else {
                cout << "Ficheiro aberto com sucesso\n";    
                /*
                for (int i=0; i<5; i++){
                    int temp;
                    fscanf(file,"%d\n", &temp);
                    cout << temp <<endl;
                }    
               */    
        while (file != feof) {
            printf ("%d",x);
        };

                fclose(file);//cada fopen tem um fclose
            }
}

void escreverFicheiro(){

    FILE *file; 
    int inteiros[5];
    char texto[100];
    file = fopen ("fileV2.txt", "w");
    
        for (int i=0; i<5;i++){
            cout << i+1<<" -> valor:: ";
            cin >> inteiros[i];
            fprintf(file,"%d\n",inteiros[i]); 
        }
        
     
        fclose(file);
}

void acrescentarFicheiro(){

        FILE *file;
        file = fopen ("fileV2.txt", "a");
        //verificação se o ficheiro existe
        if (file == NULL ){
            printf ("Falhou abertura do ficheiro");
        }
        else {
            cout << "Ficheiro aberto com sucesso\n";
            
            int valor=0;
            cout <<" -> valor:: ";
            cin >> valor;
            fprintf(file,"%d\n",valor); 

            fclose(file);//cada fopen tem um fclose
        }
}



void porNoArray(){

        FILE *file;
  
        int novoArray[5];

        file = fopen ("fileV2.txt", "r");
        //verificação se o ficheiro existe
        if (file == NULL ){
            printf ("Falhou abertura do ficheiro");
        }
        else {
            
            cout << "Ficheiro aberto com sucesso\n";      
            
            for (int i=0; i<5;i++){
                int temp;
                fscanf(file,"%d\n", &temp);
                novoArray[i] = temp;
                cout <<ftell(file)<<"->";
                printf ("%d | ",novoArray[i]);
            }
            

            fclose(file);//cada fopen tem um fclose
        }
}

void delFile(){
    FILE *file;
    file =  fopen ("fileV2.txt", "r");
    delete file;
    fclose(file);

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
    case 0:
        cout<< "Adeus...";
        break;
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
        porNoArray();
        break;
    
    case 5:
        delFile();
        break;
    default:
        cout << "error...\n";
        break;
    }

}while (op !=0);

    
    cout << endl;
    system("pause");				
	return 0;	
}