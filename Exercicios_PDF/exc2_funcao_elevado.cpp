/*
Faça um programa que receba dois valores inteiros X e N e calcule por meio de umafunção o valor de X elevado a N, após isso imprima o resultado na tela.
*/
#include <iostream>	
		
using namespace std;

int elevado (int b, int e)      //5 elevado a 2         //5 elevado a 3
{
    int cont = 1;   
    int res = b;                //res = 5               //res = 5
    if ( e == 0)
    {
        res = 1;
    }
    while ( cont < e)           //1 < 2                 //1 < 3 aqui vai fazer 3 ciclos  2<3
    {
        res*=b;                 //5 = 5 * 5 = res=25   // 5 = 5 * 5 = 25        res=25*5=125
        cont++;                 //cont = 2             // cont = 2              cont = 3 // fim
    }
    return res;

}

int main()								
{
    int base,expoente;
    printf ("Qual a base? --> ");
    scanf ("%d",&base);
    printf ("Qual o expoente?  --> ");
    scanf ("%d",&expoente);
    printf ("\t\nBASE : %d EXPOENTE %d = %d \n", base, expoente, elevado(base,expoente) );
    system("pause");				
	return 0;	
}