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

char tab[3][3]={{'1','2','3'},
                {'4','5','6'},
                {'7','8','9'}};
char vez = 'X',outra_x;
int opcao,lin,col;
string jog1,jog2;
bool empate;

/////////////////////////////////////////////////////////////////////////////////////////////
void tabuleiro()
{
    system("cls");
    printf ("\n\t\t*********** JOGO DO GALO *********\n");
    printf ("    |    |      \n");
    printf ("  %c | %c  | %c   \n",tab[0][0],tab[0][1],tab[0][2]);
    printf (" ___|____|____  \n");
    printf ("    |    |      \n");
    printf ("  %c | %c  | %c   \n",tab[1][0],tab[1][1],tab[1][2]);
    printf (" ___|____|____  \n");
    printf ("    |    |      \n");
    printf ("  %c | %c  | %c   \n",tab[2][0],tab[2][1],tab[2][2]);
}
/////////////////////////////////////////////////////////////////////////////////////////////
void jogar(string a,string b)
{
    if (vez=='X')
    {
        cout <<"Jogador "<<a<<"--> ";
    }
    else if (vez='O')
    {
        cout <<"Jogador "<<b<<"--> ";
    }
    cin>>opcao;
    switch (opcao)
    {
        case 1:
            lin=0;
            col=0;
            break;
        case 2:
            lin=0;
            col=1;
            break;
        case 3:
            lin=0;
            col=2;
            break;
        case 4:
            lin=1;
            col=0;
            break;
        case 5:
            lin=1;
            col=1;
            break;
        case 6:
            lin=1;
            col=2;
            break;
        case 7:
            lin=2;
            col=0;
            break;
        case 8:
            lin=2;
            col=1;
            break;
        case 9:
            lin=2;
            col=2;
            break;
        default:
            cout<<"Jogada Inválida\n";
    }
    if (vez == 'X' && tab[lin][col] !='X' && tab[lin][col] !='O')
    {
        tab[lin][col]='X';
        vez='O';
    }
    else if (vez == 'O' && tab[lin][col] !='X' && tab[lin][col] !='O')
    {
        tab[lin][col]='O';
        vez='X';
    }
    else
    {
        cout << "Já preenchido...";
        jogar(jog1,jog2);
    }
    tabuleiro();
}
/////////////////////////////////////////////////////////////////////////////////////////////
bool gameOver()
{
    for (int i=0;i<3;i++)//verifica linhas e colunas 
    {
        if (tab[i][0] == tab[i][1] && tab[i][2] == tab[i][0] ||
            tab[0][i] == tab[1][i] && tab[2][i] == tab[0][i] )
            return false;
    }
    if (tab[0][0] == tab[1][1] && tab[2][2] == tab[1][1] || //verifica diagonais
        tab[0][2] == tab[1][1] && tab[1][1] == tab[2][0] )
        return false;
    
    for (int i=0;i<3;i++)
        for (int j=0;j<3;j++)
        {
            if (tab[i][j] != 'X' && tab[i][j] != 'O')
            return true;
        }
    empate = true;
    return false;
}
/////////////////////////////////////////////////////////////////////////////////////////////



int main()								
{
do
{
    cout << "*********** JOGO DO GALO ************\n";
   
    printf ("Nome do jogador 1--> ");
    cin >> jog1;
    printf ("Nome do jogador 2--> ");
    cin >>jog2;
    while (gameOver()==true)      //gameOver instanciado em true
    {
        tabuleiro();
        jogar(jog1,jog2);
        gameOver();
    }
    if(vez=='X' && empate==false)
    {
        cout << "VENCEDOR -->"<<jog1<<endl;
    }
    else  if(vez=='O' && empate==false)
    {
        cout << "VENCEDOR -->"<<jog2<<endl;
    }
    else
    {
        cout << "EMPATE\n";
    }
    empate=true;
    cout << "Jogar outra vez (s/n)?->";
    cin >>outra_x;
    outra_x=tolower(outra_x);
}while (outra_x != 'n');
    system("pause");				
	return 0;	
}