/*
Pretende-se saber qual o valor a receber de sub. de alimentação (4.77/dia), para o mês de Janeiro. 
Insira qual o mes de referência (número de ordem do mês no ano) e os dias que foram trabalhados. 
Calcule o valor a receber, imprimindo o mês de referência.
*/
#include <iostream>	
#include <string.h>
#include <math.h>		
using namespace std;

enum meses {
    janeiro,fevereiro,abril,maio,junho,julho,agosto,setembro,outubro,novembro,dezembro
};

int main()								
{
    meses mes;
    int dias;
    float total;

    mes=janeiro;
    
    cout << "Quantos dias trabalhou? --> ";
    cin >> dias;
    total = dias * 4.77;

    switch (mes)
    {
    case 0:
        cout<< "Mes de JANEIRO processado\nSALARIO:: "<<total<<"€"<<endl;
        break;
    case 1:
        cout<< "Mes de FEVEREIRO processado\nSALARIO:: "<<total<<"€"<<endl;
        break;
    case 2:
        cout<< "Mes de MARÇO processado\nSALARIO:: "<<total<<"€"<<endl;
        break;
    case 3:
        cout<< "Mes de ABRIL processado\nSALARIO:: "<<total<<"€"<<endl;
        break;
    case 4:
        cout<< "Mes de MAIO processado\nSALARIO:: "<<total<<"€"<<endl;
        break;
    case 5:
        cout<< "Mes de JUNHO processado\nSALARIO:: "<<total<<"€"<<endl;
        break;
    case 6:
        cout<< "Mes de JULHO processado\nSALARIO:: "<<total<<"€"<<endl;
        break;
    case 7:
        cout<< "Mes de AGOSTO processado\nSALARIO:: "<<total<<"€"<<endl;
        break;
    case 8:
        cout<< "Mes de SETEMBRO processado\nSALARIO:: "<<total<<"€"<<endl;
        break;
    case 9:
        cout<< "Mes de OUTUBRO processado\nSALARIO:: "<<total<<"€"<<endl;
        break;
    case 10:
        cout<< "Mes de NOVEMBRO processado\nSALARIO:: "<<total<<"€"<<endl;
        break;
    case 11:
        cout<< "Mes de DEZEMBRO processado\nSALARIO:: "<<total<<"€"<<endl;
        break;
   
    default:
        break;
    }
    cout << endl;
    system("pause");				
	return 0;	
}