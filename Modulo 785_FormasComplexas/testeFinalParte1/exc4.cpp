/*
Crie um programa que converta o ficheiro em anexo ("programar_c.txt") de maiúsculas 
para minúsculas e de minúsculas para maiúsculas, conforme o que é encontrado no 
documento de texto, de acordo com os seguintes requisitos: 
• Deverá ser verificada a existência do ficheiro ao abrir o ficheiro de origem 
("programar_c.txt") e se o mesmo não existir, o utilizador deverá ser informado e não 
será efetuada qualquer tentativa de conversão; 
• A conversão do ficheiro original é realizada para um novo ficheiro, cujo nome deverá 
pedir ao utilizador. 
• Deverá usar uma função para realizar a conversão dos caracteres; 
Nota: Só é necessário entregar o ficheiro com o código fonte e o ficheiro de destino (já 
convertido).
*/
#include <iostream>	
#include <string.h>
#include <math.h>		
#include <locale.h>
#include <fstream>
#include <cctype>   //biblioteca para usar isupper 

using namespace std;

char converteChars(char a){
    char resultado;
    if (isupper(a)){
        resultado = tolower(a);
    } else  {
        resultado = toupper(a);
    }
    return resultado;
}

int main()								
{
    setlocale (LC_ALL, "Portuguese");//setlocale opcional devido aos acentos e config do teclado

    FILE *file_original, *file_novo;
    file_original = fopen ("programar_c.txt", "r");

    char nomeFich[100];

    if (file_original == NULL ){
        printf ("Falhou abertura do ficheiro original\nNão é possível fazer a conversão\n");
        system("pause");
        exit(0);
    }
    else {
        cout << "Qual o nome que quer dar ao ficheiro --> ";
        cin >> nomeFich;
        strcat(nomeFich,".txt");//concatenação auto do .txt
        file_novo = fopen(nomeFich,"a");

        do{

            char c = fgetc(file_original);
            fputc(converteChars(c),file_novo);

            if (feof(file_original)){//verificação fim do ficheiro
                break;
            }
           
        }while (1);
        cout << "Ficheiro "<<nomeFich<< " criado em formato txt\n";
        fclose(file_original);
        fclose(file_novo);

    }


    cout << endl;
    system("pause");				
	return 0;	
}