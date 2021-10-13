/*
PILHA
A stack é uma estrutura de dados que tem uma tipologia FILO (first in last out), ou seja, o primeiro elemento a entrar é o último elemento a sair. 
push(): Inserir um elemento na pilha.
pop(): Remover um elemento na pilha.
empty(): Verificar se a pilha está vazia.
front(): mostra o elemento do topo da pilha.
size(): mostra o tamanho da pilha.
*/

#include <iostream>
#include <stack>

using namespace std;


void mostrar (stack<double> p)    
{
    while (! p.empty())         //enquanto a pilha não está vazia        
    {
        cout << p.top() << " ";     //imprime o elemento do topo da pilha top()
        p.pop();                    //remove o elemento
    }   
    cout << endl;
}

int main ()
{
    stack <double> pilha;
    pilha.push(55);
    pilha.push(75);
    pilha.push(95);
    pilha.pop();    //remove o ultimo elemento que foi inserido          
    mostrar(pilha);

    cout << "\nINDEX 0:: " << pilha.top() << endl; //imprime o elemento do topo, o ultimo index      
      
    cout << "TAMANHO:: " << pilha.size() << endl;       

    return 0;
}
