#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

// N.B: Linked list is circular when one the previous node is re-appears.
// According to the algorithm the slow pointer will iterate one node internval and fast pointer will twice node interval.
// Enter a while loop that continues until either fast becomes null or fast.next becomes null. If this occurs that means the linked list is a circular linked list.
// On the other hand, if the slow and fast pointer meets at a point indicates a circular linked list.

class Solution
{
public:
    bool isCircular(Node *head)
    {
        if (!head)
            return true;

        Node *slow = head, *fast = head;

        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;

            if (fast == slow)
                return true;
        }

        return false;
    }
};

int main()
{

    return 0;
}