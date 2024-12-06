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

class Solution1
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

class Solution2
{
public:
    Node *sortedInsert(struct Node *head, int x)
    {
        Node *newNode = new Node(x);
        Node *itr = head;

        // insert at head
        if (head->data >= x)
        {
            newNode->next = head;
            return newNode;
        }

        while (itr->next)
        {

            // insert at middle
            if (itr->next->data >= x)
            {
                Node *remain = itr->next;
                itr->next = newNode;
                itr->next->next = remain;
                return head;
            }

            itr = itr->next;
        }

        // insert at end
        itr->next = newNode;
        return head;
    }
};

class Solution3
{
public:
    Node *sortedInsert(struct Node *head, int x)
    {
        Node *newNode = new Node(x);
        Node *itr = head;

        if (head->data >= x)
        {
            newNode->next = head;
            return newNode;
        }

        while (itr->next && itr->next->data < x)
        {
            itr = itr->next;
        }

        newNode->next = itr->next;
        itr->next = newNode;

        return head;
    }
};

int main()
{
    return 0;
}