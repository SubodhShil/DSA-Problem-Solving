//* 🔥🔥 Insert at head 🔥🔥 *//

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *nextNode;

    Node(int data = 0, Node *nextNode = nullptr)
    {
        this->data = data;
        this->nextNode = nextNode;
    }
};

/* Methods */
void display(auto &head, auto &firstNode)
{
    //^ fixed the displacement
    head = firstNode;

    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->nextNode;
    }
}

void insertAtHead(auto head, int val)
{
    //* creating new node
    auto newNode = new Node(val);
    newNode->nextNode = head;
    head = newNode;
}

void insertAtTail(auto &head, int val)
{
    //* create a node
    auto newNode = new Node(val);
    head->nextNode = newNode;
    // head = head->nextNode;
    head = newNode;
}

int main()
{
    auto node1 = new Node(5);
    auto head = node1;

    // insertAtHead(head, 10);
    // insertAtHead(head, 15);

    insertAtTail(head, 100);
    insertAtTail(head, 200);
    insertAtTail(head, 300);

    display(head, node1);

    return 0;
}