/*
 criar uma classe Produto em C++ que contêm três atributos: Referência, Fornecedor e Preço. É ainda pretendido a criação de duas subclasses a classe Lâmpada com o atributo potencia e a classe Televisor com o atributo tamanho do ecrã. 
*/
#include <iostream>

using namespace std;


class Produto
{
    //atributos
    protected:      //passa de private a protected porque é classe Mãe
    string refe;
    string fornecedor;
    float preco;

    public:
    //construtor
    Produto (string r, string f, float p)
    {
        refe=r;
        fornecedor=f;
        preco=p;
    }
    //metodos
    void  mostrarRefe()                 //poderia ser string mostrarRefe() com return refe;
    {
        cout << "REFERENCIA::" << refe <<endl;
    }
    void mostrarForn()
    {
        cout << "FORNECEDOR::" << fornecedor <<endl;
    }
    void mostrarPreco()
    {
        cout << "PREÇO::" << preco <<endl;
    }
};


class Lampada: public Produto       //public Produto indica q Lampada é uma subclasse da classe Produto
{
    //atributos
    private:
    int potencia;

    public:
    //construtor
    Lampada (string r,string f, float p, int pot) : Produto( r,f,p)     //:Produto (r,f,p) é uma referencia para receber estes parametros da classe mãe Produto (r,f,p)
    {
        potencia=pot;
    }
    //metodos
    void mostrarPotencia()
    {
        cout << "Potencia da lampada:: " << potencia << endl;
    }
};

class Televisao: public Produto       //public Produto indica q Televisao é uma subclasse da classe Produto
{
    //atributos
    private:
    float tamaEcra;

    public:
    //construtor
    Televisao (string r,string f, float p, float tam) : Produto( r,f,p)     //:Produto (r,f,p) é uma referencia para receber estes parametros da classe mãe Produto (r,f,p)
    {
        tamaEcra=tam;
    }
    //metodos
    void mostrarTamanho()
    {
        cout << "Tamanho do Ecrã:: " << tamaEcra << endl;
    }
};
int main()
{
    Lampada l1 ("AA123","Philips",10.50,40);
    Televisao t1 ("BBB666", "Sony", 299.99,44);

    l1.mostrarPotencia();
    t1.mostrarPreco();      //tanto l1 como t1, são objetos q herdam metodos da classe Produtos, logo posso usar 
                            //todos os metodos da classe Produto
    t1.mostrarTamanho();

    return 0;
}