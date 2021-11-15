#include <iostream>	
#include <string.h>
#include <iomanip>
using namespace std;

string nomes[3];

int op;
bool dados=false;
float precoMadeira[3],precoMao[3];

void menu();
void inserir();
float orcamento();
void p_BARATO();
void p_pessoal();

int main()								
{
if (dados==false)
{
    inserir();
    menu();
} 
else
{
    menu();
}

    system("pause");				
	return 0;	
}

void menu()
{

    cout << "********* MENU ****************************\n";
    cout << "*** 1.Inserir Dados ***********************\n";
    cout << "*** 2.Cálculo de orçamento padrão  ********\n";
    cout << "*** 3.Orçamento mais barato ***************\n";
    cout << "*** 4.Cálculo de orçamento person *********\n";
    cout << "*** 5.Sair ********************************\n";
    cout << "************************** OPÇÂO --> ";
    cin >> op;

    switch (op)
    {
        case 1:
            inserir();
            break;
      
        case 2:
            printf("Vai custar %.2f euros \n\n", orcamento()) ;
            break;
        
        case 3:
            p_BARATO();
            break;
        
        case 4:
            p_pessoal();
            break;
        case 5:
            exit(1);
            break;
        
        default:
            cout << "OPCAO INVÁLIDA... \n";
            break;

    } 
   

}

void inserir()
{
    dados = true;
    for (int i=0; i<3;i++)
    {
        cout << "Nome do fornecedor--> ";
        cin >> nomes[i];
        cout << "Preço da mão de obra--> ";
        cin >> precoMao[i];
        cout << "Preço da madeira--> ";
        cin >> precoMadeira[i];
    }
}

float orcamento()
{
    int escolha;
    float orca,qtd;
    for (int i=0; i<3; i++)
    {
        cout <<"Fornecedor " <<i+1<<"--> "<<nomes[i]<<endl;
    }
    cout << "Escolha Fornecedor (1/2/3)--> ";
    cin >> escolha;
    cout << "Quantidade madeira (kg)--> ";
    cin >> qtd;
    orca = (qtd * (1.15*precoMadeira[escolha-1]))*(1.1*precoMao[escolha-1]);
    return orca;
}

void p_BARATO()
{
    float maisBarato[3],barato;
    string fornecedorMaisBarato;
    int qtd;
    cout << "Quantidade madeira (kg)--> ";
    cin >> qtd;

    for (int i=0; i<3;i++)
    {
        maisBarato[i] = (qtd * (1.15*precoMadeira[i]))*(1.1*precoMao[i]);
    }
    barato = maisBarato[0];
    for (int i=0; i<3;i++)
    {
        cout << maisBarato[i]<<endl;
        if (maisBarato[i] < barato) 
        {
            barato = maisBarato[i];
            fornecedorMaisBarato = nomes[i];
            //strcpy(fornecedorMaisBarato,nomes[i]);
        }
    }
    cout << "O mais barato é o "<< fornecedorMaisBarato<<" com o preço de " <<setprecision(2)<<barato<<" euros"<<endl;
}

void p_pessoal()
{
    float precosMad[3],precosMao[3],orcamentos[3];
    int qtd;
    cout << "Quantidade madeira (kg)--> ";
    cin >> qtd;
    for (int i=0; i<3;i++)
    {
        precosMad[i] = (qtd * (1.15*precoMadeira[i]));
        precosMao[i] = (1.1*precoMao[i]);
        orcamentos[i] = precosMad[i] * precosMao[i];
    }
    cout << "Fornecedor    Preços Madeira   Preços Mão de Obra\n";
    for (int i=0; i<3;i++)
    {
        cout<< nomes[i]<< "  \t\t" << precosMad[i] <<"  \t\t"<< precosMao[i] <<"  \t"<<endl;
    }
}
