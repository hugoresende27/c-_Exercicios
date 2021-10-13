/*
A queue é uma estrutura de dados que tem uma tipologia FIFO (first in first out), ou seja, o primeiro elemento a entrar é o primeiro elemento a sair. É o equivalente a uma fila de um supermercado o primeiro cliente a entrar na fila é o primeiro a ser atendido. 
push(): Inserir um elemento na queue.
pop(): Remover um elemento na queue.
empty(): Verificar se a queue está vazia.
front(): mostra o primeiro elemento da queue.
back(): mostra o último elemento da queue.
*/

#include <iostream>
#include <queue>

using namespace std;

void mostrar (queue<int> f)     //função q recebe um queue de inteiros 
{
    while (! f.empty())          //enquanto a queue recebida não estiver vazia
    {
        cout << f.front() << " ";//print do elemento que está à frente na fila
        f.pop();                //remove o elemento
    }
}

int main ()
{
    queue <int> fila;
    fila.push(10);
    fila.push(20);
    fila.push(30);
    //mostrar(fila);
    //fila.pop();             //elimina o 10 que foi o primeiro elemento a entrar na fila
    mostrar(fila);

    cout << "\nINDEX 0:: " << fila.front() << endl;       //mostra o primeiro elemento da fila
    cout << "ULTIMO INDEX:: " << fila.back() << endl;       //mostra o ultimo elemento da fila
    cout << "TAMANHO:: " << fila.size() << endl;       //mostra o tamanho da fila

    return 0;
}
