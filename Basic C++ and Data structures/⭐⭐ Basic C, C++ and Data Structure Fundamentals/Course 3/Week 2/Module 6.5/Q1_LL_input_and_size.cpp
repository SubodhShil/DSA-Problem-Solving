/**
 * @file        Q1_LL_input_and_size.cpp
 * @author      Subodh Chandra Shil
 * @date        2023-06-15
 * @question:   Take a singly linked list as input and print the size of the linked list.
 */

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

int main()
{
    Node *head = nullptr;
    Node *it = nullptr;
    int cnt = 1;
    int size = 0;

    while (1)
    {
        int element;
        cin >> element;
        if (element == -1)
            break;

        Node *node = new Node(element);
        ++size;

        if (cnt == 1)
        {
            head = node;
            it = node;
            ++cnt;
        }

        else
        {
            it->nextNode = node;
            it = node;
        }
    }
    cout << "Size: " << size << endl;

    return 0;
}