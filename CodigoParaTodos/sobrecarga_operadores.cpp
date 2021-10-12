#include <iostream>
using namespace std;

class Caixa
{
    //atributos
    private:
    double comprimento;
    double largura;
    double altura;

    //construtor
    public:
    Caixa();
    Caixa(double c, double l, double a)
    {
        comprimento=c;
        largura=l;
        altura=a;
    }
    double volume()
    {
        double v=comprimento*largura*altura;
        return v;
    }
    bool operator > (Caixa &obj)        //Classe Caixa, &obj var a passar por referencia
    {                                   //sobrecarga do operador
        if (this->volume()>=obj.volume())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void operator = (Caixa &obj)       
    {                                   
        if (this->volume()==obj.volume())       //mesma sobrecarga de operator, desta vez com == e tipo void
        {                                       //cout para caixas iguais ou diferentes
            cout << "caixas iguais\n";
        }
        else
        {
            cout << "Caixas diferentes\n";
        }
    }
};

int main ()
{
    double a,b;
    Caixa c1 (1,2,3);
    Caixa c2 (1,8,1);
    a = c1.volume();
    b = c2.volume();

    //if (a > b)        
    if (c1 > c2)        //para comparar 2 objetos, são tipos de dados completos, preciso do metodo bool operator >
    {
        cout << "A caixa c1 é maior\n";
        cout << "A:: "<< a << "\nB::" << b<<endl;
    }
    else
    {
        cout << "A caixa c2 é maior\n";
        cout << "A:: "<< a << "\nB::" << b<<endl;
    }
    c1=c2;      //só comparando, como tenho o metodo sobrecarga de operator = vai devolver um cout iguais ou diferentes


    return 1;
}