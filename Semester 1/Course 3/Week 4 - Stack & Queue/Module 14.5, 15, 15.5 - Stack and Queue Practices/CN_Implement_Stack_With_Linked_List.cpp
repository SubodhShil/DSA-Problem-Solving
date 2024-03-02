/**
 * @file        CN_Implement_Stack_With_Linked_List.cpp
 * @author      Subodh Chandra Shil
 */

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Stack
{
private:
    Node *head;
    Node *tail;
    int size;

public:
    Stack()
    {
        head = nullptr;
        tail = nullptr;
        size = 0;
    }

    // 1
    int getSize()
    {
        return size;
    }

    // 2
    bool isEmpty()
    {
        return (size == 0) ? true : false;
    }

    // 3
    void push(int data)
    {
        ++size;
        Node *newNode = new Node(data);
        if (head == nullptr)
        {
            head = newNode;
            tail = newNode;
            return;
        }

        tail->next = newNode;
        tail = tail->next;
    }

    // 4
    void pop()
    {
        if (head == nullptr)
        {
            return;
        }

        if (tail == head)
        {
            Node *del = head;
            head = nullptr;
            tail = nullptr;
            delete del;
            --size;
            return;
        }

        Node *it = head;
        while (1)
        {
            if (it->next == tail)
            {
                Node *del = tail;
                tail = it;
                tail->next = nullptr;
                delete del;
                --size;
                break;
            }

            it = it->next;
        }
    }

    // 5
    int getTop()
    {
        return (isEmpty()) ? -1 : tail->data;
    }
};

int main()
{

    return 0;
}