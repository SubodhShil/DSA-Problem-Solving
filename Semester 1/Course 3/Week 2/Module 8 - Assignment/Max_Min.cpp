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
    int maxVal = INT32_MIN;
    int minVal = INT32_MAX;

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

    for (Node *it1 = head; it1 != NULL; it1 = it1->nextNode)
    {
        if (it1->data > maxVal)
            maxVal = it1->data;
        if (it1->data < minVal)
            minVal = it1->data;
    }

    cout << maxVal << " " << minVal << endl;
}

int main()
{
    Node *head = NULL;
    int size = 0;
    ans(head);

    return 0;
}