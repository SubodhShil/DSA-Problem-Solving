#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

class Solution
{
public:
    int getCount(struct Node *head)
    {
        int cnt = 0;
        Node *it = head;

        while (it)
        {
            it = it->next;
            ++cnt;
        }

        return cnt;
    }
};

int main()
{
    return 0;
}