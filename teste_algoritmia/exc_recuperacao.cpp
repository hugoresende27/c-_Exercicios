
#include <iostream>	
#define ROT 3

using namespace std;


int autocarroApess [ROT];
int autocarroBpess [ROT];
float autocarroAkms[ROT];
float autocarroBkms[ROT];

void inserirDados()
{
    int bus,pass=0;
    do {
    cout << "Qual o autocarro?\n\t1->AUTOCARRO Almada(1)\n\t2->AUTOCARRO Bruxelas(2)\n\tESCOLHA-->";
    cin >> bus;
    }while (bus != 1 || bus != 2);

    switch (bus)
    {
    case 1:
        for (int i=0; i<ROT; i++)
        {
            do {
            cout << "Quantos passageiros[ROTA "<<i<<"]? -->";
            cin >> autocarroApess[i];
            } while (pass<=0 || pass >10);
            cout << "Quantos Kms?-->";
            cin >> autocarroAkms[i];
        }
        break;
    case 2:
        for (int i=0; i<ROT; i++)
        {
            do {
            cout << "Quantos passageiros[ROTA "<<i<<"]? -->";
            cin >> autocarroBpess[i];
            } while (pass<=0 || pass >10);
            cout << "Quantos Kms?-->";
            cin >> autocarroBkms[i];
        }
        break;
    }
}

void menu() {
    cout << "***** PROGRAMA AUTOCARROS *****\n";
    cout << "*****         MENU        *****\n";
    cout << "***  OPCAO 1: MEDIA PESSOAS ***\n";
    cout << "***  OPCAO 2: TOTAL KMS     ***\n";
    cout << "***  OPCAO 2: ROTAS/PASS    ***\n";
    cout << "***  OPCAO 3: LUCRO         ***\n";
    cout << "***  OPCAO 4: SAIR         ****\n";
    cout << "*******************************\n";
    cout << "OPÇÃO --> ";
}

// void mediaPessoas(){
//     float media=0;
//     int soma=0;
//     for (int i=0; i<ROT; i++)
//     {
//         soma+=aut
//     }
// }

void P_km(){
    
}

int main()								
{
    int op;
    inserirDados();
    menu();
    cin >>(op);
    switch (op)
    {
    case 1:
        //mediaPessoas();
        break;
    case 2:
        P_km();
        break;
    case 4:
        cout << "Encerrando...";
        exit(1);
        break;
    
    default:
        break;
    }
    system("pause");				
	return 0;	
}