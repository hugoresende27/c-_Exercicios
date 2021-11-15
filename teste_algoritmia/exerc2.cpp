#include <iostream>	
		
using namespace std;

string nomes[3];
int qtd[3];
float precoMao[3],precoMadeira[3];
int op;
bool dados=false;

int menu();
void inserir();
void calcOrca();

int main()								
{
if (dados==false);
{
    inserir();
} 
else
{
    do
    {
        switch (menu())
        {
        case 1:
            inserir();
            break;
        
        case 2:
            calcOrca();
            break;
        
        case 3:
            inserir();
            break;
        
        case 4:
            inserir();
            break;
        case 5:
            exit(1);
            break;
        
        default:
            break;
        }
    } while (op !=5 );

}

    system("pause");				
	return 0;	
}

int menu()
{
    cout << "********* MENU ************************\n";
    cout << "*** 1.Inserir Dados *******************\n";
    cout << "*** 2.Cálculo de orçamento padrão *****\n";
    cout << "*** 3.Orçamento mais barato ***********\n";
    cout << "*** 4.Cálculo de orçamento person *****\n";
    cout << "*** 5.Sair *****\n";
    cout << "******************* OPÇÂO --> ";
    cin >> op;
    return op;
}

void inserir()
{
    dados = true;
    for (int i=0; i<3;i++)
    {
        cout << "Nome do fornecedor--> ";
        cin >> nomes[i];
        // cout << "Preço da mão de obra--> ";
        // cin >> precoMao[i];
        // cout << "Quantidade madeira (kg)--> ";
        // cin >> qtd[i];
        // cout << "Preço da madeira--> ";
        // cin >> precoMadeira[i];
    }
}

void calcOrca()
{
    for (int i=0; i<3; i++)
    {
        cout << nomes[i]<<endl;
    }
}