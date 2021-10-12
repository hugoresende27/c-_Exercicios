#include <iostream>
using namespace std;

class A
{
    public:
    void virtual mostrar()      //void mostrar()        ao ser virtual permite ao apontador usar os metodos das subclasses
    {                           //ao usar virtual posso usar o mesmo apontador para chamar os metodos das sublclasses
        cout << "Classe A\n";
    }
};

class B : public A      //subclasse de classe A
{
    public:
    void mostrar()
    {
        cout << "Classe B\n";
    }
};

class C : public A      //suclasse de classe A
{
    public:
    void mostrar()
    {
        cout << "Classe C\n";
    }
};

int main()
{   
    A *a1= new A();         //criar um apontador a1 da classe A, a apontar para um objeto do tipo classe A
    A *a2= new B();         //criar um apontador a2 da classe A, a apontar para um objeto do tipo classe B
    A *a3= new C();         //criar um apontador a3 da classe A, a apontar para um objeto do tipo classe C

    a1->mostrar();
    a2->mostrar();
    a3->mostrar();      //void mostrar() vai tudo resultar em Classe A porque o apontador é da classe A
                        //void virtual mostrar() resolve, ficando os apontadores a usar o metodo das subclasses

    return 1;
}