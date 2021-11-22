#include <iostream>	
#define ROTAS 3
#define PASS 3
using namespace std;

string auto1[ROTAS];
string auto2[ROTAS];



void menu() {
    cout << "***** PROGRAMA AUTOCARROS *****\n";
    cout << "*****         MENU        *****\n";
    cout << "***  OPCAO 1: MEDIA PESSOAS ***\n";
    cout << "***  OPCAO 2: TOTAL KMS     ***\n";
    cout << "***  OPCAO 3: ROTAS/PASS    ***\n";
    cout << "***  OPCAO 4: LUCRO         ***\n";
    cout << "***  OPCAO 5: SAIR         ****\n";
    cout << "*******************************\n";
    cout << "OPÇÃO --> ";
}

void P_media(){
    for (int i=0; i<ROTAS; i++)
    {
        cout << "Autocarro 1|ROTA "<<i+1<<auto1[i]<<endl;
        cout << "Autocarro 2|ROTA "<<i+1<<auto2[i]<<endl;
    }
}


int main()								
{
    int bus,pass=0,op;
    char rota;
    do {
    cout << "Qual o autocarro?\n\t1->AUTOCARRO (1)\n\t2->AUTOCARRO (2)\n\tESCOLHA-->";
    cin >> bus;
    }while (bus != 1 && bus != 2);
    switch (bus)
    {
    case 1:
     do {
        cout << "Quantos passageiros (1-10)-->";
        cin >> pass;
        } while (pass<=0 && pass >10);
    do {
        cout << "ROTA (A/B/C)-->";
        cin >>rota;
        rota = toupper(rota);
        } while (rota!= 'A' && rota!='B' && rota!='C');
        switch (rota)
        {
        case 'A':
            auto1[0]=pass;
            break;
        case 'B':
            auto1[1]=pass;
            break;
        case 'C':
            auto1[2]=pass;
            break;
        }

        break;
    case 2:
     do {
        cout << "Quantos passageiros (1-10)-->";
        cin >> pass;
        } while (pass<=0 || pass >10);
    do {
        cout << "ROTA (A/B/C)-->";
        cin >>rota;
        rota = toupper(rota);
        } while (rota!= 'A' && rota!='B' && rota!='C');
        switch (rota)
        {
        case 'A':
            auto2[0]=pass;
            break;
        case 'B':
            auto2[1]=pass;
            break;
        case 'C':
            auto2[2]=pass;
            break;
        }

        break;
    
    default:
        break;
    }

    menu();
    cin>>op;
    switch (op)
    {
    case 1:
        P_media();
        break;
    case 2:
        //P_km();
        break;
    case 5:
        cout << "Encerrando...";
        exit(1);
        break;
    
    default:
        break;
    }
    system("pause");				
	return 0;	
}