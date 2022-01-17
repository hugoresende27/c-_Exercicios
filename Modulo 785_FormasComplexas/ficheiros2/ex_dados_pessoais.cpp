/*1 - Criar um programa que leia os dados de uma pessoa e os escreva num ficheiro

Exemplo:
Nome: Pedro Santos
Idade: 25
Profiss�o: Estudante*/


#include <iostream>
#include <stdio.h>
#include <locale>
#include <string.h>
using namespace std;
int main()
{
	setlocale (LC_ALL, "Portuguese");

	FILE *file;
	char linha[100];
	char result[100];
	const char *label[3];
	label[0]="Nome: ";
	label[1]="Idade: ";
	label[2]="Profiss�o: ";

	file=fopen("dados_pessoaisAlailson.txt", "w");
	
	for(int i=0; i<3; i++){
		cout << "Insira  "  << label[i]<<endl;
		fgets(linha, sizeof(linha), stdin); // Le do teclado uma linha
		strcat(strcpy(result, label[i]), linha);
	
	fputs(result, file); // Escreve uma linha inteira (par�grafo)
	}
	
 	fclose(file);
	 	
	return 0;
}

