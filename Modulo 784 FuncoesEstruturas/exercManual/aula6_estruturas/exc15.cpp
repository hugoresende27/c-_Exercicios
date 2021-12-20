/*
Crie um programa com uma estrutura para simular uma agenda de contactos telefónicos, com até 100 registros. Nessa agenda deve constar o nome, sobrenome, número de telefone, e e-mail. O programa deverá fazer a leitura e, após isso, mostrar os dados no ecrã.
*/
#include <iostream>	
#include <string.h>
#include <math.h>		
#define TAM 3
using namespace std;

struct registo{
    char nome[20];
    char sobrenome[20];
    int tel;
    char email[20];
};

int main()								
{
    registo agenda[TAM];
    for (int i=0; i<TAM; i++){
        cout << "Nome:: ";
        scanf("%s", &agenda[i].nome);
        cout << "Sobrenome:: ";
        scanf("%s", &agenda[i].sobrenome);
        cout << "Telefone:: ";
        scanf("%d", &agenda[i].tel);
        cout << "Email:: ";
        scanf("%s", &agenda[i].email);
    }

    cout << "\n********AGENDA**********";
    cout << "\nNome | Sobrenome | telefone | email\n";

    for (int i=0; i<TAM; i++){
        printf ("%s %s %d %s\n", agenda[i].nome,
                               agenda[i].sobrenome,
                               agenda[i].tel,
                               agenda[i].email);
    }
    cout << endl;
    system("pause");				
	return 0;	
}