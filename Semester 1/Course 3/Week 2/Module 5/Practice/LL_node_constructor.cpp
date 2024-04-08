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
    /// creating some nodes
    Node a(10), b(20);

    /// initialize nodes
    a.nextNode = &b;
    b.nextNode = NULL;

    cout << a.data << endl;
    cout << a.nextNode->data << endl;

    return 0;
}