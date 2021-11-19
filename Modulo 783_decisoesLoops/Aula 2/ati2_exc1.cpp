/*
Crie um programa que receba o vencimento de um requerente de um empréstimo bem como a prestação mensal desse empréstimo, tendo em conta a seguinte condição:
Se prestação for maior que 25% do salario, imprime no ecrã: "Empréstimo não concedido", caso contrário, "Empréstimo concedido".
*/

#include <iostream>

using namespace std;

int main()
{
    float vencimento,prestacao;
    cout << "PROGRAMA ESPRESTIMO\n";
    cout << "Qual o seu vencimento?--> ";
    scanf("%f",&vencimento) ;
    cout << "Quanto é a sua prestação?-->";
    scanf ("%f",&prestacao);
    if (prestacao>= (vencimento*0.25))
    {
        printf ("25 por cento do seu vencimento = %.2f €, prestação NÃO CONCEDIDA\n", (vencimento*.25));
    }
    else
    {
        printf ("25 por cento do seu vencimento = %.2f €, prestação CONCEDIDA\n", (vencimento*.25));
    }
   
    system ("pause");
    return 0;
}