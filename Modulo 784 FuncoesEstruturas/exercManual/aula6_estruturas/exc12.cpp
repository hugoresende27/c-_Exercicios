/*
Astolfolov Oliveirescu é técnico de um time da série C do poderoso campeonato
de futebol profissional da Albânia. Ele deseja manter os dados dos seus jogadores
guardados de forma minuciosa. Ajude-o fazendo um programa para armazenar
os seguintes dados de cada jogador: nº da camisa, peso (kg), altura (m) e a posição
em que joga (atacante, defensor ou meio campista). Lembre-se que o time tem 22
jogadores, entre reservas e titulares. Leia os dados e depois gere um relatório no
vídeo, devidamente tabulado/formatado.
*/
#include <iostream>	
#include <string.h>
#include <math.h>	
#define MAX 2	
using namespace std;

struct jogador{
    char nome [20];
    int camisa;
    float peso;
    float altura;
    char pos;
};

int main()								
{
    jogador equipa [MAX];
    cout << "*********** FOOTBALL MANAGER 22 *************\n";
    for (int i=0; i< MAX; i++){
        cout << "NOME:: ";
        scanf( "%s", &equipa[i].nome);
        
        cout << "CAMISOLA NR:: ";
        scanf( "%d", &equipa[i].camisa);
        cout << "PESO:: ";
        scanf( "%f", &equipa[i].peso);
       
        cout << "ALTURA(cms):: ";
        scanf( "%f", &equipa[i].altura);
        cout << "POSIÇÂO-[D/M/A]:: ";
        fflush(stdin);
        scanf( "%c", &equipa[i].pos);
    }
    cout<< "\nLISTA JOGADORES\nNOME\tNR\tPESO\t\tALTURA\tPOS\n";
    for (int i=0; i<MAX; i++){
        printf ("%s \t %d \t%.1fkg's \t %.1fcms %c\n",
                equipa[i].nome,equipa[i].camisa,equipa[i].peso,equipa[i].altura,equipa[i].pos);
    }
    

    cout << endl;
    system("pause");				
	return 0;	
}