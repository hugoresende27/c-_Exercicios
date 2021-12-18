/*
Crie uma estrutura para representar as coordenadas de um ponto no plano (posi-
ções X e Y). Em seguida, declare e leia do teclado um ponto e exiba a distância
dele até a origem das coordenadas, isto é, posição (0, 0). Para realizar o cálculo,
utilize a fórmula a seguir:
d =raiz( (XB - XA)quadrado +(YB - YA)quadrado)
*/

#include <iostream>	
#include <string.h>
#include <math.h>	
using namespace std;

struct exc2{
    int x;
    int y;
};

int calc(int xa,int ya,int xb,int yb){
    return sqrt(pow((xb-xa),2)+pow((yb-ya),2));
}


int main()								
{
    exc2 ponto;
    cout << "Coordenada X:: ";
    cin >> ponto.x;
    cout << "Coordenada Y:: ";
    cin >> ponto.y;
    cout << "RES:: "<< calc(0,0,ponto.x,ponto.y);
    cout << endl;
    system("pause");				
	return 0;	
}