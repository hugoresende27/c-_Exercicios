/*
Utilizando 2 funções (idade, doenca), crie um programa que receba a idade de um individuo e retorne se é adulto ou sénior (>=65 anos) e se sofre de alguma doença, sendo que as doenças previstas são (1 – pulmonar, 2 – Cardíaca, 3 – Mental, 4 – metabólica, 5 – Digestiva, 99 – outras) e devolva em que escalão etário se encontra e se é saudável ou sofre de alguma doença crónica (não interessa qual).
*/

#include <iostream>	
		
using namespace std;
//1 senior; 2 adulto; 3 criança
string idade ( int x)
{
    if (x>=65)
    {
        return "Idoso";
    }
    else if (x>=18)
    {
        return "Adulto";
    } 
    else 
    {
        return "Criança";
    }
}

bool doencas (int x)
{
    switch (x)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 99:
        return true;
        break;
    default:
        return false;
        break;
    }

}

int main()								
{
    int ida,doenca;
    char sofre;
    cout << "Programa Idade\nQual a idade --> ";
    cin >> ida;
    cout << "Sofre de alguma doença?\n";
    cout << "1 – pulmonar, 2 – Cardíaca, 3 – Mental, 4 – metabólica, 5 – Digestiva, 99 – outras\n";
    cin >> doenca;
    
    if (doenca) {
        cout << idade(ida)<<" com doença crónica"<<endl;
    }
    else {
        cout << idade(ida)<<" SEM doença crónica"<<endl;
    }
    system("pause");				
	return 0;	
}