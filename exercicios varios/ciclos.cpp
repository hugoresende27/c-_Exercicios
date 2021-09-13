#include <iostream>
//#include <locale.h>
//#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char** argv)
{
	float n1,n2,res;
	int n3,fat;
	char op,saida;
	setlocale(LC_ALL, "Portuguese");
		cout <<"Calculadora Resende"<<endl;


do
{
	


		cout << "Qual a operação? | + | - | X | / | F(atorial)"<<endl;
		cin >> op;
			if ((op == 'f')||(op=='F'))
			{
				cout<<"Insira 1 valor:: "<<endl;
				cin >> n3;
				
					for (int i=1,fat =1; i < n3 ;i++)
			  	  	  {	
						fat = fat * (i+1);
 	 	 	  	  	  }
						cout << "Resultado é " <<fat<<endl;
						
			
			}
 	 	 	 else
				{
					
				
		cout <<"Primeiro valor:: ";
		cin >> n1;	
		cout << "Segundo valor:: ";
		cin >> n2;
		
		switch(op)
		{
		case '+':
			res = n1 + n2;
			cout << "Resultado é " <<res<<endl;
			break;
		case '-':
			res = n1 - n2;
			cout << "Resultado é "<<res<<endl;
			break;
		case 'x':
			res = n1 * n2;
			cout << "Resultado é "<<res<<endl;
			break;
		case 'X':
			res = n1 * n2;
			cout << "Resultado é "<<res<<endl;
			break;
		case '/':
			if (n2 !=0)
			{
				res = n1 / n2;
				cout << "Resultado é "<<res<<endl;
			}
			else
			{
				cout << "\n\nNão se pode dividir por zero!!!\n\n"<<endl;
			}
			break;
	
			
		default:
			cout <<"Operação inválida"<<endl;
			break;
		}
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
