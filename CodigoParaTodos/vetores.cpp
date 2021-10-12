/*
 um array o seu tamanho é fixo e definido, um vetor é dinâmico o seu tamanho pode ser alterado
*/



#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    vector<double> v1,v2;      //criar um vetor v1 com recuro à biblioteca vetor, tipo double
    v1.push_back(10.5);     //push_back da biblio vector introduz valores no fim do vetor
    v1.push_back(7.5);
    v1.push_back(12.3);
    v1.push_back(69.9);

    v1.pop_back();      //retira o ultimo elemento inserido pelo push_back
    v1.insert(v1.begin() , 15.6); //insert, primeiro dizer a posição em q se quer inserir, usei begin() = indice 0, depois o valor a inserir
    v1.insert(v1.begin()+3,33);     //insert na posição index 3

   // v1.erase(v1.begin());       //apaga o valor do index 0
    //v1.erase(v1.begin()+2);     //apaga o valor do index 2

    cout << "Size()" << v1.size() <<endl;//aqui size = 5
  //  v1.clear();     //limpa o vetor
    cout << "Size()" << v1.size() <<endl;   //aqui size =0, está limpo

    v1.swap(v2);        //troca os valores de 1 vetor com o outro

    for (int i=0; i < v1.size() ; i++)
    {
        cout << v1[i] << endl;
    }
    for (int i=0; i < v2.size() ; i++)
    {
        cout << v2[i] << endl;
    }
}