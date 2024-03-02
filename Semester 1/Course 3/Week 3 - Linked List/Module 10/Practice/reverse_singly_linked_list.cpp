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

void printLL(Node *head)
{
    if (head == nullptr)
    {
        cout << "Linked list is empty\n";
        return;
    }

    cout << "The linked list is: ";
    Node *it = head;
    while (it != nullptr)
    {
        cout << it->data << ' ';
        it = it->nextNode;
    }

    cout << endl;
}

void reverseLL(Node *&head, Node *curr)
{
    if (curr->nextNode == nullptr)
    {
        head = curr;
        return;
    }

    reverseLL(head, curr->nextNode);
    curr->nextNode->nextNode = curr;
    curr->nextNode = nullptr;
}

int main()
{
    int size;
    cout << "Enter size: ";
    cin >> size;

    Node *it = nullptr;
    Node *head = nullptr;

    for (int i = 1; i <= size; ++i)
    {
        int val;
        cin >> val;
        Node *temp = new Node(val);

        if (i == 1)
        {
            head = temp;
            it = temp;
        }
        else
        {
            it->nextNode = temp;
            it = temp;
        }
    }

    printLL(head);
    reverseLL(head, head);
    cout << endl;
    printLL(head);

    return 0;
}