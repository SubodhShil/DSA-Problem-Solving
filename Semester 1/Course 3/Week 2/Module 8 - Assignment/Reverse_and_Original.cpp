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
        this->nextNode = NULL;
    }
};

void printStraight(Node *it)
{
    if (it != NULL)
    {
        cout << it->data << " ";
        printStraight(it->nextNode);
    }
}

void printReverse(Node *it)
{
    if (it != NULL)
    {
        printReverse(it->nextNode);
        cout << it->data << " ";
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
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
            tail = node;
            ++cnt;
        }

        else
        {
            tail->nextNode = node;
            tail = node;
        }
    }

    printReverse(head);
    cout << endl;
    printStraight(head);
}