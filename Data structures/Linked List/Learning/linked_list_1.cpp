/* Linked list data structure */

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *nextNode;

    Node(int data, Node *nextNode = nullptr)
    {
        this->data = data;
        this->nextNode = nextNode;
    }
};

int main()
{
    //* let's create a node from the class
    auto node3 = new Node(554);
    auto node2 = new Node(20, node3);
    auto node1 = new Node(10, node2);

    auto head = node1;
    while (head != nullptr)
    {
        cout << head->data << endl;
        head = head->nextNode;
    }

    return 0;
}