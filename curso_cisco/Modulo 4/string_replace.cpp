#include <iostream>
#include <string>

using namespace std;

int main ()
{
    string alfa = "ABCDEFGH", beta = "123456789";
    alfa.replace (1,1, beta, 1,1) ; //susbtitui o B, index 1, 1 char, por 2, posicao 1 1 char tbm na var beta
    cout << alfa <<endl;
    beta.erase(3,3);        //elemina a partir do terceiro index 3 posicoes para a frente
    cout << beta << endl;

    alfa.swap(beta);        //alfa passa a ser "123456789", troca com beta, assim não necessito de uma terceira variavel para trocar os dados entre elas
    cout << alfa << endl;
    cout<<endl;
    return 0;
}