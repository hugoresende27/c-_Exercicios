#include<iostream>
#define TAM 10
using namespace std;
int main ()
{
	
	int idade[TAM], opiniao[TAM], soma=0, contador=0, regular , total_bons=0;
	float media, bom;
	
	for (int i = 0; i < TAM; i++)
	{
		fflush(stdin);
		printf ("Informe a idade do espectador %d: ", i + 1);
		//scanf ("%d", &idade[i]);
		cin >> idade[i];
		printf ("Informe a opinião do espectador %d (3 - EXCELENTE, 2 - BOM, 1 - REGULAR): ", i + 1);
		cin >> opiniao[i];
		//scanf ("%d", &opiniao[i]);
		printf ("\n");	
	}	
	
	for (int i = 0; i < TAM; i++)
	{
		if (opiniao[i] == 3)
		{
			soma = soma + idade[i]; 
			contador ++;
		}
		if (opiniao[i] == 1)
		{
			regular = regular + 1;
		}
		if (opiniao[i] == 2)
		{
			total_bons++;
		}		
	}
	
	printf ("\n");
	
	media = soma / contador;	
	
	printf ("Média das idades das pessoas que responderam 'EXCELENTE': %.2f", media); 
	
	printf ("\n");
	
	printf ("\nQuantidade de pessoas que responderam 'REGULAR': %d", regular);

	printf ("\n");
	bom = total_bons*100 / TAM ;
	printf ("\nPercentagem de pessoas que responderam 'BOM' entre todos os expectadores analisados: %.2f", bom);
		
	return 0;
}