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

int LLSize(Node *&head)
{
    int size = 0;
    Node *it = head;
    while (it != nullptr)
    {
        ++size;
        it = it->nextNode;
    }

    cout << "Size of the linked list is: " << size << endl;

    return size;
}

void insertAtTail(Node *&head, int size = 0)
{
    cout << "Enter value for node: ";
    int value;
    cin >> value;

    /// create a new node
    Node *newNode = new Node(value);

    /// exception handling
    /// if the linked list is empty
    if (head == nullptr)
    {
        head = newNode;
        return;
    }

    Node *it = head;
    /// traverse till the tail node
    while (it->nextNode != nullptr)
    {
        it = it->nextNode;
    }

    /// insert at tail
    it->nextNode = newNode;
}

void insertAtHead(Node *&head)
{
    cout << "Enter value to insert at head: ";
    int value = 0;
    cin >> value;
    Node *newNode = new Node(value);

    newNode->nextNode = head;
    head = newNode;
}

void insertAtPosition(Node *&head)
{
    int position;
    int size = LLSize(head);
    int value;
    cout << "Insert position to insert: ";
    cin >> position;

    /// if the list is empty
    /// if the list isn't empty but user inputs invalid position
    while ((head == nullptr && position > 1) or (head != nullptr && position > size))
    {
        cout << "Invalid position\n";
        cout << "Enter position again: ";
        cin >> position;
    }

    if (position == 0)
    {
        insertAtHead(head);
        return;
    }

    cout << "Enter value for new node: ";
    cin >> value;

    /// creating new node to insert at position i
    Node *newNode = new Node(value);
    /// iterator to traverse
    Node *it = head;
    /// iterate till i - 1 position
    for (int i = 1; i <= position - 1; ++i)
        it = it->nextNode;

    /// creating connection between new node and right portion
    newNode->nextNode = it->nextNode;

    /// connect left portion to new node
    it->nextNode = newNode;
    cout << endl;
}

void deleteHeadNode(Node *&head)
{
    /// edge case
    if (head == nullptr)
    {
        cout << "Can't delete from an empty linked list\n";
        return;
    }

    Node *deleteNode = head;
    head = head->nextNode;

    delete deleteNode;
}

void deleteNode(Node *&head)
{
    cout << "Enter position to delete the node: ";
    int pos;
    cin >> pos;
    int size = LLSize(head);

    /// edge case
    if (head == nullptr)
    {
        cout << "Can't delete from an empty linked list\n";
        return;
    }

    if (pos > size)
    {
        cout << "Invalid input, can't delete\n";
        return;
    }

    if (pos == 0)
    {
        deleteHeadNode(head);
        return;
    }

    Node *it = head;
    /// reach to the i - 1 position
    for (int i = 1; i <= pos - 1; ++i)
    {
        it = it->nextNode;
    }

    if (it->nextNode == nullptr)
    {
        cout << "Invalid index\n";
        return;
    }

    /// store the node to be deleted
    Node *deleteNode = it->nextNode;

    /// disconnect the delete node
    it->nextNode = deleteNode->nextNode;

    delete deleteNode;
}

void printLL(Node *head)
{
    if (head == nullptr)
    {
        cout << "Linked list is empty\n";
        return;
    }

    cout << "The linked list is: ";
    Node *it = head;
    while (it != nullptr)
    {
        cout << it->data << ' ';
        it = it->nextNode;
    }

    cout << endl;
}

int main()
{
    Node *head = nullptr;

    while (1)
    {
        cout << "\n--------------------------------\nOption 1: Create LL with size\n";
        cout << "Option 2: Insert at tail\n";
        cout << "Option 3: Insert at head\n";
        cout << "Option 4: Insert at position\n";
        cout << "Option 5: Delete from position\n";
        cout << "Option 6: Print linked list\n";
        cout << "Option 7: Linked list size\n";
        cout << "Option 8: Terminate\n--------------------------------\n";

        cout << "Your Option: ";
        int option;
        cin >> option;

        if (option == 1)
        {
            int size = 0;
            cout << "Enter size: ";
            cin >> size;
            for (int i = 1; i <= size; ++i)
                insertAtTail(head, size);
        }
        else if (option == 2)
            insertAtTail(head);
        else if (option == 3)
            insertAtHead(head);
        else if (option == 4)
            insertAtPosition(head);
        else if (option == 5)
            deleteNode(head);
        else if (option == 6)
            printLL(head);
        else if (option == 7)
            LLSize(head);
        else
            break;
    }

    return 0;
}