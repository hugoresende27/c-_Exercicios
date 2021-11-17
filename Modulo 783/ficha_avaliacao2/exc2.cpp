/*
Crie um programa que receba nomes e notas de alunos até ser inserida a nota 0 (zero)
e imprima:
a. <nome do aluno> - <nota> - Aprovado – média entre 9,5 e 20;
b. <nome do aluno> - <nota> - Reprovado – média <= 7;
c. <nome do aluno> - <nota> - Exame de recurso – média entre 7,1 e 9,4.
Exemplo: Francisco – 10 - Aprovado
*/
#include <iostream>	
	

using namespace std;


int main()								
{
    int tamanho=0;
    float nota;
    string nomes[20];
    string res[20];
    float notas [20];
    cout << "****** EXERCICIO 2 *********\n";
    
    do
    {
        cout << "Insira o nome do aluno--> ";
        cin >> nomes[tamanho];
        cout << "Qual a nota? (0 para sair) --> ";
        cin >> nota;
        if (nota == 0) break;
        else
        {
            notas[tamanho]=nota;
            if ((nota <= 20) && (nota >= 9.5))
            {
                res[tamanho]="APROVADO";

            }else if ((nota < 9.5) && (nota > 7)) {
                res[tamanho]="EXAME DE RECURSO";

            }else if ((nota <= 7) && (nota > 0)){
                res[tamanho]="REPROVADO";

            } else  {
                cout << "Nota inválida\n";
                res[tamanho]="INVÁLIDO";
            }
            tamanho++;
        }
        
    } while (nota != 0);
    cout << "NOME\tNOTA\tRESULTADO\n";
    for (int i=0; i< tamanho; i++)
    {
        cout << nomes[i]<<"\t"<<notas[i]<<"\t"<<res[i]<<endl;
    }
    
    system("pause");				
	return 0;	
}
