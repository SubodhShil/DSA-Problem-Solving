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

void inputArray(Node *&head, int size)
{
    Node *it = nullptr;

    for (int i = 1; i <= size; ++i)
    {
        int element;
        cin >> element;

        Node *node = new Node(element);

        if (head == nullptr)
        {
            head = node;
            it = node;
        }

        else
        {
            it->nextNode = node;
            it = it->nextNode;
        }
    }
}

void recursive_print_both_way(Node *it)
{
    if (it == nullptr)
    {
        cout << endl;
        return;
    }

    cout << it->data << ' ';
    recursive_print_both_way(it->nextNode);
    cout << it->data << ' ';
}

int main()
{

    int size;
    cout << "Enter the size of nodes: ";
    cin >> size;
    Node *head = nullptr;
    inputArray(head, size);

    recursive_print_both_way(head);

    return 0;
}
