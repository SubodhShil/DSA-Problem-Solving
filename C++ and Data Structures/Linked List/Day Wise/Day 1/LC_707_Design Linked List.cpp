/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://leetcode.com/problems/design-linked-list/
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
    Node *back;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->back = nullptr;
        this->next = nullptr;
    }

    Node(int data, Node *next, Node *back)
    {
        this->data = data;
        this->back = back;
        this->next = next;
    }
};

class MyLinkedList
{
public:
    Node *head;
    int size = 0;

    MyLinkedList()
    {
        head = nullptr;
        Node *it = head;

        while (it)
        {
            ++size;
            it = it->next;
        }
    }

    int get(int index)
    {
        if (index < 0 || index >= size)
            return -1;

        Node *it = head;
        for (int i = 0; i < index; ++i)
        {
            it = it->next;
        }

        return it->data;
    }

    void addAtHead(int val)
    {
        Node *newNode = new Node(val);

        if (head)
        {
            newNode->next = head;
            head->back = newNode;
        }

        head = newNode;
        ++size;
    }

    void addAtTail(int val)
    {

        if (!head)
        {
            addAtHead(val);
            return;
        }

        Node *it = head;
        while (it->next)
        {
            it = it->next;
        }

        Node *newNode = new Node(val);
        it->next = newNode;
        newNode->back = it;
        ++size;
    }

    void addAtIndex(int index, int val)
    {
        if (index > size)
            return;

        if (index == 0)
        {
            addAtHead(val);
            return;
        }

        if (index == size)
        {
            addAtTail(val);
            return;
        }

        Node *newNode = new Node(val);
        Node *it = head;
        for (int i = 0; i < index - 1; ++i)
        {
            it = it->next;
        }

        Node *remain = it->next;
        it->next = newNode;
        newNode->back = it;
        newNode->next = remain;
        remain->back = newNode;
        ++size;
    }

    void deleteAtIndex(int index)
    {
        if (index >= size)
            return;

        if (index == 0)
        {
            Node *temp = head;
            head = head->next;
            if (head)
                head->back = nullptr;
            delete temp;
            --size;
            return;
        }

        Node *it = head;
        for (int i = 0; i < index - 1; ++i)
        {
            it = it->next;
        }

        Node *toDelete = it->next;
        it->next = toDelete->next;
        if (toDelete->next)
        {
            toDelete->next->back = it;
        }
        delete toDelete;
        --size;
    }
};

int32_t main()
{

    return 0;
}