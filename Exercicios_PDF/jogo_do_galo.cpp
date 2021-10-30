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

char tab[10]={'1','2','3','4','5','6','7','8','9'};
char marca = 'X';

/////////////////////////////////////////////////////////////////////////////////////////////
void tabuleiro()
{
    system("cls");
    printf ("\n\t\t*********** JOGO DO GALO *********\n");
    printf ("    |    |      \n");
    printf ("  %c | %c  | %c   \n",tab[0],tab[1],tab[2]);
    printf (" ___|____|____  \n");
    printf ("    |    |      \n");
    printf ("  %c | %c  | %c   \n",tab[3],tab[4],tab[5]);
    printf (" ___|____|____  \n");
    printf ("    |    |      \n");
    printf ("  %c | %c  | %c   \n",tab[6],tab[7],tab[8]);
}
/////////////////////////////////////////////////////////////////////////////////////////////
void validar_jogada(int i)
{
    if ((i == 1) && (tab[0]='1'))
    {
        tab[0]=marca;
    }
    else
    {
        if ( (i==2) && (tab[1]='2'))
        {
            tab[1]=marca;
        }
        else
        {
            if ( (i==3) && (tab[2]='3'))
            {
                tab[2]=marca;
            }
            else
            {
                if ( (i==4) && (tab[3]='4'))
                {
                   tab[3]=marca;
                }
                else
                {
                    if ( (i==5) && (tab[4]='5'))
                    {
                        tab[4]=marca;
                    }
                    else
                    {
                        if ( (i==6) && (tab[5]='6'))
                        {
                            tab[5]=marca;
                        }
                        else
                        {
                            if ( (i==7) && (tab[6]='7'))
                            {
                                tab[6]=marca;
                            }
                            else
                            {
                                if ( (i==8) && (tab[7]='8'))
                                {
                                    tab[7]=marca;
                                }
                                else
                                {
                                    if ( (i==9) && (tab[8]='8'))
                                    {
                                        tab[8]=marca;
                                    }
                                    else
                                    {
                                        cout<<"Jogada Inválida!!\n";
                                        
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
/////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////////////////
int verifica()
{
    if (tab[1] == tab[2] && tab[2] == tab[3])

        return 1;
    else if (tab[4] == tab[5] && tab[5] == tab[6])

        return 1;
    else if (tab[7] == tab[8] && tab[8] == tab[9])

        return 1;
    else if (tab[1] == tab[4] && tab[4] == tab[7])

        return 1;
    else if (tab[2] == tab[5] && tab[5] == tab[8])

        return 1;
    else if (tab[3] == tab[6] && tab[6] == tab[9])

        return 1;
    else if (tab[1] == tab[5] && tab[5] == tab[9])

        return 1;
    else if (tab[3] == tab[5] && tab[5] == tab[7])

        return 1;
    else if (tab[1] != '1' && tab[2] != '2' && tab[3] != '3' 
                    && tab[4] != '4' && tab[5] != '5' && tab[6] != '6' 
                  && tab[7] != '7' && tab[8] != '8' && tab[9] != '9')

        return 0;
    else
        return -1;
}




int main()								
{
    
    string jog1,jog2;
    int jogada;
    int contador=9;
    tabuleiro();
    printf ("Nome do jogador 1--> ");
    cin >> jog1;
    printf ("Nome do jogador 2--> ");
    cin >>jog2;

    do
    {
        tabuleiro();
        cout<<jog1<<"-->";
        cin>>jogada;
        jogar(jogada);
        cout<<jog2<<"-->";
        cin>>jogada;
        jogar(jogada);
        contador--;
    } while (contador>0);
    



 
    system("pause");				
	return 0;	
}