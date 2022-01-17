/*1 - Criar um programa que leia os dados de uma pessoa e os escreva num ficheiro

Exemplo:
Nome: Pedro Santos
Idade: 25
Profissão: Estudante
*/

#include <iostream>	
#include <string.h>
#include <math.h>		
#include <locale.h>
#include <fstream>
using namespace std;

int main()								
{

    FILE *file;
    char ficheiroAtual[50] = "dados_pessoais.txt";
    file = fopen (ficheiroAtual, "w");

    string label[] = {"Nome: ", "Idade: ", "Profissão: "};

    char texto[100];
    //verificação se o ficheiro existe
        if (file == NULL ){
            printf ("Falhou abertura do ficheiro");
        }
        else {
            cout << "Ficheiro aberto com sucesso\n";
            for (int i=0; i<3;i++){
                cout << " -> ";
                fflush(stdin);
                fgets(texto,sizeof(texto),stdin);
                strcat(texto,label[i]);
                fputs(texto,file);
            }
        

            fclose(file);//cada fopen tem um fclose
        }

    cout << endl;
    system("pause");				
	return 0;	
}