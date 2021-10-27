#include <stdio.h>
#include <iostream>
using namespace std;
int main () 
{
    int t, i, j, k, cont, seg, mili;
    float limite, menor;
    float m[20][3];
    char nome[20][60];
do 
{
    printf ("Informe o numero de participantes (entre 2 e 20): ");
    scanf ("%d", &t);
} while (t<2 || t>20);

for (i=0; i<t; i++) 
{
    printf ("Informe o nome do participante %d:", i+1);
    fflush(stdin);
    gets (nome[i]);
}
printf ("Informe o tempo maximo para a classificacao para os jogos olimpicos: ");
scanf ("%f", &limite);
for (i=0; i<t; i++) 
{
    for (j=0; j<3; j++) 
    {
        printf ("%s . tempo %d\n", nome[i], j+1);
        scanf ("%f", &m[i][j]);
    }
}
cont =0;
cout << "*************************************************************\n";
printf ("\n\tLista de classificados ­ tempo limite: %f segundos",limite);
for (i=0; i<t; i++) 
{
    for (j=0; j<3; j++)
    {
        if (m[i][j]<limite) 
        {
            cont+= 1;
            menor = m[i][j];     
            for (k=1; k<3; k++) 
            {
                if (menor>m[i][k])
                    menor = m[i][k];   
            }

        seg = menor;
        mili = (menor-seg)*100;
        printf ("\n\t%s com o tempo de %d segundos e %d milésimos de segundo.", nome[i], seg, mili);
        }
    }
}
if (cont==0)
printf ("Não há nenhum classificado.");
return 0;
}