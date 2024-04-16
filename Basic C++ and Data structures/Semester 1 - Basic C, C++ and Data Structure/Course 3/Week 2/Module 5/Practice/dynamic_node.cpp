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
    /// create a dynamic node
    Node *head = new Node(10);
    Node *two = new Node(20);

    head->nextNode = two;
    cout << head->data << endl;
    // cout << (*(*head).nextNode).data << endl;
    cout << head->nextNode->data << endl;

    return 0;
}