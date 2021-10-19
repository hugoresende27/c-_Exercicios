/*
C++ Programming Challenge 4-2: Roman Numerals Converter
Write a program that asks the user to enter a number within the range of 1 through 10. Use a switch statement to display the Roman numeral version of that number.
Input Validation: Do not accept numbers less than 1 and more than 10.
SYMBOL       VALUE
  I            1
  IV           4
  V            5
  IX           9
  X            10
  XL           40
  L            50
  XC           90
  C            100
  CD           400
  D            500
  CM           900 
  M            1000
*/
#include <iostream>	
#include <vector>
#include<stdlib.h>	
#include <string.h>
using namespace std;
//////////////////////////////////7 SIMBOLOS ROMANOS
char roman[]="IVXLCDM";
int decimal[]={1,5,10,50,100,500,1000};

void decimais(int v)
{
    int tamanho;
    int dec[] ={0,1,4,5,9,10};
    string rom[] = {"0","I","IV","V","IX","X"};
    tamanho = 5;

    while (v>0)
    {
        int div = v/dec[tamanho];
        v = v % dec[tamanho];
        while (div--)
        {
            cout << rom[tamanho];
        }
        tamanho --;
    }
   cout<<endl;
};


 void decimal2(int v)
 {
     switch (v)
     {
        case 0:
            cout << "0";
            break;
        case 1:
            cout << "I";
            break;
        case 2:
            cout << "II";
            break;
        case 3:
            cout << "III";
            break;
        case 4:
            cout << "IV";
            break;
        case 5:
            cout << "V";
            break;
        case 6:
            cout << "VI";
            break;
        case 7:
            cout << "VII";
            break;
        case 8:
            cout << "VIII";
            break;
        case 9:
            cout << "IX";
            break;
        case 10:
            cout << "X";
            break;
        default:
            cout << "número inválido";
            break;
     }
     cout <<endl;

}

void decimais3(int v)
{
    string numRomanos[]={"0","I","II","III","IV","V","VI","VII","VIII","IX","X"};
    if (v >= 1 && v <= 10)
        cout << numRomanos[v]<<endl;
}

int romanos1 (char c )
{
    int valor;
    switch (tolower(c))
    {
        case 'i':
            valor = 1;
            break;

        case 'v':
            valor = 5;
            break;
   
        case 'x':
            valor = 10;
            break;
        default:
            cout<<"Valor inválido\n";
            break;
    }
    return valor;
}


int indexDe(char c)
{
    for (int i = 0; i < 7; i++)
    {
        if(roman[i] == c)
        {
            return i;
        }
    }
    return -1; //NOT FOUND
}

void menu ()
{
    cout << "CONVERSOR NUMEROS ROMANOS E DECIMAIS\n";
    cout << "\t******************************** \n";
    cout << "\t*** [1].DECIMAIS --> ROMANOS ***\n";
    cout << "\t*** [2].ROMANOS --> DECIMAIS ***\n";
    cout << "\t*** [3].SAIR *******************\n";
    cout << "\t********************************--->";
}



int main()								
{

    int valor=0,op=0;
    int n = 0, i, j;
    char rom;
    while (op == 0 || op>3)
    {
        menu();
        cin >> op;
    }
    
    
    switch (op)
    {
    case 1:
    while (valor < 1 || valor >10)
        {
            cout << "Insira um número decimal entre 0 e 10-->";
            cin >>valor;
        }
            decimais(valor);
            decimal2(valor);
            decimais3(valor);
            break;
    case 2:
       
        cout << "Insira um número romano entre I e X-->";
        cin >>rom;
        i = strlen(rom) -1;
        n += decimal[indexDe(rom[i])];
        j = i;
        i--;

        while (i >= 0)
        {
            if (indexDe(rom[i]) >= indexDe(rom[j]))
            {
                n += decimal[indexDe(rom[i])];
            }
            else
            {
                n -= decimal[indexDe(rom[i])];
            }
            i--;
            j--;
        }
        printf ("Numero = %d\n", n);
        cout << rom<< " = " <<romanos1(rom) <<endl;
        break;
    case 3:
        exit(0);
        break;
    default:
        break;
    }

    system("pause");				
	return 0;	
}