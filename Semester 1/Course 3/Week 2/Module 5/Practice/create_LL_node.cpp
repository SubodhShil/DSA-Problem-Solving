#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *nextNode;
};

int main()
{
    /// creating some nodes
    Node a, b;

    /// input values of nodes
    a.data = 10;
    b.data = 20;

    /// initialize nodes
    a.nextNode = &b;
    b.nextNode = NULL;

    cout << a.data << endl;
    cout << a.nextNode->data << endl;

    return 0;
}