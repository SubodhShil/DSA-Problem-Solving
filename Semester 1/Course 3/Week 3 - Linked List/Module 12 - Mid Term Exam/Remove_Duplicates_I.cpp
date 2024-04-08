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

void sortLL(Node *&head)
{
    for (Node *it1 = head; it1->nextNode != nullptr; it1 = it1->nextNode)
    {
        for (Node *it2 = it1->nextNode; it2 != nullptr; it2 = it2->nextNode)
        {
            if (it1->data > it2->data)
            {
                swap(it1->data, it2->data);
            }
        }
    }
}

void printLL(Node *head)
{
    while (head != nullptr)
    {
        cout << head->data << ' ';
        head = head->nextNode;
    }
}

int main()
{
    Node *head = nullptr;

    inputArray(head);
    sortLL(head);

    Node *it = head;
    while (it->nextNode != nullptr)
    {
        if (it->data == it->nextNode->data)
        {
            Node *delNode = it->nextNode;
            it->nextNode = delNode->nextNode;
            delete delNode;
        }

        if (it->nextNode == nullptr)
            break;
        else if (it->data != it->nextNode->data)
            it = it->nextNode;
    }

    printLL(head);

    return 0;
}
