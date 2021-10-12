#include <iostream>
using namespace std;


void teste ()
{
    int a=0;            //a var A está sempre a ser criada, toma valor 0
    static int b=0;     //a variavel B é static, guarda o valor
    a++;
    b++;
    cout << "Var A:: " << a << endl << "Var B:: " << b << endl;
}

class Teste
{
    //atributos
    private:
    int n1;
    static int n2;      //atributo static, sempre q for alterado o valor n2 em qualquer objeto, todos os objetos são alterado

     public:
    //construtor 
    Teste(int n)
    {
        n1=n;
    }

    //metodos
    void alterar_n1(int n)
    {
        n1=n;
    }
    void alterar_n2(int n)
    {
        n2=n;
    }
    void mostrar()
    {
        cout << "N1:: " << n1 << "\nN2:: " << n2 << endl;
    }

    static void metodo_static()
    {
        cout << "Metodo static"<<endl;
    }
   
};

int Teste::n2=0;        //nos objetos criados com base na classe Teste, n2 vai se 0

int main()
{
  
//////////////////////////////////////////
    teste();
    teste();
    teste();
////////////////////////////////////////////
    Teste::metodo_static(); //metodo static é independente dos objetos da classe
    //Teste::mostrar(); //metodo mostrar não pode ser chamado assim, precisa de ser static para ser chamado sem objeto
    Teste a(1);     //criar o objeto a com valor n1 = 1 e n2 = 0 
    Teste b(2);     //objeto b, n1 = 2 e n2 = 0
    cout << "Objeto A::\n";
    a.mostrar();
    cout << "Objeto B::\n";
    b.mostrar();

    a.alterar_n1(5);       //estou a alterar o valor de n1 e n2 no objeto A para 5 e 10
    a.alterar_n2(10);
    cout << "Objeto A::\n";
    a.mostrar();
    cout << "Objeto B::\n"; //no objeto B o n2 tbm vai ser alterado para 10 porque o atributo é static
    b.mostrar();

  
    return 0;
}