/*
Crie uma estrutura para representar as coordenadas de um ponto no plano (posi-
ções X e Y). Em seguida, declare e leia do teclado dois pontos e exiba a distância
entre eles, considere a mesma fórmula do exercício anterior.
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
    exc2 ponto,ponto2;
    cout << "Ponto 1 Coordenada X:: ";
    cin >> ponto.x;
    cout << "Ponto 1 Coordenada Y:: ";
    cin >> ponto.y;
    cout << "Ponto 2 Coordenada X:: ";
    cin >> ponto2.x;
    cout << "Ponto 2 Coordenada Y:: ";
    cin >> ponto2.y;
    cout << "\n\tDISTANCIA:: "
    << calc(
        ponto.x,ponto.y,
        ponto2.x,ponto2.y);
    cout << endl;
    system("pause");				
	return 0;	
}