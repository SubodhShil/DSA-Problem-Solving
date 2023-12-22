/*🔥🔥 Insert node at a given position 🔥🔥 */

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

void insertAtPosition(auto head, int val, int position)
{
    //* you'll be given a position and value where the value you've to insert at.
    auto temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->nextNode;
        cnt++;
    }

    auto newNode = new Node(val);

    if (temp->nextNode == nullptr)
    {
        temp->nextNode = newNode;
        newNode->nextNode = nullptr;
        return;
    }

    newNode->nextNode = temp->nextNode;
    temp->nextNode = newNode;
}

int main()
{
    auto node1 = new Node(100);

    auto head = node1;

    int countNodes;
    cin >> countNodes;
    createAndAdd(countNodes, head);

    insertAtPosition(head, -1, 5);
    displayLL(head);

    return 0;
}