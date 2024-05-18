/**
 * @file        Q2_check_duplicate_LL.cpp
 * @author      Subodh Chandra Shil
 * @date        2023-06-15
 * @resources:  Take a singly linked list as input and check if the linked list contains any duplicate value.
 *              You can assume that the maximum value will be 100.
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

void inputArray(Node *&head)
{
    Node *it = nullptr;
    int cnt = 1;

    while (1)
    {
        int element;
        cin >> element;
        if (element == -1)
            break;

        Node *node = new Node(element);

        if (cnt == 1)
        {
            head = node;
            it = node;
            ++cnt;
        }

        else
        {
            it->nextNode = node;
            it = it->nextNode;
        }
    }
}

/// Time complexity: O(N*N)
void duplicateCheck(Node *head)
{
    bool isDuplicate = false;

    for (Node *it1 = head; it1->nextNode != nullptr; it1 = it1->nextNode)
    {
        for (Node *it2 = it1->nextNode; it2 != nullptr; it2 = it2->nextNode)
        {
            if (it1->data == it2->data)
            {
                isDuplicate = true;
                break;
            }
        }

        if (isDuplicate)
            break;
    }

    (isDuplicate) ? cout << "YES\n" : cout << "NO\n";
}

/// Time complexity: O(n long n)
void duplicateCheck2(Node *head)
{
    bool isDuplicate = false;

    std::unordered_set<int> seen;

    for (Node *it = head; it != nullptr; it = it->nextNode)
    {
        if (seen.count(it->data))
        {
            isDuplicate = true;
            break;
        }

        seen.insert(it->data);
    }

    (isDuplicate) ? cout << "YES\n" : cout << "NO\n";
}

void printLL(Node *head)
{
    Node *it = head;
    while (it != nullptr)
    {
        cout << it->data << ' ';
        it = it->nextNode;
    }

    cout << endl;
}

/// Time complexity: O(N*N)
void duplicateCheck3(Node *head)
{
    bool isDuplicate = false;
    unordered_map<int, int> mp;

    for (Node *it = head; it != nullptr; it = it->nextNode)
    {
        mp[it->data]++;
    }

    for (auto i : mp)
    {
        if (i.second > 1)
        {
            isDuplicate = true;
            break;
        }
    }

    (isDuplicate) ? cout << "YES\n" : cout << "NO\n";
}

int main()
{
    Node *head = nullptr;
    inputArray(head);
    printLL(head);
    // duplicateCheck(head);
    // duplicateCheck2(head);
    duplicateCheck3(head);

    return 0;
}
