#include <iostream>	
#define ROTAS 3

using namespace std;

int menu();

int auto1[ROTAS];
int auto2[ROTAS];

void inserirDados()
{
    int pass=0;
    int op,bus;
    do{ 
        cout << "Qual o autocarro?\n\t1->AUTOCARRO (1)\n\t2->AUTOCARRO (2)\n\t3->FINALIZAR (3)\n\tESCOLHA-->";
        cin >> bus;
    }while (bus != 1  && bus != 2 && bus != 3);
    switch (bus)
    {
    case 1:
    for (int i=0; i<ROTAS;i++)
        {
            do {
            cout << "ROTA "<<i<<" Quantos passageiros (1-10)-->";
            cin>>pass;
            } while (pass <=0 || pass >10);
            auto1[i]=pass;
        }
        break;

    case 2:
       for (int i=0; i<ROTAS;i++)
        {
            do {
            cout << "ROTA"<<i<<"Quantos passageiros (1-10)-->";
            cin>>pass;
            } while (pass<=0 || pass >10);
            auto2[i] = pass;
        }
        break;
    default:
        break;
}
}

int menu() {
    int escolha;
    cout << "***** PROGRAMA AUTOCARROS *****\n";
    cout << "*****         MENU        *****\n";
    cout << "***  OP 1: INSERIR + DADOS  ***\n";
    cout << "***  OP 2: MEDIA PESSOAS    ***\n";
    cout << "***  OP 3: TOTAL KMS        ***\n";
    cout << "***  OP 4: ROTAS/PASS       ***\n";
    cout << "***  OP 5: LUCRO           ****\n";
    cout << "***  OP 6: SAIR           *****\n";
    cout << "*******************************\n";
    cout << "OPÇÃO --> ";
    cin>>escolha;
    return escolha;
}

void P_media(){
    float media1=0,media2=0;
    int total1=0,total2=0;
    for (int i=0; i<ROTAS; i++)
    {
        total1 += auto1[i];
        total2 += auto2[i];
    }
    media1= total1 / ROTAS;
    media2= total2 / ROTAS;
    cout << "Autocarro 1, média de passageiros:: "<<media1<<endl;
    cout << "Autocarro 2, média de passageiros:: "<<media2<<endl;

}


int main()								
{
    
    inserirDados();
   

    do {
        switch (menu())
        {
            case 1:
                inserirDados();
                break;
            case 2:
                P_media();
                break;
            case 3:
                //P_km();
                break;
            case 6:
                cout << "Encerrando...";
                exit(1);
                break;
            default:
                break;
        }
    } while (true);

    
    system("pause");				
	return 0;	
}
