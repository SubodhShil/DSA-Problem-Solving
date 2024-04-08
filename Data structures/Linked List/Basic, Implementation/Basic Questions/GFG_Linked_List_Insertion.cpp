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

class Solution
{
public:
    Node *insertAtBegining(Node *head, int x)
    {
        Node *newNode = new Node(x);
        newNode->next = head;
        head = newNode;

        return head;
    }

    // Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)
    {

        Node *it = head;
        Node *newNode = new Node(x);

        // if linked list is empty
        if (!head)
            return newNode;

        while (it->next != NULL)
        {
            it = it->next;
        }

        it->next = newNode;
        newNode->next = NULL;

        return head;
    }
};

int main()
{

    return 0;
}