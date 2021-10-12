#include <iostream>
using namespace std;

class Aluno 
{
    //atributos private , encaplsulamento
    private:
    int numero;
    string nome;
    string curso;
    float media;

    //Construtor (tem sempre o mesmo nome da classe)
    public:
    Aluno()
    {
        cout << "Foi usado o contrutor por defeito" << endl;
    }
    Aluno (int nr, string n)    //construtor q recebe 2 parametros e atribui os outros 
    {
        numero = nr;
        nome = n;
        curso ="Informática";
        media = 0;
    }
    Aluno (string n)        //construtor q só recebe string n
    {
        numero = 0;
        nome = n;
        curso ="Informática";
        media = 0;
    }
    //destrutor inverso do construtor, destrói os objetos quando o programa termina
    ~Aluno()
    {
        cout << "Destrutor usado" <<endl;
    }

    //metodos public
    void inserir(int num, string nom, string cur, float med)
    {
        numero = num;
        nome = nom;
        curso = cur;
        media = med;
    }

    void mostrar()
    {
        cout << numero << " " << nome << " " << curso  << " " << media <<endl;
    }

};

int main()
{
    Aluno a1,a2,a3;     //construtor por defeito
    Aluno a4(69,"Aline");   //usa o construtor q recebe 2 parametros
    Aluno a5("Hugo");       //usa o construtor q apenas recebe uma var s

    a1.inserir(123,"Hugo","PHP",15.4);
    a2.inserir(999,"Zé","Desing",12.7);
    a3.inserir(256,"Tó","Excel",19.4);
    a1.mostrar();
    a2.mostrar();
    a3.mostrar();
    a4.mostrar();
    a5.mostrar();

}