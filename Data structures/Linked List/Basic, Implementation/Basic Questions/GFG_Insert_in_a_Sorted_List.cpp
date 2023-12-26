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
    Node *sortedInsert(struct Node *head, int data)
    {

        // if empty linked list
        if (!head)
            return head;

        // data position = head, if data is smaller than head
        Node *newNode = new Node(data);
        if (head->data >= data)
        {
            newNode->next = head;
            head = newNode;
            return head;
        }

        Node *it1 = head, *it2 = it1->next;

        /// data position middle , if data should be in middle
        while (it1 && it2)
        {
            if (it1->data <= data && it2->data >= data)
                break;

            it1 = it1->next;
            it2 = it2->next;
        }

        // data position last
        it1->next = newNode;
        newNode->next = it2;

        return head;
    }
};

int main()
{

    return 0;
}