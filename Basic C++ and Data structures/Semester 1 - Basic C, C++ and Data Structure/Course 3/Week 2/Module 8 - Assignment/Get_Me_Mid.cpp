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

void ans(Node *&head)
{
    Node *it = NULL;
    int cnt = 1;
    int size = 0;

    while (1)
    {
        int element;
        cin >> element;
        if (element == -1)
            break;

        Node *node = new Node(element);
        ++size;

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

    /// sorting descending
    for (Node *it1 = head; it1->nextNode != NULL; it1 = it1->nextNode)
    {
        for (Node *it2 = it1->nextNode; it2 != NULL; it2 = it2->nextNode)
        {
            /// ascending order sorting
            if (it1->data < it2->data)
                swap(it1->data, it2->data);
        }
    }

    int middle = (size + 1) / 2;
    it = head;

    for (int i = 1; i < middle; ++i)
    {
        it = it->nextNode;
    }

    if (size % 2 == 0)
        cout << it->data << " " << it->nextNode->data << endl;
    else
        cout << it->data << endl;
}

int main()
{
    Node *head = NULL;
    ans(head);

    return 0;
}