/*
As jogadas do jogo do galo deverão ser armazenadas numa matriz (3x3) de
caractere, chamada "tabuleiro", cada posição desta matriz armazenará um dos
valores: " ", "_", "X" ou "O". Abaixo uma representação gráfica desta matriz.

   1   2   3
1 ___|___|___
2 ___|___|___
3    |   |

2 - A cada jogada o programa deverá mostrar na tela a situação atual do
“tabuleiro”. Por exemplo:

    1  2   3
1 ___|___|___
2 ___|_X_|___
3  O |   | O

3 - Terão dois jogadores no jogo. O programa deve solicitar o nome dos dois
jogadores antes de começar o jogo. A cada jogada o programa deverá perguntar
separadamente as posições horizontal e vertical da jogada, nesta ordem.

*/
#include <iostream>	
		
using namespace std;

char tab[10]={'O','1','2','3','4','5','6','7','8','9'};


void tabuleiro()
{
    system("cls");
    printf ("\n\t\t*********** JOGO DO GALO *********\n");
    printf ("    |    |      \n");
    printf ("  %c | %c  | %c   \n",tab[1],tab[2],tab[3]);
    printf (" ___|____|____  \n");
    printf ("    |    |      \n");
    printf ("  %c | %c  | %c   \n",tab[4],tab[5],tab[6]);
    printf (" ___|____|____  \n");
    printf ("    |    |      \n");
    printf ("  %c | %c  | %c   \n",tab[7],tab[8],tab[9]);
}




int main()								
{
    
    string jog1,jog2;
    tabuleiro();
    printf ("Nome do jogador 1--> ");
    scanf ("%s",jog1);
    printf ("Nome do jogador 2--> ");
    scanf ("%s",jog2);
    printf *(@)
    system("pause");				
	return 0;	
}