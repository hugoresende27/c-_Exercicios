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

    float salario_liq=0, venc_bruto,taxa;
    char casado;
    cout << "Qual o nome? --> ";
    cin >> nome;
    cout << "É casado?(s/n) --> ";
    cin >> casado;
    casado = tolower(casado);
	cout << "Salário ? --> ";
	cin >> venc_bruto;
    if (casado == 's' && venc_bruto >= 1000)
    {
		salario_liq = salario_liq -( venc_bruto*0.05);
	}
    if (casado == 's' && venc_bruto < 1000)
    {
		salario_liq = salario_liq -( venc_bruto*0.00);
	}
    if (casado == 'n' && venc_bruto >= 1000)
    {
		salario_liq = salario_liq -( venc_bruto*0.10);
	}
    if (casado == 'n' && venc_bruto < 1000)
    {
		salario_liq = salario_liq -( venc_bruto*0.03);
	}
	cout << 
	   
	   
  
    system("pause");				
	return 0;	
}
