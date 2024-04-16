#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *nextNode;

    Node(int data)
    {
        this->data = data;
        this->nextNode = nullptr;
    }
};

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    /// connecting the nodes
    head->nextNode = a;
    a->nextNode = b;
    b->nextNode = c;
    c->nextNode = d;
    d->nextNode = nullptr;

    /// Printing the values in cleaner way
    /// creating an iterator
    Node *it = head;
    while (it != nullptr)
    {
        cout << it->data << " ";
        it = it->nextNode;
    }

    return 0;
}