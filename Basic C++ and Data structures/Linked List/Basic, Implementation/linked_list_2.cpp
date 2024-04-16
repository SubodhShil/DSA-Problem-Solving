/* 
* Create and add new node
* using user defined function
*/


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

void displayLL(auto head)
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->nextNode;
    }
}

//* insert at tail -> many at a time
void createAndAdd(int countNodes, auto head)
{
    cout << "Enter node data: ";
    while (countNodes--)
    {
        int dataValue;
        cin >> dataValue;
        auto nextNodeElement = new Node(dataValue);
        head->nextNode = nextNodeElement;
        head = head->nextNode;
    }
}

int main()
{
    auto node1 = new Node(100);

    auto head = node1;

    int countNodes;
    cin >> countNodes;
    createAndAdd(countNodes, head);

    displayLL(head);

    return 0;
}