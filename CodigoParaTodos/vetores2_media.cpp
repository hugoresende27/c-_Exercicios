// utiliza um vetor para calcular a média dos valores inseridos.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<double> v1;
    int tam;
    double temp;        //para guardar a nota temporáriamente

    cout << "Quantas notas vai inserir? -->";
    cin >> tam;

    for (int i=0; i<tam;i++)
    {
        cout << "Insira nota "<< i+1 << "--> ";
        cin >> temp;
        v1.push_back(temp);     //push_back insere a var temp q tem a nota no vector
    }
    temp=0;
    for (int i=0; i<v1.size();i++)
    {
        temp+=v1[i];        //uso a var temp para guardar a soma de todos os valores do vetor
    }

    cout << "Media " << temp / v1.size() << endl;
}