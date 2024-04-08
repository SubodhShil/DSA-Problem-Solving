#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *nextNode;
    Node *prevNode;

    Node(int data)
    {
        this->data = data;
        this->nextNode = nullptr;
        this->prevNode = nullptr;
    }
};

class Stack
{
private:
    Node *head = nullptr;
    Node *tail = nullptr;
    int stackSize = 0;

public:
    /// push an element to the stack is similar to the opertaion
    /// of linked list insert at tail
    void push(int val)
    {
        /// increase stack size as a node has been inserted
        ++stackSize;

        Node *newNode = new Node(val);
        if (head == nullptr)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->nextNode = newNode;
            newNode->prevNode = tail;
            tail = newNode;
        }
    }

    void pop()
    {
        /// check whether stack is empty or not
        if (head == nullptr)
            cout << "Can't pop, stack is empty\n";
        else
        {
            Node *delNode = tail;
            tail = tail->prevNode;

            /// if stack has one element left
            if (tail == nullptr)
                head = nullptr;

            delete delNode;

            /// decrease the stack size after node deletion
            --stackSize;
        }
    }

    void top()
    {
        if (stackSize == 0)
            cout << "Stack is empty\n";
        else
            cout << tail->data << endl;
    }

    int size()
    {
        return stackSize;
    }

    bool empty()
    {
        return (head == nullptr) ? true : false;
    }
};

int main()
{
    Stack st;
    int n;
    cin >> n;

    while (n--)
    {
        int val;
        cin >> val;
        st.push(val);
    }

    cout << "-------------------------\n";
    while (!st.empty())
    {
        st.top();
        st.pop();
    }

    return 0;
}
