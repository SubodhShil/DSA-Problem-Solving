/* 🔥🔥 Deletion in linked list 🔥🔥 */
/// delete the head node
/// delete the last node
/// delete node at a given position

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

    ~Node()
    {
        int value = this->data;
        if (this->nextNode != nullptr)
        {
            delete nextNode;
            this->nextNode = nullptr;
        }
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

void createNodes(int countNodes, auto head)
{
    while (countNodes--)
    {
        int dataValue;
        cin >> dataValue;
        auto nextNodeElement = new Node(dataValue);
        head->nextNode = nextNodeElement;
        head = head->nextNode;
    }
}

void deleteNode(int position, auto &head)
{
    if (position == 1)
    {
        auto first = head;
        head = head->nextNode;
        delete first;
    }

    else
    {
        Node *curr = head;
        Node *prev = nullptr;

        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->nextNode;
            cnt++;
        }

        prev->nextNode = curr->nextNode;
        curr->nextNode = nullptr;
        curr = nullptr;
    }
}

int main()
{
    int countNodes, firstData;
    cout << "Enter node count: ";
    cin >> countNodes;
    cout << "Enter node data: ";
    cin >> firstData;
    auto node1 = new Node(firstData);
    auto head = node1;

    createNodes(countNodes - 1, head);
    displayLL(head);

    int deleteNodePos = 0;
    cout << "\nEnter position of deleting node: ";
    cin >> deleteNodePos;
    deleteNode(deleteNodePos, head);

    cout << "After deletion the LL is: ";
    displayLL(head);

    return 0;
}