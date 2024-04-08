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

void reverseList(Node *it, Node *&head, Node *&tail)
{
    if (it != nullptr)
    {
        reverseList(it->nextNode, head, tail);
        Node *newNode = new Node(it->data);
        if (it->nextNode == nullptr)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->nextNode = newNode;
            tail = tail->nextNode;
        }
    }
}

int main()
{
    Node *head = nullptr;
    inputArray(head);

    /// creating the new list and compare
    Node *newLLHead = nullptr;
    Node *newLLTail = nullptr;
    Node *it = head;

    reverseList(it, newLLHead, newLLTail);

    Node *it1 = head, *it2 = newLLHead;
    bool isPalindrome = true;

    while (it1 != nullptr && it2 != nullptr)
    {
        if (it1->data != it2->data)
        {
            isPalindrome = false;
        }
        it1 = it1->nextNode;
        it2 = it2->nextNode;
    }

    if (isPalindrome)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
