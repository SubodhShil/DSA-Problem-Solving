#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *nextNode, *prevNode;

    Node(int data)
    {
        this->data = data;
        this->nextNode = nullptr;
        this->prevNode = nullptr;
    }

    int DLLSize(Node *it);
    void insertAtPosition(Node *&head, Node *&tail);
    void deleteNode(Node *&head, Node *&tail);
    void traverseRight(Node *it);
    void traverseLeft(Node *it);
};

int Node ::DLLSize(Node *head)
{
    int cnt = 0;
    while (head != nullptr)
    {
        ++cnt;
        head = head->nextNode;
    }

    return cnt;
}

void Node ::insertAtPosition(Node *&head, Node *&tail)
{
    int val, pos;
    cout << "\nNew node data: ";
    cin >> val;
    cout << "Enter position: ";
    cin >> pos;

    Node *newNode = new Node(val);
    if (pos == 1 || pos == 0)
    {
        newNode->nextNode = head;
        head->prevNode = newNode;
        /// update the head pointer
        head = newNode;
        return;
    }

    if (pos > head->DLLSize(head))
    {
        tail->nextNode = newNode;
        newNode->prevNode = tail;

        /// update the tail
        tail = newNode;

        return;
    }

    Node *it = head;

    for (int i = 1; i <= pos - 2; ++i)
    {
        it = it->nextNode;
    }

    Node *nextOne = it->nextNode, *previousOne = it;

    /// new node
    newNode->nextNode = nextOne;
    newNode->prevNode = previousOne;

    /// previous node of new node
    previousOne->nextNode = newNode;

    /// next node of new node
    nextOne->prevNode = newNode;
}

void Node::deleteNode(Node *&head, Node *&tail)
{
    int pos;
    cout << "Enter position to delete: ";
    cin >> pos;

    Node *it = head;

    /// delete head node
    if (pos == 1 || pos == 0)
    {
        Node *temp = head;
        head = head->nextNode;
        head->prevNode = nullptr;
        delete temp;

        return;
    }

    if (head == nullptr || pos > DLLSize(head))
    {
        cout << "Invalid\n";
        return;
    }

    /// delete tail node
    if (pos == DLLSize(head))
    {
        Node *temp = tail;
        tail = tail->prevNode;
        tail->nextNode = nullptr;
        delete temp;
        return;
    }

    for (int i = 1; i <= pos - 1; ++i)
    {
        it = it->nextNode;
    }

    Node *deleteNode = it->nextNode;
    it->nextNode = deleteNode->nextNode;
    deleteNode->nextNode->prevNode = it;
    delete deleteNode;
}

void Node::traverseRight(Node *it)
{
    while (it != nullptr)
    {
        if (it->nextNode == nullptr)
            cout << it->data << ' ';
        else
            cout << it->data << "->";

        it = it->nextNode;
    }
}

void Node::traverseLeft(Node *it)
{
    while (it != nullptr)
    {
        if (it->prevNode == nullptr)
            cout << it->data << ' ';
        else
            cout << it->data << "->";

        it = it->prevNode;
    }
}

int main()
{
    Node *head = nullptr;
    Node *tail = nullptr;
    Node *it = nullptr;

    int nodeCnt = 0;
    cout << "Enter node count: ";
    cin >> nodeCnt;

    for (int i = 1; i <= nodeCnt; ++i)
    {
        int value = 0;
        cout << "Enter value: ";
        cin >> value;
        Node *temp = new Node(value);

        if (i == 1)
        {
            head = temp;
            it = temp;
            tail = temp;
        }
        else
        {
            if (i == nodeCnt)
                tail = temp;

            temp->prevNode = it;
            it->nextNode = temp;
            it = temp;
        }
    }

    /// display
    it->traverseRight(head);
    // cout << endl;
    // it->traverseLeft(tail);

    /// insert at position
    // it->insertAtPosition(head, tail);
    // it->traverseRight(head);
    // cout << endl;
    // it->traverseLeft(tail);

    cout << "\nSize is: " << it->DLLSize(head) << endl;
    it->deleteNode(head, tail);
    it->traverseRight(head);
    cout << endl;
    it->traverseLeft(tail);

    return 0;
}