/*
 * Doubly linked list
 */

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *previous;
    Node *next;

    Node(int data = 0, Node *previous = nullptr, Node *next = nullptr)
    {
        this->data = data;
        this->previous = previous;
        this->next = next;
    }
};

void displayLL(auto head)
{
    Node *temp = head;

    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void createNodes(int countNodes, auto head)
{
    while (countNodes--)
    {
        int dataValue;
        cin >> dataValue;
        auto nextNodeElement = new Node(dataValue);
        head->next = nextNodeElement;
        head = head->next;
    }
}

void insertAtHead(Node *&head)
{
    cout << "\nInsertion at head\nEnter new head value: ";
    int newHeadValue = 0;
    cin >> newHeadValue;

    //* runner code
    Node *newNode = new Node(newHeadValue);
    newNode->next = head;
    head->previous = newNode;
    head = newNode;

    cout << "After new head insertion: ";
    displayLL(head);
}

void insertAtTail(Node *&head)
{
    cout << "\nInsertion at tail\nEnter tail node value: ";
    int newValue = 0;
    cin >> newValue;
    Node *newNode = new Node(newValue);
    Node *iterator = head;

    //* runner code
    while (iterator != nullptr)
    {
        if (iterator->next == nullptr)
        {
            //* way 01:
            // iterator->next = newNode;
            // newNode->next = nullptr;

            //* way 02:
            newNode->previous = iterator;
            iterator->next = newNode;
            break;
        }

        iterator = iterator->next;
    }

    cout << "After insert at tail: ";
    displayLL(head);
}

void insertAtTail2(Node *&head)
{
    cout << "\nInsertion at tail\nEnter tail node value: ";
    int newValue = 0;
    cin >> newValue;
    Node *newNode = new Node(newValue);
    Node *iterator = head;

    // Find the last node in the linked list
    while (iterator != nullptr && iterator->next != nullptr)
    {
        iterator = iterator->next;
    }

    // Insert the new node at the tail
    if (iterator == nullptr)
    {
        // The linked list is empty, so the new node becomes the head
        head = newNode;
    }
    else
    {
        // The linked list is not empty, so the new node becomes the tail
        newNode->previous = iterator;
        iterator->next = newNode;
    }

    cout << "After insert at tail: ";
    displayLL(head);
}

void insertAtPosition(Node *&head, int position, int value)
{
    Node *newNode = new Node(value);
    Node *temp = head;

    if (position == 1)
    {
        newNode->next = head;
        head = newNode;
    }

    else
    {
        int i = 1;
        while (i != position)
        {
            if (i == position - 1)
            {
                newNode->next = temp->next;
                temp->next = newNode;
            }

            i++;
            temp = temp->next;
        }
    }

    displayLL(head);
}

void insertAtPosition2(Node *&head, int position, int value)
{
    Node *newNode = new Node(value);
    Node *temp = head;

    if (position == 1)
    {
        newNode->next = head;
        head->previous = newNode;
    }
}

int main()
{
    int countNodes, firstData;
    cout << "Enter node count: ";
    cin >> countNodes;
    cout << "Enter node data: ";
    cin >> firstData;
    auto node1 = new Node(firstData);
    auto head = node1;

    createNodes(countNodes - 1, head);
    displayLL(head);
    cout << endl;

    // * ======================= * //
    //   &  Insert at the head
    // * ======================= * //
    // insertAtHead(head);

    // * ======================= * //
    //   &  Insert at the tail
    // * ======================= * //
    // insertAtTail(head);
    // insertAtTail2(head);

    // * ======================= * //
    // & insert at position
    // * ======================= * //
    // insertAtPosition(head, 5, 777);
    insertAtPosition2(head, 3, 777);

    return 0;
}