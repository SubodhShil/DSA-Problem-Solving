#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

class LL
{
public:
    int data;
    LL *next = nullptr;

    LL(int data, LL *next) : data(data), next(next) {}

    void printLL(LL *head)
    {
        while (head)
        {
            cout << head->data << " ";
            head = head->next;
        }
        cout << endl;
    }
};

LL *createLL(int size)
{
    LL *head = nullptr, *itr = nullptr;

    for (int i = 1; i <= size; ++i)
    {
        int data = 0;
        cout << "Enter data for node " << i << ": ";
        cin >> data;
        LL *newNode = new LL(data, nullptr);

        if (!head)
        {
            head = newNode;
            itr = head;
        }
        else
        {
            itr->next = newNode;
            itr = itr->next;
        }
    }

    return head;
}

int32_t main()
{
    cout << "Enter size for the linked list: ";
    int sz = 0;
    cin >> sz;

    LL *myList = createLL(sz);
    myList->printLL(myList);

    return 0;
}