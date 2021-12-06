
#include <iostream>	
#define ROT 3

using namespace std;


//int bus [6][2];
                //    BUS A             |      BUS B   
               //ROTA 1  ROTA 2  ROTA 3  ROTA 1  ROTA 2 ROTA 3 
int bus [6][2]={{50,10},{10,20},{1,30},{60,15},{20,25},{3,35}};



void menu() {
    cout << "\n\n***** PROGRAMA AUTOCARROS *****\n";
    cout << "*******************************\n";
    cout << "***  OPCAO 1: MEDIA PESSOAS ***\n";
    cout << "***  OPCAO 2: TOTAL KMS     ***\n";
    cout << "***  OPCAO 3: TOTAL PESS    ***\n";
    cout << "***  OPCAO 4: LUCRO         ***\n";
    cout << "***  OPCAO 5: SAIR         ****\n";
    cout << "*******************************\n";
    cout << "OPÇÃO --> ";
}

/*
   // BUS A
       // 1a   ppl  km
       // 1b   ppl  km
       // 1c   ppl  km
       
       // BUS B
       // 2a   ppl  km
       // 2b   ppl  km
       // 2c   ppl  km
*/

void f_pessoas(){
    int rota,totalPessoas=0;
    cout << "Qual a rota? (A=1 B=2 C=3)? --> ";
    cin >>rota;
    totalPessoas += bus[rota-1][0] + bus[rota+2][0];
    cout << "TOTAL PESSOAS :: "<<totalPessoas<<endl;
}

void mediaPessoas(){
    int pessR1=0,pessR2=0,pessR3=0;
    int c1=0,c2=0,c3=0;
    for (int i=0; i<6;i++){
        if ((i==0) || (i==3)){
            pessR1+=bus[i][0];
            c1++;
        }
        else if ((i==1) || (i==4)){
            pessR2+=bus[i][0];
            c2++;
        }
        else if ((i==2) || (i==5)){
            pessR3+=bus[i][0];
            c3++;
        }
    }
    //cout <<"TESTE"<<pessR1<<".."<<pessR2<<".."<<pessR3<<endl;
    cout << "MEDIA DE PESSOAS POR ROTA\n";
    cout << "ROTA 1 | Media = "<<pessR1/c1<<endl;
    cout << "ROTA 2 | Media = "<<pessR2/c2<<endl;
    cout << "ROTA 3 | Media = "<<pessR3/c3<<endl;
}

void P_km(){
    int totalKmA=0,totalKmB=0;
    for (int i=0; i<3;i++){
        totalKmA += bus[1][i];
    }
    for (int i=3; i<6;i++){
        totalKmB += bus[1][i];
    }
    cout << "TOTAL KM's Bus A --> "<<totalKmA<<" km"<<endl;
    cout << "TOTAL KM's Bus B --> "<<totalKmB<<" km"<<endl;
    cout << "TOTAL KM's --> "<<totalKmA + totalKmB<<" km"<<endl;
}

void f_lucro(){
    int lucroA=0,lucroB=0,lucroC=0;
    for (int i=0; i<6; i++){
        if(i==0 || i==3){
            lucroA = bus[i][0] * 3;
        }
        else if(i==1 || i==4){
            lucroB = bus[i][0] * 2;
        }
        else if(i==2 || i==5){
            lucroC = bus[i][0] * 1;
        }
    }
    cout << "LUCRO A-->"<<lucroA<<" €"<<endl;
    cout << "LUCRO B-->"<<lucroB<<" €"<<endl;
    cout << "LUCRO C-->"<<lucroC<<" €"<<endl;
}

int main()								
{
    int op,b,r,p,km;
    int begin=1;
    char sair = 'n';
    if (begin == 0){
        while (sair == 'n'){
            cout << "Bus 1 = A ou bus 2 = B--> ";
            cin >> b;
            cout << "Rota 1 = A ou Rota 2 = B ou Rota 3 = C --> ";
            cin >> r;
            cout << "Pessoas--> ";
            cin >> p;
            cout << "Km--> ";
            cin>> km;
            if (b==1) b=(r-1);
            else b = r+2;

            bus[b][0] = p;
            bus[b][1] = km;
            cout << "Terminar? (s/n)? ";
            cin>>sair;
        }
        begin=1;
    }

    //MOSTRAR DADOS
    cout << "\nBUS --  ROTA\tPESS|KM's\n";
    for (int i=0; i<6;i++){
        if (i<3) cout <<"BUS A - ROTA "<< i+1 <<" -> "<< bus[i][0]<<"|"<<bus[i][1]<<endl;
        else cout <<"BUS B - ROTA "<< i-2 <<" -> "<< bus[i][0]<<"|"<<bus[i][1]<<endl;
    }
    

do{
    menu();
    cin >>(op);
    switch (op)
    {
    case 1:
        mediaPessoas();
        break;
    case 2:
        P_km();
        break;
    case 3:
        f_pessoas();
        break;
    case 4:
        f_lucro();
        break;
    case 5:
        cout << "Encerrando...";
        exit(1);
        break;
    
    default:
        break;
    }
}while (true);
    system("pause");				
	return 0;	
}