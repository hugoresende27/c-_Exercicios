#include <iostream>	
#include <stdlib.h>

using namespace std;


int main()								
{
    int op;
    float lado,base;

    printf (" ******* MENU AREA **********\n");
    printf (" *** 1: QUADRADO ************\n");
    printf (" *** 2: TRIANGULO  **********\n");
    printf (" *** 3: CIRCULO  ************\n");
    printf (" *** outro para sair ********\n");

    cout << "Qual a operação? -->";
    cin >> op;
    switch (op)
    {
        case 1:
            cout << "OPCAO 1:: QUADRADO"<<endl;
            cout << "Lado--> ";
            cin>>lado;
            cout << "A área do quadrado de lado "<<lado<< " é "<<lado*lado<<endl;
            break;
        case 2:
            cout << "OPCAO 2:: TRIANGULO"<<endl;
            cout << "Altura--> ";
            cin >> lado;
            cout<< "Base-->";
            cin >> base;
            cout << "A área do triângulo vai se "<< base*lado/2<<endl;

            break;
        case 3:
            cout << "OPCAO 3:: CIRCULO"<<endl;
            //pi * r*r
            break;
        default:
            printf ("Opção Inválida\n");
            exit(0);
    }
    system("pause");				
	return 0;	
}