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

void createLL(Node *&head, int *size)
{
    Node *it = NULL;
    int cnt = 1;

    while (1)
    {
        int element;
        cin >> element;
        if (element == -1)
            break;

        Node *node = new Node(element);
        ++(*size);

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

int main()
{
    Node *list1Head = NULL;
    Node *list2Head = NULL;
    int size1 = 0, size2 = 0;

    createLL(list1Head, &size1);
    createLL(list2Head, &size2);

    if (size1 != size2)
    {
        cout << "NO\n";
        return 0;
    }

    Node *it1 = list1Head, *it2 = list2Head;
    bool isSame = true;

    while (it1 != NULL && it2 != NULL)
    {
        if (it1->data != it2->data)
        {
            isSame = false;
            break;
        }

        it1 = it1->nextNode;
        it2 = it2->nextNode;
    }

    if (isSame)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}