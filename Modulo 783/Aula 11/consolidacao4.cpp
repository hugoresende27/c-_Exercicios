/*
Faça um programa que receba a idade e o estado civil (C - casado, S - solteiro, V - viúvo, e D - Divorciado) de várias pessoas. Calcule e imprima:
a quantidade de pessoas casadas;
a quantidade de pessoas solteiras;
a média das idades das pessoas viúvas;
a percentagem de pessoas divorciadas ou separadas dentre todas as pessoas analisadas.
Obs.: Para encerrar a entrada de dados, insira um número menor que zero para a idade.
*/
#include <iostream>			
using namespace std;

int main()								
{
    int idade;
    int casadas=0,solteiras=0,viuvas=0,divorciadas=0;//pessoas casadas, solteiras, viuvas e divorciadas
    int idadeViuvas=0,totalPessoas=0;//soma total das idades das pessoas viuvas e o total de pessoas registadas
    float mediaViuvas=0,singles=0;//singles = % pessoas divorciadas ou separadas dentre todas as pessoas analisadas.
    char estado;
    cout << "**** PROGRAMA ESTADO CIVIL ****\n";
do
{
    cout << "IDADE (0 para sair):: ";
    cin >> idade;
    if (idade == 0) break;
    cout << "ESTADO CIVIL\n\t [C]asado / [S]solteiro / [V]iuvo / [D]ivorciado]:: ";
    cin>>estado;
    estado = toupper(estado);
    totalPessoas++;
    switch (estado)
    {
    case 'C':
        casadas++;
        break;
    case 'S':
        solteiras++;
        break;
    case 'V':
        viuvas++;
        idadeViuvas += idade;
        break;
    case 'D':
        divorciadas++;
        break;
    
    default:
        break;
    }
}while(idade!=0);

//singles = (divorciadas+solteiras);
mediaViuvas = idadeViuvas / viuvas;
    cout << "**** LISTA RESULTADOS ****\n";
    cout << "Existem "<<casadas<<" pessoas casadas\n";
    cout << "Existem "<<solteiras<<" pessoas solteiras\n";
    printf ("A media de idades do total de %d pessoas viuvas é de %.1f \n", viuvas,mediaViuvas);
    //printf ("divorciadas ou separadas %d --> %f%\n",(divorciadas+solteiras), singles);
    cout << "Encerrando...\n";
    system("pause");				
	return 0;	
}