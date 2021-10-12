/*
implementar um programa em C++ que mostre o polimorfismo de métodos entre duas classes.
*/
#include <iostream>

using namespace std;
//sobrecarga de funções, função tem o mesmo nome mas os parametros são diferentes
void Teste (int i)
{
    cout << "Int:: " << i << endl;
}
void Teste (float f)
{
    cout << "Float:: " << f << endl;
}
void Teste (double d)
{
    cout << "Double:: " << d << endl;
}
void Teste (int i, int i2)
{
    cout << "Dois int:: " << i <<" :: "<< i2 << endl;
}

class A
{
   
    public:
    void mostrar()
    {
        cout << "Class A" << endl;
    }
};
class B: public A
{
   
    public:
    void mostrar()
    {
        cout << "Class B" << endl;
    }
};

int main()
{
    int a=2,z=69;
    float b = 3.24;
    double c= 15.256;
    //funções com o mesmo nome, muda o tipo de parametro, SOBRECARGA 
    Teste(a);       //
    Teste(b);
    Teste(c);
    Teste(a,z);
///////////////////////////////
    A obj1;         //objeto criado com a classe mae classe A 
    B obj2;         //objeto criado com a classe filha classe B
    obj1.mostrar();     //o obj1 mostra a função da classe A
    obj2.mostrar();     //o obj2 mostra a função mostrar() da classe B
    //polimorfismo, as subclasses têm metodos q podem susbtituir os metodos da classe mae
    return 1;
} 
