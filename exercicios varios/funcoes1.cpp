#include <iostream>
#include <cstdlib>
using namespace std;

void Parabens();//prototipo da funcao, para poder chamar uma vez q est� em baixo
void Parabens (string,int&);
int outrosParabens(string);

int main()
{
	setlocale (LC_ALL,"Portuguese");
	int my_idade;
	outrosParabens("Toto");
	Parabens();	
	Parabens();	
	Parabens();	
	cout <<"Idade:: "<<endl;
	cin>> my_idade;
	cout <<"1.antes da funcao idade tem "<<my_idade<<endl;
	Parabens("Hugo",my_idade);
	cout <<"2.depois da funcao tem "<< my_idade<<endl;
	
	
}

void Parabens()
{
	cout<<"Parab�ns a voc�!"<<endl;
}

void Parabens (string nome, int& idade)
{
	cout <<"Parab�ns a "<<nome<<" pelos seus "<<idade<<endl;
	idade+=10;
}

int outrosParabens(string nome)  //funcao com retorno idade
{
	int idade;
	cout << "idade-->";
	cin >> idade;
	return idade;

}
