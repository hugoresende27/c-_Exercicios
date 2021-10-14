/*
O bloco try catch permite tratar determinadas excepções que podem ocorrer durante a execução do código. Este bloco torna o código mais robusto e capaz de tratar automaticamente algumas excepções. 
*/
#include <iostream>				
#include <vector>	
using namespace std;


int main()								
{
    vector <int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    try
    {
        v.at(0)=50;     //substitui o vetor no indice 0 pelo valor 50
        //v.at(5)=50; //como não existe o indice 5, vai dar o catch, ocorreu uma exepção mas não pára o código
    }
    catch (exception& e)
    {
        cout << "Ocorreu uma exepção...\n";
    }
    for (int i=0; i< v.size(); i++)
    {
        cout << "|" << v[i] ;
    }
    cout << endl;
    system("pause");				
	return 0;	
}
