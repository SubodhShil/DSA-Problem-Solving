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

class QueueDLL
{
    Node *head = nullptr, *tail = nullptr;
    int size = 0;

public:
    void push(int val)
    {
        Node *newNode = new Node(val);
        ++size;

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
        /// if no element are available
        if (head == nullptr)
        {
            cout << "Queue is empty\n";
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
        --size;
    }

    void front()
    {
        if (head == nullptr)
        {
            cout << "Queue is empty\n";
            return;
        }

        cout << "Front value of queue: " << head->data << " ";
    }

    bool isEmpty()
    {
        if (size == 0)
            return true;
        else
            return false;
    }
};

int main()
{
    QueueDLL qu;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        qu.push(x);
    }

    // qu.display();
    while (!qu.isEmpty())
    {
        qu.front();
        qu.pop();
    }
    return 0;
}
