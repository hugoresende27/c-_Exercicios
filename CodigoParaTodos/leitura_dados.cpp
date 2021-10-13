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
    //contrutor
    Aluno(){};

    friend ostream & operator << (ostream &saida, const Aluno &a)     //sobrecarga do operador << função tem de ser friend para ser possivel aceder aos dados private do aluno
    {
        saida << a.nome << "\n" << a.idade << "\n" << a.media << "\n";
        return saida;
    }
    friend istream & operator >> (istream &in, Aluno &a)        //sobrecarga operador >>
    {
        in >> a.nome;
        in >> a.idade;
        in >> a.media;
        return in;
    }
};

int main()								
{
    list <Aluno> lista_alunos;      //instanciar/criar uma lista do tipo Aluno
    ifstream in ("alunos.txt");     //ler os dados do ficheiro e passar para a lista
    Aluno a;
    while (!in.eof())       //ler a lista 
    {
        in>>a;      //sobrecarga do operador de entrada
            lista_alunos.push_back(a);
    }
    lista_alunos.pop_back();//pop_back() para remover ultimo aluno q guardou repetidademente

    for (list <Aluno>::iterator i= lista_alunos.begin(); i != lista_alunos.end(); i++) //ciclo for com iterador list<Aluno>::iterator
    {
        cout << *i <<endl;      //aqui uso a sobrecarga do operador de saida << mostra os dados na consola
    }

    system("pause");				
	return 0;	
}