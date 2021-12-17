#include <iostream>	
#include <string.h>

using namespace std;

struct funcionario{
    int codFunc;
    char nome[30];
    char morada[30];
    int BI;
    float vencimento;
    bool casado;
};

float calculaVenc(float v, bool c){
    if (c == true){
        v = v * .95;
    }else {
        v = v * .90;
    }
    return v;
}

bool casol(char c){
    c= tolower(c);
    if (c=='c') {
         return true;
     }
     else {
         return false;
     }
}

int main()
{
	struct funcionario func1, func2;
    char estado;
	func1.codFunc = 1;
	strcpy(func1.nome,"Maria");
	cout << "\nInsira o vencimento: ";
	cin >> func1.vencimento;
	// Input do estado civil
    cout << "\nInsira o Estado Civil([C]asado/[S]olteiro): ";
    cin >> estado;
    func1.casado = casol(estado);
	printf("\nO Codigo e: %d", func1.codFunc);
	printf("\nO Nome e: %s", func1.nome);
	printf("\nO Vencimento ANTES DO IMPOSTO-->: %.2f", func1.vencimento);
	// Mostrar o estado civil
    printf("\nO Estado civil %s", func1.casado ? "CASADO" : "SOLTEIRO");
	//Em função do estado civil calcule o vencimento líquido (com retenção de 5% casado e 10% nao casado)

    
    printf("\nO Vencimento e: %.2f", calculaVenc(func1.vencimento,func1.casado));

	func2.codFunc = 2;
	strcpy(func2.nome,"Pedro");
	cout << "\nInsira o vencimento: ";
	cin >> func2.vencimento;
	// Input do estado civil
    cout << "\nInsira o Estado Civil([C]asado/[S]olteiro): ";
    cin >> estado;
    func2.casado = casol(estado);
    
	printf("\nO Codigo e: %d", func2.codFunc);
	printf("\nO Nome e: %s", func2.nome);
	printf("\nO Vencimento ANTES DO IMPOSTO-->: %f", func2.vencimento);
	// Mostrar o estado civil
    printf("\nO Estado civil %s", func2.casado ? "CASADO" : "SOLTEIRO");
	// Em função do estado civil calcule o vencimento líquido (com retenção de 5% casado e 10% nao casado)	
    printf("\nO Vencimento e: %.2f", calculaVenc(func2.vencimento,func2.casado));



    system("pause");				
	return 0;	
}