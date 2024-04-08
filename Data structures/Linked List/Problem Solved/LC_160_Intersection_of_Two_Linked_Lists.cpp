/**
 * @file        LC_160_Intersection_of_Two_Linked_Lists.cpp
 * @author      Subodh Chandra Shil
 */

#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution1
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        set<ListNode *> nodes;
        ListNode *it1 = headA, *it2 = headB;
        while (it1)
        {
            nodes.insert(it1);
            it1 = it1->next;
        }

        while (it2)
        {
            if (nodes.count(it2))
            {
                return it2;
            }
            else
                nodes.insert(it2);
            it2 = it2->next;
        }

        return NULL;
    }
};

class Solution2
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        ListNode *a = headA, *b = headB;
        while (a != b)
        {
            if (!a)
                a = headB;
            else
                a = a->next;

            if (!b)
                b = headA;
            else
                b = b->next;
        }

        return a;
    }
};

int main()
{

    return 0;
}