#include <iostream>
#include <string.h>
using namespace std;

#define TAM_ARRAY 3

struct funcionario
{
	int codFunc;
    char nome[30];
	char morada[30];
    int BI;
    int nif;
    float vencimento;
    char casado; //s - casado, n - nao casado
};

float calcVenc (float venc, float taxa);

int main()
{
	funcionario func[TAM_ARRAY];
	float vencLiq;
	
	for (int i=0; i<TAM_ARRAY; i++) {
		cout << "Insira o codigo de funcionario: ";
		scanf("%d", &func[i].codFunc);
		cout << "\nInsira o nome de funcionario: ";
		scanf("%s", &func[i].nome);
		cout << "\nInsira o vencimento: ";
		scanf("%f", &func[i].vencimento);
		cout << "\nCasado(s/n): ";
		fflush(stdin);
		scanf("%c", &func[i].casado);
		//...
		cout << "\n---------------------------------------\n";
	}

	for (int i=0; i<TAM_ARRAY; i++) {
		cout << "\nCodigo: " << func[i].codFunc;
		cout << "\nNome: " << func[i].nome;
		cout << "\nVencimento: " << func[i].vencimento;		
		cout << "\nCasado: " << func[i].casado;
		if(func[i].casado == 's')
		{
			vencLiq = calcVenc(func[i].vencimento, 0.05);
		}
		else
		{
			vencLiq = calcVenc(func[i].vencimento, 0.1);		
		}
		cout << "\nVencimento liquido: " << vencLiq;
		//...
		cout << "\n---------------------------------------\n";
	}
}

float calcVenc (float venc, float taxa)
{
	float vencLiq;
	vencLiq = venc - venc * taxa;
	return vencLiq;
}

