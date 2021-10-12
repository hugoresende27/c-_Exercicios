#include <iostream>

using namespace std;

class Stack
{
    private:
        int stack[100];
        int SP = 0;     //single pointer = 0

    public:
    Stack()
    {
        SP = 0;
    }
        void push (int value);  //usando o prototype da função
    /*
        void push(int v)
        {
            stack[SP++] = v;
        }
    */
        int pop ()
        {
            return stack[--SP];
        }

};

void Stack::push (int value)        //função referente à class Stack
{
    stack[SP++] = value;
};

int main()
{
    /*
    push(3);            //vai inserindo 3 para o stack, depois 2 e 1
    push(2);            //a função pop vai retornar os valores do stack, o ultimo a entrar (push)
    push(1);            //vai ser o primeiro a sair (pop)
    cout << pop() << endl;
    cout << pop() << endl;
    cout << pop() << endl;
    */
}