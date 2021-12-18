#include <stdio.h>
#include <stdlib.h>

int main()
 {
 int m[5][5];
 int i, j, k, aux;

printf("\nDigite os 25 valores da matriz:\n");
 for (i=0; i<5; i++)
 for (j=0; j<5; j++)
 scanf("%d", &m[i][j]);

 //imprindo a matriz
 for (i=0; i<5; i++) {
 printf("\n");
 for (j=0; j<5; j++)
 printf("%d \t", m[i][j]);
}
 printf("\n\n");

 //trocando a segunda linha pela quinta
 for (j=0; j<5; j++) {
 aux = m[1][j];
 m[1][j] = m[4][j];
 m[4][j] = aux;
 }
 //imprindo a matriz
 for (i=0; i<5; i++) {
 printf("\n");
 for (j=0; j<5; j++)
 printf("%d \t", m[i][j]);
 }
 printf("\n\n");

 //trocando a terceira coluna pela quinta
 for (i=0; i<5; i++) {
 aux = m[i][2];
 m[i][2] = m[i][4];
 m[i][4] = aux;
 }
 //imprindo a matriz
 for (i=0; i<5; i++) {
 printf("\n");
 for (j=0; j<5; j++)
 printf("%d \t", m[i][j]);
 }
 printf("\n\n");

 //trocando a diagonal principal pela diagonal secundaria
 i = 0;
 k = 4;
 for (j=0; j<5; j++) {
 aux = m[i][j];
 m[i][j] = m[k][j];
 m[k][j] = aux;
 k--;
 i++;
 }
 //imprindo a matriz
 for (i=0; i<5; i++) {
 printf("\n");
 for (j=0; j<5; j++)
 printf("%d \t", m[i][j]);
 }
 
    system("pause");				
	return 0;	
}