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

void printLLRecursive(Node *it)
{
    /// base case
    if (it != nullptr)
    {
        cout << it->data << " ";
        printLLRecursive(it->nextNode);
    }
}

void sortLL(Node *&head, int size)
{
    for (Node *it1 = head; it1->nextNode != nullptr; it1 = it1->nextNode)
    {
        for (Node *it2 = it1->nextNode; it2 != nullptr; it2 = it2->nextNode)
        {
            /// ascending order sorting
            if (it1->data > it2->data)
                swap(it1->data, it2->data);
        }
    }
}

int main()
{
    int size;
    cout << "Enter size: ";
    cin >> size;

    Node *it = nullptr;
    Node *head = nullptr;

    for (int i = 1; i <= size; ++i)
    {
        int val;
        cin >> val;
        Node *temp = new Node(val);

        if (i == 1)
        {
            head = temp;
            it = temp;
        }
        else
        {
            it->nextNode = temp;
            it = temp;
        }
    }

    cout << "Before sorting the linked list\n";
    printLLRecursive(head);

    sortLL(head, size);
    cout << "\nAfter sorting the linked list\n";
    printLLRecursive(head);

    return 0;
}