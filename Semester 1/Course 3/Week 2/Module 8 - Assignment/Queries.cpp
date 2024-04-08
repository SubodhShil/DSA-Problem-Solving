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

int main()
{
    int q;
    cin >> q;

    Node *head = new Node(0);
    Node *tail = new Node(0);

    for (int i = 1; i <= q; ++i)
    {
        int pos, ele;
        cin >> pos >> ele;

        if (i == 1)
        {
            head->data = ele;
            tail->data = ele;
            head->nextNode = tail;
            printLL(head);
        }

        else if (pos == 0)
        {
            head->data = ele;
            printLL(head);
        }

        else
        {
            tail->data = ele;
            printLL(head);
        }
    }

    return 0;
}