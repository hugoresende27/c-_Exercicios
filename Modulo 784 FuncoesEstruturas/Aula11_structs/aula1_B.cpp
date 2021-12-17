#include <iostream>	
#include <string.h>

using namespace std;

struct funcionario{
    int codFunc;
    char nome[30];
    char morada[30];
    int BI;
    float vencimento;
};


int main()								
{
    struct funcionario func1;
    strcpy(func1.nome,"Hugao");
    func1.BI = 666;
    cout << func1.nome;
    printf ("BI::: %d", func1.BI);

    ////////////////////////////////////////////
    struct funcionario func2;
    strcpy(func2.nome,"MARIA");
    printf ("FNC2 NOME:: %s", func2.nome);
    func2.vencimento = 999.99;
    printf ("O %s ganha %.2f", func2.nome, func2.vencimento);


    cout <<endl;
    system("pause");				
	return 0;	
}