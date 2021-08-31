#include <iostream>
using namespace std;

struct estudantes
{
	string nome;
	float media;
};

int main ()
{
	estudantes Professor;
	Professor.nome = "Hugo";
	
	estudantes primeiro[10];		//array de estudantes, 10
	primeiro[0].nome = "Tomas";		//para chamar, nome do array mais posição []
	primeiro[0].media = 4.0;
	cout << primeiro[0].nome<<primeiro[0].media<<endl;
	cout << Professor.nome;
	
}
