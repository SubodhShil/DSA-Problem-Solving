#include <bits/stdc++.h>
using namespace std;

class Stack
{
    int top = -1;
    int size;
    vector<int> stackArray;

public:
    Stack(int size)
    {
        this->size = size;
        cout << "You've declared stack of " << this->size << " size" << endl;
    }

    void push(int element);
    void pop();
    void stacSize();
    void displayStack();
    void empty();
};

void Stack::push(int element)
{
    /// check if full
    if (top == size - 1)
    {
        cout << "Your stack is filled up, would you like to increase size?\n";
        cout << "1) Yes\n2) No\n";
        int flag;
        cin >> flag;
        if (flag == 2 || flag != 1)
            return;
    }

    ++top;
    stackArray.push_back(element);
}

void Stack::pop()
{
    if (top == -1)
    {
        cout << "Stack is empty, can't remove elements\n";
        return;
    }
    // cout << "Element " << stackArray[top] << " removed\n";
    stackArray.pop_back();
    --top;
}

void Stack::displayStack()
{
    int it = top;
    while (it != -1)
    {
        cout << stackArray[it] << ' ';
        --it;
    }

    cout << endl;
}

void Stack::stacSize()
{
    cout << "Current stack size: " << top + 1 << endl;
}

void Stack::empty()
{
    if (top == -1)
        cout << "Stack is empty\n";
    else
    {
        cout << "Remaining size: " << size - (top + 1) << endl;
    }
}

int main()
{
    Stack st(3);
    st.empty();
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.displayStack();
    st.stacSize();
    st.empty();

    st.pop();
    st.displayStack();
    st.stacSize();
    st.empty();

    return 0;
}