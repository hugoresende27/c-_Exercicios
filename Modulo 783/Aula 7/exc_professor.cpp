#include <iostream>

using namespace std;

int main()
{
	int matriz[2][2];
	int soma_linha = 0;
	int soma_coluna = 0;

	// Percorrer a matriz Linha / Coluna
	for(int i=0; i<2; i++){
	    for(int j=0; j<2; j++){
			printf("Insira o elemento da matriz: ");
			scanf("%d",&matriz[i][j]);
	    }
	}
	
	for(int i=0; i<2; i++){
	    for(int j=0; j<2; j++){
			printf("Linha: %d Coluna: %d -> %d\t",i,j,matriz[i][j]);
			soma_linha = soma_linha + matriz[i][j]; // matriz original L/C
			soma_coluna = soma_coluna + matriz[j][i]; // matriz transposta C/L
	    }
		printf("A soma da linha é: %d", soma_linha);
		printf("A soma da coluna é: %d", soma_coluna);
	    soma_linha = 0;
	    soma_coluna = 0;
		printf("\n");
	}	
}
