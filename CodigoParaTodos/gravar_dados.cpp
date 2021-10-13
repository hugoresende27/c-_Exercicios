#include <iostream>	
#include <list>
#include <fstream>

using namespace std;

class Aluno 
{
    //atributos
    private:
    string nome;
    int idade;
    float media;
    
    //contrutor que recebe 3 parametros
    public:
    Aluno(string n, int i, float m)
    {
        nome=n;
        idade=i;
        media=m;
    }

    friend ostream & operator << (ostream &saida, Aluno &a)     //sobrecarga do operador << função tem de ser friend para ser possivel aceder aos dados private do aluno
    {
        saida << a.nome << "\n" << a.idade << "\n" << a.media << "\n";
        return saida;
    }
};

int main()								
{
    list <Aluno> lista_alunos;      //instanciar/criar uma lista do tipo Aluno
    Aluno a("Teresa", 31, 15.7);
    Aluno b("José", 25, 10.3);
    Aluno c("Rita", 27, 12.1);
    lista_alunos.push_back(a);      //inserir os objetos na lista com o uso do push_back()
    lista_alunos.push_back(b);
    lista_alunos.push_back(c);

    ofstream escrever("alunos.txt");

    for (list <Aluno>::iterator i= lista_alunos.begin(); i != lista_alunos.end(); i++) //ciclo for com iterador list<Aluno>::iterator
    {
        cout << *i <<endl;      //aqui uso a sobrecarga do operador de saida << mostra os dados na consola
        escrever << *i;         //cria um ficheiro com os dados dos alunos
    }

    system("pause");				
	return 0;	
}