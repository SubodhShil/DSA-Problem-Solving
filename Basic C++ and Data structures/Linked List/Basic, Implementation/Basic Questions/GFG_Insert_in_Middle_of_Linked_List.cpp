#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node *insertInMiddle(Node *head, int x)
{
    /// get linked list size
    Node *it = head;
    int size = 0;

    while (it)
    {
        ++size;
        it = it->next;
    }

    int middleIdx = ceil(size / 2.0);
    int i = 1;
    it = head;

    while (it)
    {
        if (i == middleIdx)
        {
            Node *newNode = new Node(x);
            Node *temp = it->next;

            it->next = newNode;
            newNode->next = temp;
            break;
        }

        it = it->next;
        ++i;
    }

    return head;
}

int main()
{

    return 0;
}