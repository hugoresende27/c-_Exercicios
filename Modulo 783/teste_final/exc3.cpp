/*
Crie um programa que receba um nome de uma pessoa, se é casado ou não e o seu 
vencimento, sendo que ao seu vencimento deverá ser descontado o valor de IRS de acordo 
com o seguinte: Salário >= 1000€ casado -> 5%, não casado 10%. Salário < 1000€ e 
casado 0% e não casado 3%. Imprima o vencimento bruto e líquido e a taxa aplicada
*/
#include <iostream>	
#include <iomanip>			
using namespace std;


int main()								
{
    string nome;

    float salario_liq=0, salario_bruto,taxa;
    char casado;
    cout << "Qual o nome? --> ";
    cin >> nome;
    cout << "É casado?(s/n) --> ";
    cin >> casado;
    casado = tolower(casado);
    if ((casado == 's') || (casado =='n'))
    {
	    cout << "Salário ? --> ";
	    cin >> salario_bruto;
	    if (salario_bruto >= 1000)
	    {
	        if (casado=='s')
	        {
	            taxa = 0.05;
	        }
	        else if (casado == 'n')
	        {
	            taxa = 0.10;
	        }
	         
	    }
	    if (salario_bruto < 1000)
	    {
	        if (casado=='s')
	        {
	            taxa = 0.00;
	        }
	        else if (casado == 'n')
	        {
	            taxa = 0.03;
	        }
	         
	    }
	   
	    salario_liq = salario_bruto - (salario_bruto * taxa);
	    cout << "O trabalhador "<<nome<<"\n\tsalario bruto::"<<salario_bruto<<" Euros\n\tsalario liquido::"<<  setprecision(2)<<fixed<<salario_liq<<" Euros\n\tTaxa::"<<taxa<<"%"<<endl;

    }
    else
    {
        cout << "s para Sim n para Não\n";
        exit (0);
    };
  
    system("pause");				
	return 0;	
}
