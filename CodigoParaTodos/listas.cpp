/*
push_back(): Inserir um elemento no final da lista.
push_front(): Inserir um elemento no inicio da lista.
pop_back(): Remover um elemento no final da lista.
pop_front(): Remover um elemento no inicio da lista.
empty(): Verificar se a lista está vazia.
size(): Mostra o número de elementos da lista.
max_size(): Mostra o número máximo de elementos que a lista pode ter.
front(): Mostra o primeiro elemento da lista.
back(): Mostra o último elemento da lista.
reverse(): Inverte a ordem dos elementos da lista.
sort(): Ordena a lista.
swap(): Troca os elementos entre duas listas.
merge(): Junta duas listas numa única lista.  

um array declarado tem tamanho declarado, a lista tem tamanho flexivel
*/

#include <iostream>
#include <list>

using namespace std;

//funcao para mostrar lista
void mostrarL(list<int> lis)
{
    list<int>::iterator itr;        //iterador para a lista itr
    for (itr=lis.begin(); itr!=lis.end() ; itr++)       //uso o iterador no for, de begin() a end()
    {
        cout << *itr << " ";    //em cada posição o apontador mostra o valor
    }
    cout << endl;
}

int main()
{
    list <int> lista1;
    lista1.push_back(10);
    lista1.push_back(20);
    lista1.push_back(30);
    lista1.push_back(40);       //push_back insere elementos no FINAL da lista
    lista1.push_front(99);      //99 é inserido no INICIO da lista
    lista1.pop_front();         //remove o primeiro elemento
    lista1.pop_back();          //remove ultimo elemento
    cout << "LISTA 1\n";
    mostrarL(lista1);


    if (lista1.empty())         //verificar se a lista está vazia
    {
        cout << "A lista está vazia...\n";
    }
    else
    {
        cout << "A lista tem " << lista1.size() << " elementos...\n";
    }

    cout << "O tamanho máximo da lista é " << lista1.max_size() << " elementos...\n";
    cout << "Primero elemento:: " << lista1.front() << "\nUltimo elemento:: " << lista1.back() << endl;
    lista1.reverse();   //REVERSE
    mostrarL(lista1);
    lista1.sort();      //SORT
    mostrarL(lista1);

    list <int> lista2;
    lista2.push_back(200);
    lista2.push_back(300);
    lista2.push_back(400);
    lista2.push_back(500);
    cout << "LISTA 2\n";
    mostrarL(lista2);

    lista1.swap(lista2);        //troca o conteúdo da lista1 com o conteudo da lista2
    cout << "LISTA 1\n";
    mostrarL(lista1);
    cout << "LISTA 2\n";
    mostrarL(lista2);

    lista1.merge(lista2);       //adiciona os elementos da lista2 à lista1
    mostrarL(lista1);

    return 0;
}