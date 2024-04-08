//* Stack C++ implementation

#include <bits/stdc++.h>
using namespace std;

class Stack
{
    int top = -1;
    int size = 0;
    int *stackArray;

public:
    void createStack();
    bool isEmpty();
    bool isFull();
    void push(int element_val);
    void pop();
    void display();
    int stackTop();
};

bool Stack ::isEmpty()
{
    if (top == -1)
        return true;
    else
        return false;
}

bool Stack ::isFull()
{
    if (top == size - 1)
        return true;
    else
        return false;
}

void Stack::createStack()
{
    cout << "Enter stack size: ";
    cin >> size;
    stackArray = new int[size];
}

void Stack::push(int element_val)
{
    if (isFull())
        cout << "Stack Overflow\n";
    else
    {
        stackArray[++top] = element_val;
    }
}

void Stack ::pop()
{
    if (isEmpty())
        cout << "Stack Underflow\n";
    else
    {
        top--;
    }
}

void Stack ::display()
{
    for (int i = top; i >= 0; i--)
    {
        cout << stackArray[i] << " ";
    }
}

int main()
{
    Stack myStack;
    myStack.createStack();
    myStack.push(100);
    myStack.push(200);
    myStack.push(500);
    myStack.push(700);
    myStack.display();

    return 0;
}