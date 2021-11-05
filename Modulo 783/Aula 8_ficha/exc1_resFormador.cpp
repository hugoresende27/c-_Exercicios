/*Ficha de consolida��o de conhecimentos - 2, quest�o 1 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int cod[3], qtd[3], op, i, codPesq;
	float vCompra[3], vVenda[3];
	
	for (i=0; i<3; i++) {
		 printf("\nInsira o codigo do produto:\n");
		 scanf("%d", &cod[i]);
		 printf("\nInsira a quantidade do produto:\n");
		 scanf("%d", &qtd[i]);
		 printf("\nInsira o valor de compra do produto:\n");
		 scanf("%f", &vCompra[i]);
		 printf("\nInsira o valor de venda do produto:\n");
		 scanf("%f", &vVenda[i]);
	}
	
	printf("\n1 - Mostrar todos os produtos\n");
	printf("\n2 - Mostrar produto por codigo\n");
	scanf("%d", &op);
	switch(op)
	{
		case 1 :
		{
			printf("\nCodigo \t Quantidade \t Valor Compra \t Valor Venda \n");
			for (i=0; i<3; i++) {
		 		printf("%d \t",cod[i]);
		 		printf("%d \t\t",qtd[i]);
		 		printf("%f \t",vCompra[i]);
		 		printf("%f \n",vVenda[i]);
		 	}
		 	break;
	 	}
		case 2 :
		{
			printf("\nDigite o codigo do produto:\n");
			scanf("%d", &codPesq);
			printf("\nCodigo \t Quantidade \t Valor Compra \t Valor Venda \n");
		 	for (i=0; i<3; i++) {
		 		if (cod[i] == codPesq) {
		 			printf("%d \t",cod[i]);
		 			printf("%d \t\t",qtd[i]);
					printf("%f \t",vCompra[i]);
		 			printf("%f \n",vVenda[i]);
		 			break;
		 		}
		 	}
		 	break;
		}
		default : 
	 		printf("A op��o que inseriu n�o � v�lida \n");
	}
}