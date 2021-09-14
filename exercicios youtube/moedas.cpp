#include <iostream>
//#include <locale.h>
//#include <windows.h>

//#include <cstdlib>
//#include <string>
//#include <ctime>   //para random class
//#include <iomanip> //para manipular o input

using namespace std;

int main ()
{
    
    setlocale(LC_ALL, "pt_BR"); // also try "pt_BR"
    //setlocale(LC_ALL,"Portuguese");
    int cent5,cent10,cent20,cent50;
    double total=0;

    cout<<"Introduza o nr de moedas de 5 cêntimos: ";
    cin>>cent5;

    cout<<"Introduza o nr de moedas de 10 cêntimos: ";
    cin>>cent10;

    cout<<"Introduza o nr de moedas de 20 cêntimos: ";
    cin>>cent20;

    cout<<"Introduza o nr de moedas de 50 cêntimos: ";
    cin>>cent50;

    total = (cent5*0.05) + (cent10*0.10) + (cent20*0.20) + (cent50*0.50);

    if (total==1)
    {
        cout<<"Parabéns a quantia inserida totaliza 1€";
    }
    else if (total>1)
    {
        cout<<"Errado! A quantia inserida está acima de 1€  total: "<<total<<" €\n";
    }
    else
    {
        cout<<"Errado! A quantia inserida está abaixo de 1€ total: "<<total<<" €\n";
    }
    system("pause");

    return 0;
}