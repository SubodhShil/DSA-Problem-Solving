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

bool isCircular(Node *head)
{
    Node *it = head;
    it = it->next;

    // if empty
    if (!it)
        return 0;

    while (it)
    {
        if (it == head)
            return 1;

        it = it->next;
    }

    return 0;
}
int main()
{

    return 0;
}