/*
Faça um programa em C que identifica os corredores classificados para os jogos
olímpicos. O programa deve ler do teclado:
a) Receber o número t de corredores participantes, no intervalo de [2, 20].
b) O nome de cada atleta deverá ser lido do teclado ser armazenado num vetor.
c) O valor para a variável real limite, também deverá ser lido do teclado. Esta variável
corresponde ao tempo máximo permitido para alcançar a classificação para as olimpíadas (ex. 7s
e 20ms).
d) Cada atleta terá direito a três tomadas de tempo. Armazenar os tempos dos corredores
numa matriz t x 3, na qual cada linha identifica um atleta e cada coluna seu respectivo tempo.
O programa deverá apresentar na tela:
a) O nome e menor tempo de cada atleta classificado para as olimpíadas.
Ex.: Lista de Classificados – Tempo limite 14 segundos.
- João com o tempo de 12 segundos e 0 milésimos de segundo.
- Fernando com o tempo de 13 segundos e 450 milésimos de segundo.
b) A mensagem “Não há nenhum atleta classificado.” Deverá ser exibida caso nenhum atleta
atinja o índice olímpico.
*/
#include <iostream>	
#include<stdio.h>	
#include <string.h>	
using namespace std;


int main()								
{

    int num_p;
    char nomes[20][100];
    char qualificados[20][100];
    float tempo_max;
    float tempos_atletas[20][3];
    do
    {
        printf ("NUMERO DE PARTICIPANTES(2-20)::");
        scanf ("%d",&num_p);
    }while (num_p<2 || num_p>20);

    for (int i=0; i<num_p; i++)
    {
         
        printf ("NOME ATLETA %d--> ", i+1);
        fflush(stdin);
        gets(nomes[i]);
    }


    printf ("Qual o tempo máximo de qualificação? --> ");
    scanf("%f",&tempo_max);
 
    for (int i=0; i< num_p;i++)
    {
        for (int j=0; j<3;j++)
        {
            printf ("\t[%d]::TEMPO DE %s -->", j, nomes[i]);
            scanf("%f", &tempos_atletas[i][j]);
        }
    }
    // cout << "***********LISTA ATLETAS**********\n";
    // for (int i=0;i<num_p;i++)
    // {
    //     puts(nomes[i]);
    // }

    cout << "*********** TABELA DE TEMPOS **********\n";
    char aux[100];
    for (int i=0; i< num_p;i++)
    {
        printf ("%10s-->", nomes[i]);
        for (int j=0; j<3;j++)
        {
            printf ("%.2f || ",tempos_atletas[i][j]);
            if (tempos_atletas[i][j]<tempo_max)
            {  
                strcpy(qualificados[i],nomes[i]);
            }
        }
        printf ("\n");
    }
    cout << "*********** QUALIFICADOS **********\n";
    for (int i=0;i<num_p;i++)
    {
        printf ("%s && ", qualificados[i]);
    }
  
    system("pause");				
	return 0;	
}