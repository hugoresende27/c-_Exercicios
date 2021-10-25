/*
 Escreva um procedimento que receba um número natural e imprima os três primeiros caracteres do dia da semana
correspondente ao número. Por exemplo, 7 corresponde à “SAB”. O procedimento deve mostrar uma mensagem de erro caso
o número recebido não corresponda a um dia da semana. Gere também um algoritmo que utilize esse procedimento,
chamando-o, mas antes lendo um valor para passagem de parâmetro
*/
#include <iostream>	
		
using namespace std;

string dias_semana ( int d)
{
    string dia;
    switch (d)
    {
        case 1:
            dia = "DOM\n";
            break;
        case 2:
            dia = "SEG\n";
            break;
        case 3:
            dia = "TER\n";
            break;
        case 4:
            dia = "QUA\n";
            break;
        case 5:
            dia = "QUI\n";
            break;
        case 6:
            dia = "SEX\n";
            break;
        case 7:
            dia = "SAB\n";
            break;
        default:
            printf ( "ERRO!!");
            break;
    }
    return dia;
}

int main()						
{
    int d;
    string res;
    printf ( "Qual o dia da semana? = (1/2/3/4/5/6/7) ?? --> ");
    scanf ( "%d",&d);
    res = dias_semana(d);
    //printf ("%s",res);
    cout << res << endl;
    

    system("pause");				
	return 0;	
}