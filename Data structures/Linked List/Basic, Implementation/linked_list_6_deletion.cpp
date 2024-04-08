#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *nextNode;
    Node(int data = 0, Node *nextNode = nullptr)
    {
        this->data = data;
        this->nextNode = nextNode;
    }

    ~Node()
    {
        int value = this->data;
        if (this->nextNode != nullptr)
        {
            delete nextNode;
            this->nextNode = nullptr;
        }
    }
};

void displayLL(auto head)
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->nextNode;
    }
}

void createNodes(int countNodes, auto head)
{
    while (countNodes--)
    {
        int dataValue;
        cin >> dataValue;
        auto nextNodeElement = new Node(dataValue);
        head->nextNode = nextNodeElement;
        head = head->nextNode;
    }
}

void deleteNode(int position, Node *&head)
{
    if (position == 1)
    {
        auto temp = head;
        head = head->nextNode;
        temp->nextNode = nullptr;
        delete temp;
    }

    else
    {
        Node *current = head;
        Node *previous = nullptr;
        int cnt = 1;
        while (cnt <= position)
        {
            previous = current;
            current = current->nextNode;
            cnt++;
        }

        previous->nextNode = current->nextNode;
        current->nextNode = nullptr;
        delete current;
    }
}

/*
^ Delete by value
 */

void deleteNodeByValue(int val, Node *&head)
{

    Node *toDelete = nullptr;

    if (val == head->data)
    {
        toDelete = head;
        head = head->nextNode;

        toDelete->nextNode = nullptr;
        delete toDelete;

        return;
    }

    else
    {
        Node *previous = head;
        Node *current = head->nextNode;

        while (val != current->data)
        {
            previous = current;
            current = current->nextNode;
        }
        previous->nextNode = current->nextNode;
        current->nextNode = nullptr;

        delete current;
        return;
    }
    cout << "There is no such value found in the linked list\n";
}

int main()
{
    int countNodes, firstData;
    cout << "Enter node count: ";
    cin >> countNodes;
    cout << "Enter node datas: ";
    cin >> firstData;
    auto node1 = new Node(firstData);

    //* head here
    auto head = node1;

    createNodes(countNodes - 1, head);

    //& linked list deletion
    // cout << "Enter delete position: ";
    // int DeletePos;
    // cin >> DeletePos;
    // deleteNode(DeletePos - 1, head);

    //& linked list deletion by value
    cout << "Enter delete value: ";
    int deleteElementValue;
    cin >> deleteElementValue;
    deleteNodeByValue(deleteElementValue, head);

    displayLL(head);

    return 0;
}