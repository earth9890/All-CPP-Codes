#include <iostream>
using namespace std;
#define MAX 1000
class Stack
{

public:
    int top;
    int a[MAX];
    Stack()
    {
        top = -1;
    }
    void push(int y);
    int pop();
    bool empty();
    bool overflow();
};
bool Stack::empty()
{
    if (top == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool Stack::overflow()
{
    if (top >= MAX)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Stack ::push(int x)
{
    if (!overflow())
    {

        a[++top] = x;
    }
    else
    {
        cout << "Stack is Full" << endl;
    }
}
int Stack ::pop()
{
    int data;
    if (!empty())
    {
        data = a[top];
        top = top - 1;
        return data;
    }
    else
    {
        cout << "Stack is Empty" << endl;
    }
}

int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    cout << " Popped " << s.pop() << endl;
    int i = s.top;
    while (!s.empty())
    {
        int data = s.pop();
        cout << "Element of Stack " << i-- << ":" << data << endl;
    }
}
