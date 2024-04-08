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

void inputArray(Node *&head)
{
    Node *it = nullptr;
    int cnt = 1;

    while (1)
    {
        int element;
        cin >> element;
        if (element == -1)
            break;

        Node *node = new Node(element);

        if (cnt == 1)
        {
            head = node;
            it = node;
            ++cnt;
        }

        else
        {
            it->nextNode = node;
            it = it->nextNode;
        }
    }
}

void printLL(Node *head)
{
    Node *it = head;
    while (it != nullptr)
    {
        cout << it->data << ' ';
        it = it->nextNode;
    }

    cout << endl;
}

void insertAtPos(Node *&head, int pos, int val)
{
    Node *it = head;
    Node *newNode = new Node(val);

    for (int i = 1; i <= pos - 1; ++i)
    {
        it = it->nextNode;

        if (it == nullptr)
        {
            cout << "Invalid\n";
            return;
        }
    }

    newNode->nextNode = it->nextNode;
    it->nextNode = newNode;
}

int main()
{
    Node *head = nullptr;
    inputArray(head);
    printLL(head);

    int q;
    cin >> q;

    while (q--)
    {
        int pos;
        cin >> pos;
        int newElement;
        cin >> newElement;
        printLL(head);
    }

    return 0;
}