/*
6.	Crie um algoritmo que armazene 10 números digitados pelo utilizador em dois vetores: um somente para números pares, e outro somente para números ímpares.
Exiba os valores dos dois vetores no ecrã, em sequência.
Obs.: As posições que não receberem valores exibirão o número zero. 
7.	Modifique o algoritmo anterior para não aceitar a entrada do número zero, e requisitar a digitação de outro número neste caso.
*/
#include <iostream>
using namespace std;

int main()
{
    
    int pares[10]={0};      //comecar os arrays vazios para nao levar lixo 
    int impares[10]={0};
    int valor=0;
   

    for (int i=0;i<10;i++)
    {
        //printf ("Insira valor %d--> " , i+1);
        //scanf ("%d", &valor);
        do 
        {
            printf ("(Não pode ser 0)..Insira valor %d--> " , i+1);
            scanf ("%d", &valor);
        } while (valor==0);
        
        
        if ((valor!=0) && ( valor % 2 == 0))
            pares[i]=valor;
        else
            impares[i]=valor;
    
    }
    cout <<"PARES\n";
    for (int i=0;i<10;i++)
    {
        if (pares[i]!=0)
            printf("| %d",pares[i]);
    }
    cout <<"\nIMPARES\n";
    for (int i=0;i<10;i++)
    {
        if (impares[i]!=0)
            printf("|%d",impares[i]);
    }

    cout << endl;
    system("pause");
    return 0;
}