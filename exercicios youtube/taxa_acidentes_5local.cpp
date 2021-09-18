#include <iostream>
#include <cstdlib>
#include <string>
#include <locale>

using namespace std;

int numAcidente(string);				//prototipos das funcoes
void menosA(int,int,int,int,int);

int main ()
{
	
	setlocale (LC_ALL,"Portuguese");
	double figueira,porto,coimbra,lisboa,faro;		//var para guardar valores dos acidentes em cada cidade
	
	for (int i=0; i<5; i++)							//loop para percorrer as 5 cidades
	{
		switch (i)									//recurso do switch, em cada caso chama a funcao numAcidente com o parametro do nome...
		{											//...alterado, recebe na var com o nome da cidade os valores dos acidentes de cada cidade
			case 0:
				figueira=numAcidente("Figueira da Foz");
				break;
			case 1:
				porto=numAcidente("Porto");
				break;
			case 2:
				coimbra=numAcidente("Coimbra");
				break;
			case 3:
				lisboa=numAcidente("Lisboa");
				break;
			default:
				faro=numAcidente("Faro");
				break;		
		}
	}
	
	menosA(figueira,porto,coimbra,lisboa,faro);		//usar a funcao void, menosA parametros nao precisao de tipo antes

	system("pause");
	return 0;
}

int numAcidente(string cidade)
{
	int acidente=0;
	cout << "Quantos acidentes na cidade de "<<cidade<<" ?--> ";
	cin>>acidente;
	while (acidente<0)
	{
		cout << "(Apenas numeros positivos)--Quantos acidentes na cidade de "<<cidade<<" ?--> ";
		cin>>acidente;
	}
	return acidente;
	
}

void menosA (int fig, int por, int coi, int lis, int far )	//funcao void, sem retorno, 5 parametros tipo int, valor de 
{																			//acidentes de cada cidade
	int menor=0;
	string cid="";
	
	if (fig<por && fig<coi && fig<lis && fig<far )
	{
		menor=fig;
		cid="Figueira da Foz";
	}
	else if (por<fig && por<coi && por<lis && por < far )
	{
		menor=por;
		cid="Porto";
	}
	else if (coi<fig && coi<por && coi<lis && coi < far )
	{
		menor=coi;
		cid="Coimbra";
	}
	else if (lis<fig && lis<por && lis<coi && lis < far )
	{
		menor=lis;
		cid="Lisboa";
	}
	else 
	{
		menor=far;
		cid="Faro";
	}
	cout<<"A cidade com menos acidentes foi a cidade de "<<cid<<" com o total de "<<menor<<" acidentes\n\n";
}


