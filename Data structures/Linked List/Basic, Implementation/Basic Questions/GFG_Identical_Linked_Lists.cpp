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

bool areIdentical(struct Node *head1, struct Node *head2)
{
    Node *it1 = head1;
    Node *it2 = head2;

    while (it1 && it2)
    {
        if (it1->data != it2->data)
            return 0;

        it1 = it1->next;
        it2 = it2->next;
    }

    if (it1 != it2)
        return 0;

    return 1;
}

int main()
{

    return 0;
}