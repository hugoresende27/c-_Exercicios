#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

void imprimeRecibo(string,int&);
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int grandTotal=99;
	int outroTotal = 299;
	string nome ="TESTANDO";
	//imprimeRecibo("Hugo Resende @2021", 103);
	//imprimeRecibo ("Zara", 69);
	//imprimeRecibo("Jumbo", 23);
	int x =0;
	do
	{
	
		imprimeRecibo ("Hugo",grandTotal);
		imprimeRecibo (nome,outroTotal);
		x++;
	}while (x<3);
}

void imprimeRecibo (string nomeEmpresa, int& total)
{
	cout<<"Obrigado por usar "<<nomeEmpresa<<endl;
	cout<<"o total é :: "<<total<<" euros"<<endl;
	total+=1;
}
