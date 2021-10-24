/*Faça um algoritmo que leia três notas de um aluno, calcule e escreva a média final deste aluno.
Considerar que a média é ponderada e que o peso das notas é 2, 3 e 5. Fórmula para o cálculo da média
final é:
                n1 * 2 + n2 * 3 + n3 * 5
mediafinal = -----------------------------------
                            10
*/

#include <iostream>	
		
using namespace std;


int main()								
{
    float notas[3];
    float media=0;
    cout << "PROGRAMA MEDIAS V2\n*************************\n";
    for (int i=0;i<3;i++)
    {
        printf ("\tMedia %d --> ",i+1);
        //cin >> notas[i];
        scanf ("%f",&notas[i]);
    }
    printf ("*************************\n");
    for (int i=0;i<3;i++)
    {
        printf ("\tMedia %d --> %.2f  \n",i+1,notas[i]);
    }
    media = (notas[0]*2+notas[1]*3+notas[2]*5)/10;
    printf ("A media vai ser %.2f valores\n", media);

    system("pause");				
	return 0;	
}