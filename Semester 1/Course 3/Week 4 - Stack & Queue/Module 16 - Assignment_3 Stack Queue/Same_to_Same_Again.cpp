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

class LL
{
private:
    Node *head = nullptr, *tail = nullptr;
    int LLsize = 0;

public:
    void push_back(int val)
    {
        ++LLsize;
        Node *newNode = new Node(val);
        if (head == nullptr)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        head->prevNode = newNode;
        newNode->nextNode = head;
        head = head->prevNode;
    }

    void pop_back()
    {
        if (tail == head)
        {
            Node *delNode = head;
            head = nullptr;
            tail = nullptr;
            delete delNode;
            LLsize = 0;
            return;
        }

        Node *delNode = tail;
        tail = tail->prevNode;
        tail->nextNode = nullptr;
        delete delNode;
        --LLsize;
    }

    bool isEmpty()
    {
        return (LLsize == 0) ? 1 : 0;
    }

    int peek()
    {
        return tail->data;
    }
};

class Stack
{
private:
    Node *head = nullptr, *tail = nullptr;
    int stackSize = 0;

public:
    void push(int val)
    {
        ++stackSize;
        Node *newNode = new Node(val);
        if (head == nullptr)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->nextNode = newNode;
        newNode->prevNode = tail;
        tail = newNode;
    }

    void pop()
    {
        if (head == nullptr)
            return;
        else
        {
            Node *delNode = tail;
            tail = tail->prevNode;

            if (tail == nullptr)
                head = nullptr;

            delete delNode;

            --stackSize;
        }
    }

    int top()
    {
        return tail->data;
    }

    bool isEmpty()
    {
        return (stackSize == 0) ? 1 : 0;
    }
};

class Queue
{
    Node *head = nullptr, *tail = nullptr;
    int queueSize = 0;

public:
    void push(int val)
    {
        ++queueSize;
        Node *newNode = new Node(val);

        if (head == nullptr)
        {
            head = newNode;
            tail = newNode;
            return;
        }

        tail->nextNode = newNode;
        newNode->prevNode = tail;
        tail = tail->nextNode;
    }

    void pop()
    {
        if (head == nullptr)
        {
            return;
        }

        Node *delNode = head;
        if (head->nextNode == nullptr)
        {
            head = nullptr;
            tail = nullptr;
        }
        else
        {
            head = head->nextNode;
            head->prevNode = nullptr;
        }

        delete delNode;
        --queueSize;
    }

    int front()
    {
        return head->data;
    }

    bool isEmpty()
    {
        return (queueSize == 0) ? 1 : 0;
    }
};

int main()
{
    int n, m;
    cin >> n >> m;

    if (n != m)
    {
        cout << "NO\n";
        return 0;
    }

    Stack st;
    Queue qu;
    LL l1, l2;

    /// stack and it's corresponding list (l1)
    while (n--)
    {
        int x;
        cin >> x;
        l1.push_back(x);
    }

    while (!l1.isEmpty())
    {
        st.push(l1.peek());
        l1.pop_back();
    }

    while (!st.isEmpty())
    {
        l1.push_back(st.top());
        st.pop();
    }

    /// Queue and it's corresponding list (l2)
    while (m--)
    {
        int x;
        cin >> x;
        l2.push_back(x);
    }

    while (!l2.isEmpty())
    {
        qu.push(l2.peek());
        l2.pop_back();
    }

    while (!qu.isEmpty())
    {
        l2.push_back(qu.front());
        qu.pop();
    }

    /// check
    bool isSame = true;
    while (!l1.isEmpty() && !l2.isEmpty())
    {
        if (l1.peek() != l2.peek())
        {
            isSame = false;
            break;
        }

        l1.pop_back();
        l2.pop_back();
    }

    if (isSame)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}