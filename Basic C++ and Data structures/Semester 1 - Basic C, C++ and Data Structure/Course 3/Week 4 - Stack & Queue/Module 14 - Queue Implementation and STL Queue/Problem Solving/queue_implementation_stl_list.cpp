#include <bits/stdc++.h>
using namespace std;

class Queue
{
public:
    int size = 0;
    list<int> ll;

    void push(int val)
    {
        ll.push_back(val);
        ++size;
    }

    void pop()
    {
        if (ll.empty())
        {
            cout << "Queue is empty\n";
            return;
        }

        ll.pop_front();
        --size;
    }

    void front()
    {
        if (ll.empty())
        {
            cout << "Queue is empty, no front value available\n";
            return;
        }

        cout << ll.front() << " ";
    }

    bool empty()
    {
        return ll.empty();
    }
};

int main()
{
    Queue qu;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        qu.push(x);
    }

    /// display
    while (!qu.empty())
    {
        qu.front();
        qu.pop();
    }

    qu.front();

    return 0;
}