/**
 * @file        LC_234_Palindrome_Linked_List.cpp
 * @author      Subodh Chandra Shil
 * @date        2023-06-22
 * @resources:  https://youtu.be/-DtNInqFUXs
 *              https://leetcode.com/problems/palindrome-linked-list/
 */

#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution1
{
public:
    /// function to copy the values of linked list to the new list
    void insert_tail(ListNode *&head, ListNode *&tail, int val)
    {
        ListNode *newNode = new ListNode(val);

        if (head == nullptr)
        {
            head = newNode;
            tail = newNode;
            return;
        }

        tail->next = newNode;
        tail = tail->next;
    }

    /// reversing the linked list
    void reverse(ListNode *&head, ListNode *it)
    {
        if (it->next == nullptr)
        {
            head = it;
            return;
        }

        reverse(head, it->next);
        it->next->next = it;
        it->next = nullptr;
    }

    /// checks whether or not palindrome list
    bool isPalindrome(ListNode *head)
    {
        ListNode *newHead = nullptr;
        ListNode *newTail = nullptr;
        ListNode *it = head;

        while (it != nullptr)
        {
            insert_tail(newHead, newTail, it->val);
            it = it->next;
        }

        reverse(newHead, newHead);

        while (newHead != nullptr && head != nullptr)
        {
            if (newHead->val != head->val)
                return false;

            newHead = newHead->next;
            head = head->next;
        }

        return true;
    }
};

/// Optimized solution
class Solution2
{
    /// find the middle, reverse from middle + 1 till the last node
    /// place two pointer, pointer at head and another at middle + 1
public:
    bool isPalindrome(ListNode *head)
    {
        /// edge case
        if (head == nullptr || head->next == nullptr)
            return true;

        /// finding the middle node
        ListNode *slow = head, *fast = head;
        while (fast != nullptr && fast->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        /// reversing the linked list
        ListNode *midPointer = slow;
        ListNode *prev = nullptr, *curr = midPointer;
        while (curr)
        {
            ListNode *remain = curr->next;
            curr->next = prev;
            prev = curr;
            curr = remain;
        }

        /// dividing the list into 2 parts and check if palindrome
        ListNode *left = head, *right = prev;
        while (right != nullptr)
        {
            if (right->val != left->val)
                return false;

            left = left->next;
            right = right->next;
        }

        return true;
    }
};

int main()
{

    return 0;
}