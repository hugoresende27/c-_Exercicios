#include <iostream>
//#include <locale.h>
//#include <stdio.h>
#include <stdlib.h>

using namespace std;

bool par (int num)
{
	if (num % 2 == 0)
		return true;
	  return false;
}

int main(int argc, char** argv)
{
	float n1,n2,res;
	char op,saida;
	int n;
    unsigned long long factorial = 1;
	setlocale(LC_ALL, "Portuguese");
		cout <<"Calculadora Resende"<<endl;


do
{
		cout << "Qual a operação? | + | - | X | / | F(atorial) | P(ar ou ímpar)"<<endl;
		cin >> op;
	  /* 	cout <<"Primeiro valor:: ";
		cin >> n1;	
		cout << "Segundo valor:: ";
		cin >> n2;*/
		
		switch(op)
		{
		case '+':
			cout <<"Primeiro valor:: ";
			cin >> n1;	
			cout << "Segundo valor:: ";
			cin >> n2;
			res = n1 + n2;
			cout << "Resultado é " <<res<<endl;
			break;
		case '-':
			cout <<"Primeiro valor:: ";
			cin >> n1;	
			cout << "Segundo valor:: ";
			cin >> n2;
			res = n1 - n2;
			cout << "Resultado é "<<res<<endl;
			break;
		case 'X':
		case 'x':
			cout <<"Primeiro valor:: ";
			cin >> n1;	
			cout << "Segundo valor:: ";
			cin >> n2;
			res = n1 * n2;
			cout << "Resultado é "<<res<<endl;
			break;
		case '/':
			if (n2 !=0)
			{
				cout <<"Primeiro valor:: ";
				cin >> n1;	
				cout << "Segundo valor:: ";
				cin >> n2;
				res = n1 / n2;
				cout << "Resultado é "<<res<<endl;
			}
			else
			{
				cout << "\n\nNão se pode dividir por zero!!!\n\n"<<endl;
			}
			break;
		case 'F':
		case 'f':
			cout << "Introduza um número inteiro positivo: ";
   	   	    cin >> n;

    			if (n < 0)
				{
					   	    cout << "ERRO, factoriais negativos não existem!! ";
				}
						   else
						   {
						   		for(int i = 1; i <=n; ++i) 
									{
            							factorial *= i;
        							}
						   }
        	cout << "Factorial de " << n << " = " << factorial<<endl;   
        	break;
        case 'P':
	    case 'p':
	    	cout<<"Introduza um número: ";
	    	cin >> n ;
	    	if (par(n))
				{
					cout<<"O numero "<< n <<" é par"<<endl;
				}
			else 
				{
					cout<<"O numero "<< n <<" é ímpar"<<endl;
				}
           break;
			
		default:
			cout <<"Operação inválida"<<endl;
			break;
					
		}	
	cout <<"Sair da calculadora? (S/N)"<<endl;
	cin >> saida;
		if ((saida =='S') || (saida == 's'))
				{
					cout <<"Adeus!"<<endl;
					system ("pause");
				}
 
	
}
	while ((saida != 's') && saida != 'S');
				

	return 0;
	system ("pause");

 
}
