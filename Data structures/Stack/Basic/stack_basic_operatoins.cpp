/**
 * @file 01.cpp
 * @author Subodh Chandra Shil
 * @brief Stack creation, input element and basic operations
 * @date 2023-04-04
 */

#include <iostream>
using namespace std;

struct Stack
{
    int size;
    int top;
    int *s;
};

void createStack(struct Stack *st, int size)
{
    st->size = size;

    //* creating dynamic array for the stack
    st->s = new int[st->size];

    //* intially top points to no where so top = -1
    st->top = -1;
}

void display(struct Stack st)
{
    for (int i = st.top; i >= 0; i--)
        cout << st.s[i] << " ";

    cout << endl;
}

bool isFull(struct Stack st)
{
    if (st.top == st.size - 1)
        return true;

    return false;
}

bool isEmpty(struct Stack st)
{
    if (st.top == -1)
        return true;
    else
        return false;
}

int stackTop(struct Stack st)
{
    if (!isEmpty(st))
        return st.s[st.top];
    return -1;
}

void push(struct Stack *st, int element_val)
{
    if (st->top == st->size - 1)
        cout << "Stack overflow\n";
    else
    {
        st->top++;
        st->s[st->top] = element_val;
    }
}

int pop(struct Stack *st)
{
    int x = -1;
    if (st->top == -1)
        cout << "Stack underflow\n";
    else
    {
        x = st->s[st->top];
        st->top--;
    }
    return x;
}

void peek(struct Stack st, int desire_position)
{
    int peek_index = st.top - desire_position;
    if (peek_index >= 0)
        cout << st.s[peek_index];
    else
        cout << "Invalid!!! No such element found\n";
}

int main()
{
    int size = 0;
    struct Stack st;
    cout << "Enter the size of the stack: ";
    cin >> size;

    ///  creating stack of user defined 'size'
    createStack(&st, size);

    cout << "Enter " << size << " elements to the stack: ";
    while (size--)
    {
        int ele;
        cin >> ele;
        push(&st, ele);
    }

    /// displaying the stack
    /// LIFO order printing
    display(st);

    return 0;
}
