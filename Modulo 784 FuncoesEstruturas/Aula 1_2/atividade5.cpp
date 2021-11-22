/*
.Utilizando funções, crie uma “máquina de calcular” que efetue as 4 operações básicas recorrendo a funções. Utilize uma estrutura “switch…case”, que através da opção selecionada realize a respetiva operação.
*/
#include <iostream>	
#include <iomanip> //para manipular o input
		
using namespace std;
char op;
float num1,num2;

char menu(){
  
    cout << "**** Programa Calculadora ****\n";
    cout << "**** [+]-> SOMAR          ****\n";
    cout << "**** [-]-> SUBTRAIR       ****\n";
    cout << "**** [/]-> DIVIDIR        ****\n";
    cout << "**** [X]-> MULTIPLICAR    ****\n";
    cout << "**** [S]-> SAIR           ****\n";
    cout << "******************************\n";
    cout << "**** OPÇÃO--> ";
    cin >> op;
    op = toupper(op);
    if(op == 'S') 
    {
        cout <<"Encerrando...\n";
        exit(1);
    }
    else {
        cout << "PROGRAMA CALCULADORA\nPRIMEIRO VALOR -->";
        cin >> num1;
        cout << "SEGUNDO VALOR -->";
        cin >> num2;
        return op;
    }

}

float soma(float a,float b)
{
    return a+b;  
}
float sub(float a,float b)
{
    return a-b;  
}
float mult(float a,float b)
{
    return a*b;  
}
float div(float a,float b)
{
    return a/b;  
}


int main()								
{
   
do 
{
    menu();
    switch (op)
    {
    case '+':
        cout << "\n\tA soma entre "<<num1<<" e "<<num2<< " vai ser "<<setprecision(2)<<fixed<<soma(num1,num2)<<endl;
        break;
    case '-':
        cout << "\n\tA subtração entre "<<num1<<" e "<<num2<< " vai ser "<<setprecision(2)<<fixed<<sub(num1,num2)<<endl;
        break;
    case 'X':
        cout << "\n\tA multiplicação entre "<<num1<<" e "<<num2<< " vai ser "<<setprecision(2)<<fixed<<mult(num1,num2)<<endl;
        break;
    case '/':
        cout << "\n\tA divisão entre "<<num1<<" e "<<num2<< " vai ser "<<setprecision(2)<<fixed<<div(num1,num2)<<endl;
        break;
    }

}while (true);
    system("pause");				
	return 0;	
}