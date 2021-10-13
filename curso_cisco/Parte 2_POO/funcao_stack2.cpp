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
        int pop ()
        {
            return stack[--SP];
        }
};
void Stack::push (int value)        //função referente à class Stack
{
    stack[SP++] = value;
};

class AddingStack : Stack {
private:
    int sum;
public:
    AddingStack();
    void push(int value);
    int pop();  
    int get_sum();
};

AddingStack::AddingStack() : Stack() 
{
    sum = 0;
}

void AddingStack::push(int value)
{
    sum += value;
    Stack::push(value);
}

int AddingStack::pop() 
{
    int val = Stack::pop();
    sum -= val;
    return val;
}

int AddingStack::get_sum() 
{
    return sum;
}


int main() 
{
    AddingStack super_stack;
    
    for(int i = 1; i < 10; i++)
        super_stack.push(i);
    cout << super_stack.get_sum() << endl;
    for(int i = 1; i < 10; i++)
        super_stack.pop();
    cout << super_stack.get_sum() << endl;
}