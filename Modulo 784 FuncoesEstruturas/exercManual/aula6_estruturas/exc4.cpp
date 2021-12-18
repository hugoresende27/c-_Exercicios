/*
Cria uma estrutura chamada retângulo. Essa estrutura deverá conter o ponto
superior esquerdo e o ponto inferior direito do retângulo. Cada ponto é definido
por uma estrutura Ponto, a qual contém as posições X e Y. Faça um programa
que declare e leia uma estrutura retângulo e exiba a área e o comprimento da
diagonal e o perímetro desse retângulo.
Area ret = b * h
diag ret = b(quad) + h(quad)

base = x_pontInf -x_pontSup
h = y_pontSup - yPontInf
*/

#include <iostream>	
#include <string.h>
#include <math.h>	
using namespace std;

struct ponto{
    float x;
    float y;
};

struct retangulo{
    ponto pontSup;
    ponto pontInf;
};

float calc1(float xa,float ya,float xb,float yb){
    return sqrt(pow((xb-xa),2)+pow((yb-ya),2));
}

int main()								
{
    int baseRet;
    retangulo r;
    float base,altura;

    cout << "\nPrograma Retangulo\n";
    cout << "Superior Esquerdo x -->" ;
    cin >> r.pontSup.x;
    cout << "Superior Esquerdo y -->" ;
    cin >> r.pontSup.y;
    cout << "Inferior Direito x -->" ;
    cin >> r.pontInf.x;
    cout << "Inferior Direito  y -->" ;
    cin >> r.pontInf.y;


    base = calc1(r.pontSup.x,0,r.pontInf.x,0);
    altura = calc1(0,r.pontSup.y,0,r.pontInf.y);
    cout << "Area ::"<< base*altura<<endl;
    cout << "Perimetro ::"<< (base+altura)*2<<endl;
    cout << "Diagonal maior ::"<< calc1(r.pontSup.x,r.pontSup.y,r.pontInf.x,r.pontInf.y);
    cout << endl;
    system("pause");				
	return 0;	
}