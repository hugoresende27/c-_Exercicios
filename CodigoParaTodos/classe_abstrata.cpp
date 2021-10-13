#include <iostream>					
using namespace std;


//classe Base
class FormaGeometrica
{
    protected:
    int comprimento;
    int altura;

    public:
    //construtor
    FormaGeometrica(int c, int a)
    {
        comprimento=c;
        altura=a;
    }
    //função virtual pura
    virtual void area()=0;
};

//subclasses

class Retangulo: public FormaGeometrica
{
    public:
    Retangulo(int c, int a):FormaGeometrica(c,a){};     //construtor com recurso ao construtor, herança de atributos
        void area() {
            cout << "Area Retangulo: " << comprimento * altura << endl;
        }
    //
};
class Triangulo: public FormaGeometrica
{
    public:
    Triangulo(int c, int a):FormaGeometrica(c,a){};
        void area() {
            cout << "Area Triangulo: " << (comprimento * altura) / 2 << endl;
        }
    //
};

int main()								
{
    //FormaGeometrica f (10,2);     //forma geometrica é uma classe abstracta, não pode instanciar objetos
    Retangulo ret(5,5);
    Triangulo tri(6,3);
    ret.area();
    tri.area();

    system("pause");				
	return 0;	
}