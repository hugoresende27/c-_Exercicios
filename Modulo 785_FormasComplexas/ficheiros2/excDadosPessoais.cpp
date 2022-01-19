/*1 - Criar um programa que leia os dados de uma pessoa e os escreva num ficheiro

Exemplo:
Nome: Pedro Santos
Idade: 25
Profissão: Estudante

adiciona os dados do ficheiro a uma estrutura
*/

#include <iostream>	
#include <string.h>
#include <math.h>		
#include <locale.h>
#include <fstream>
using namespace std;

struct pessoa
{
    char nome[100];
    char idade[100];
    char prof[100];
};


int main()								
{

    FILE *file;
    pessoa p1;
    char ficheiroAtual[50] = "dados_pessoais.txt";
    file = fopen (ficheiroAtual, "w");

    string label[] = {"Nome: ", "Idade: ", "Profissão: "};
    

    char texto[100];
    char item[100] = {};

    //verificação se o ficheiro existe
        if (file == NULL ){
            printf ("Falhou abertura do ficheiro");
        }
        else {
            cout << "Ficheiro aberto com sucesso\n";
            for (int i=0; i<3;i++){
            
                cout << label[i]<<" -> ";
                fflush(stdin);
                fgets(texto,sizeof(texto),stdin);
                strcat(strcpy(item, label[i].c_str()),texto);    
                //strcpy(item, label[i].c_str());  
                //strcat (item,texto);      
                fputs(item,file);
            }
            fclose(file);
        }


    file = fopen (ficheiroAtual, "r");

    if (file == NULL) cout << "ERRO ao abrir file\n";
    else {
    
        // fgets(texto,sizeof(p1.nome),file) ;
        // printf("%s", texto);
        // strcpy(p1.nome,texto);

        // fgets(texto,sizeof(p1.idade),file) ;
        // printf("%s", texto);
        // strcpy(p1.idade,texto);
        
        // fgets(texto,sizeof(p1.prof),file) ;
        // printf("%s", texto);
        // strcpy(p1.prof,texto);
        
        fgets(p1.nome,sizeof(p1.nome),file) ;
        fgets(p1.idade,sizeof(p1.idade),file) ;
        fgets(p1.prof,sizeof(p1.prof),file) ;

        cout << "1."<<p1.nome;
        cout << "2."<<p1.idade;
        cout << "3."<<p1.prof;
        
    
        fclose(file);
    }

    

    cout << endl;
    system("pause");				
	return 0;	
}