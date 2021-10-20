/*Programa que verifica, após o utilizador introduzir um número de 3 digitos se os 2 primeiros digitos são par ou impar*/

#include <iostream>	
#include <stdlib.h>
		
using namespace std;

string parOuImpar(int v)
{
    if (v % 2 == 0)
    {

        return " --> é PAR!";
    }
    else
    {
        return " --> é IMPAR!";
    }
}

void Programa1 ()
{
    int num;
    int dig1 , dig2 , dig3 ;
    cout << "Introduza um número de 3 digitos -->";
    cin >> num;
    while (num<99 || num > 999)
    {
        cout << "ERRO! Número com 3 digitos! --> ";
        cin >> num;
    }
   // dois_pri=num/10;        //obter 2 primeiro digitos de 3
    dig1 = num/100;            //123 / 100 = 1,23
    dig2 = (num%100)/10 ;       //123 % 100 = 1,23 = 23 (resto da divisão) / 10 = 2
    dig3 = num % 10;           //123 % 100 = 12,3 = 3 (resto da divisão)
    
   
    cout << "Primeiro digito:: "<<dig1 << parOuImpar(dig1)<< endl;
    cout << "Segundo digito:: "<<dig2<< parOuImpar(dig2)<< endl;
    cout << "Terceiro digito:: "<<dig3<< parOuImpar(dig3)<< endl;
}

void Programa2 ()
{
    int num;

    cout << "Introduza um número -->";
    scanf("%2d", &num);
    if ((num % 2))
    {
        cout << "Os primeiros 2 números são impares ";//odd
    }
    else
    {
        cout << "São pares";//even
    }
}
int main()								
{
   int op;

do
{
    cout << "*************MENU************\n";
    cout << "******* 1.PROGRAMA A ********\n";
    cout << "******* 2.PROGRAMA B ********\n";
    cout << "******* 3.SAIR       ********\n";
    cout << "*****************************\n";
    cout<<"\tESCOLHA --> ";
    cin>>op;
        switch (op)
        {
        case 1:
            Programa1();
            break;
        case 2:
            Programa2();
            break;
        case 3:
            exit(0);
            break;
        default:
            cout << "Opcão inválida...";
            break;
        }
}while (op<0 || op>3);
 


    cout << endl;
    system("pause");				
	return 0;	
}