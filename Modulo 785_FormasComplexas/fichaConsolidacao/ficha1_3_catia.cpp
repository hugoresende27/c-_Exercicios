#include <iostream>
#include <locale>
using namespace std;

#define TAM 1

struct Carros { int id;
				char marca [10];
				char modelo[10];
				char cor[10];
};

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	
	Carros carro[TAM];
	
	FILE *arquivo;
	
	int cont = 0;
	
	arquivo = fopen ("carros_catia.txt", "a");
	
	fprintf (arquivo, " ID  | Marca | Modelo | Cor | \n \n");
	
	cout << "Registro de ve�culos " << endl;
	
	for (cont = 0; cont < TAM ; cont ++)
	{
		
		cout << "Digite o n�mero: " << endl;
		scanf ("%d", &carro[cont].id);
		fflush (stdin);
		cout << "Digite a marca: " << endl;
		scanf ("%s", carro[cont].marca);
		cout << "Digite o modelo: " << endl;
		scanf ("%s", carro[cont].modelo);
		cout << "Digite a cor: " << endl;
		scanf ("%s", carro[cont].cor);
	
		
		fprintf (arquivo, " %d | %s | %s | %s | \n", carro[cont].id, carro[cont].marca,carro[cont].modelo, carro[cont].cor);
	}
		
	
/*	
	while ( fscanf (arquivo, "%d %s %s %s", carro[cont].id, carro[cont].marca,carro[cont].modelo, carro[cont].cor)== 4)
	{
		fprintf (arquivo, "%d %s %s %s", carro[cont].id, carro[cont].marca,carro[cont].modelo, carro[cont].cor);
		
	}*/
	fclose(arquivo);	
	
	


}
