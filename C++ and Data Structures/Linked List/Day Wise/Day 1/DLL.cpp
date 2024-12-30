/*
                            ॐ JAY JAY SRI RAM ॐ

    * Doubly Linked List Implementation
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

class Node
{
public:
    int data;
    Node *next;
    Node *back;

    Node(int data, Node *next, Node *back)
    {
        this->data = data;
        this->next = next;
        this->back = back;
    }

    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
        this->back = back;
    }
};

Node *createList(vector<int> &arr)
{
    Node *head = new Node(arr[0]), *prev = head;

    for (int i = 1; i < arr.size(); ++i)
    {
        Node *newNode = new Node(arr[i], nullptr, prev);
        prev->next = newNode;
        newNode->back = prev;
        prev = newNode;
    }

    return head;
}

void printDLL(Node *head)
{
    while (head)
    {
        if (head->next)
            cout << head->data << "->";
        else
            cout << head->data;

        head = head->next;
    }
    cout << endl;
}

int32_t main()
{
    vector<int> arr = {10, 20, 30, 40, 50};
    Node *myList = createList(arr);
    printDLL(myList);

    return 0;
}
