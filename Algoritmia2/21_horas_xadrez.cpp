/*Ler a hora de início e a hora de fim de um jogo de Xadrez (considere apenas horas inteiras, sem os
minutos) e calcule a duração do jogo em horas, sabendo-se que o tempo máximo de duração do jogo é
de 24 horas e que o jogo pode iniciar em um dia e terminar no dia seguinte
*/
#include <iostream>	
		
using namespace std;


int main()								
{
    int hora_i,hora_f,tempo_total;
    cout << "PROGRAMA HORAS XADREZ (formato 24h)\nQual a hora de inicio do jogo [0h-24h]?--> ";
    cin >> hora_i;
    cout << "Hora final do jogo [0h-24h]?--> ";
    cin >> hora_f;
    
    if (hora_i<hora_f)
    {
        tempo_total=hora_f-hora_i;  
    }
    else 
    {
        if(hora_f<hora_i)
        {
            //24-20 + 3 = 4 + 3 = 7 // 24-hora_i + hora_f
            tempo_total=24-hora_i+hora_f;
        }
        else
        {
            printf ("Minimo de 1 hora de jogo...\n ");
            tempo_total=24;
        }
    }
    printf( "O tempo total da partida foi de %d horas\n",tempo_total);
    

    system("pause");				
	return 0;	
}