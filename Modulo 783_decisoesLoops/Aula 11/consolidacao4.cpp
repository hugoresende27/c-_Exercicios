/*
Faça um programa que receba a idade e o estado civil (C - casado, S - solteiro, V - viúvo, e D - Divorciado) de várias pessoas. Calcule e imprima:
a quantidade de pessoas casadas;
a quantidade de pessoas solteiras;
a média das idades das pessoas viúvas;
a percentagem de pessoas divorciadas ou solteiras dentre todas as pessoas analisadas.
Obs.: Para encerrar a entrada de dados, insira um número menor que zero para a idade.
*/
#include <iostream>			
using namespace std;

int main()								
{
    int idade;
    int casadas=0,solteiras=0,viuvas=0,divorciadas=0,singles=0,naoRespondeu=0;//pessoas casadas, solteiras, viuvas e divorciadas
    int idadeViuvas=0;//soma total das idades das pessoas viuvas e o total de pessoas registadas
    float mediaViuvas=0,mediaSingles=0;//mediaSingles = % pessoas divorciadas ou separadas dentre todas as pessoas analisadas.
    float totalPessoas=0;
    char estado;
    cout << "**** PROGRAMA ESTADO CIVIL ****\n";
do
{
    cout << "IDADE (menor do que 0 para sair):: ";
    cin >> idade;
    if (idade < 0) break;
    do
    {
        cout << "ESTADO CIVIL\n [C]asado / [S]solteiro / [V]iuvo / [D]ivorciado]:: ";
        cin>>estado;
    } while (!(isalpha(estado)) );//enquanto nao for letra, alfa 
    
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
        naoRespondeu++;
        break;
    }
}while(idade >= 0);

    
    if (viuvas > 0){
        mediaViuvas = idadeViuvas / viuvas;
    } else{
        mediaViuvas = 0;
    }
    singles = (divorciadas+solteiras);
    if (singles > 0) {
        mediaSingles = singles / totalPessoas * 100; 
    } else {
        mediaSingles = 0;
    }
    
    cout << "**** LISTA RESULTADOS ****\n";
    cout << "Existem "<<casadas<<" pessoas casadas\n";
    cout << "Existem "<<solteiras<<" pessoas solteiras\n";
    
    printf ("A media de idades de %d pessoas viuvas é de %.1f\n", viuvas,mediaViuvas);
    printf ("divorciadas ou separadas %d --> %.2f %\n",singles, mediaSingles);
    cout << "ESTADO INDEFINIDO:: "<<naoRespondeu<<endl;
    cout << "TOTAL PESSOAS REGISTADAS:: "<< totalPessoas<<endl;
    cout << "Encerrando...\n";
    system("pause");				
	return 0;	
}