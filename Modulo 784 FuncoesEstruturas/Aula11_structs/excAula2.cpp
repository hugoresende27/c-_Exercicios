#include <iostream>
#include <string.h>
#define T 3
using namespace std;

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

// typedef struct funcionario DepartamentoA;
// typedef struct funcionario DepartamentoB;
float calcVenc(float v, float taxa);
int main()
{
	funcionario func[T];
    float vencLiq;
    // DepartamentoA func2[T];
	////////////////////INPUT////////////////////////////
	for (int i=0; i<T; i++) {
		cout << "Insira o codigo de funcionario: ";
		scanf("%d", &func[i].codFunc);
		cout << "Insira o nome de funcionario: ";
        cin >> func[i].nome;
		//scanf("%s", &func[i].nome);
		cout << "Insira o vencimento de funcionario: ";
		scanf("%f", &func[i].vencimento);
		cout << "Casado [S/N] ?";
        fflush(stdin);
		scanf("%c", &func[i].casado);
        
		//...
        cout << "##############################\n";
	}
    ////////////////////OUTPUT////////////////////////////
    
    cout << "OUTPUT \n";
	for (int i=0; i<T; i++) {
		 
		printf ("\t%d", func[i].codFunc);
		printf ("\t%s", func[i].nome);
		printf ("\t%.2f", func[i].vencimento);
		printf ("\t%c", func[i].casado);
		//printf ("\t%.2f", func[i].casado);
        if (func[i].casado == 's'){
            vencLiq = calcVenc(func[i].vencimento, 0.95);
        } else {
            vencLiq = calcVenc(func[i].vencimento, 0.1);   
        }
        printf ("\t%.2f", vencLiq);
        cout << "\n------------------------\n";
		//...
	}
}


float calcVenc(float v,  float taxa){
        return v*taxa; 
}