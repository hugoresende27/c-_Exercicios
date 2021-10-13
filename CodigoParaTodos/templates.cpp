#include <iostream>					
using namespace std;

//função
template <class T> T soma ( T &a, T &b)     //template da função soma recebe o parametro a e b do tipo T e retorna o resultado da sua soma
{
    T resultado = a+b;
    return resultado;
}

template <class T1, class T2>
class Teste
{
    T1 x;
    T2 z;
    public:
    //construtor
    Teste (T1 a, T2 b)
    {
        x=a;
        z=b;
    }
    void mostrar()
    {
        cout << "Valores de x e z são : " << x << " e " << z << endl;
    }
};


int main()								
{
    int a=5;
    int b=10;
    float c=22.4;
    float d=15.2;

    cout << "a + b = " << soma(a,b) << endl;        //com o template tenho a flexibilidade de usar a mesma função com diferentes tipos de vaiáveis
    cout << "a + b = " << soma(c,d) << endl;

    Teste<int,float> m(12,16.5);        //template classe, uso a mesma classe com tipos de dados diferentes
    m.mostrar();

    Teste<double,char> n(10.34,'A');
    n.mostrar();

    Teste<char,char> z('Z','X');
    z.mostrar();
    system("pause");				
	return 0;	
}