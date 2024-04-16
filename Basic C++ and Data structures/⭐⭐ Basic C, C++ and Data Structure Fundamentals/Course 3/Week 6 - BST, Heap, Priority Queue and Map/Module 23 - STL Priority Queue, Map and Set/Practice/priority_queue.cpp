#include <bits/stdc++.h>
using namespace std;

void display(priority_queue<int, vector<int>, greater<int>> pq)
{
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }

    cout << endl;
}

int main()
{
    /// max heap priority queue
    // priority_queue<int> pq;

    /// min heap priority queue
    priority_queue<int, vector<int>, greater<int>> pq;
    while (1)
    {
        int command;
        cin >> command;

        /// if command is 0 then input value
        if (command == 0)
        {
            int x;
            cin >> x;
            pq.push(x); /// push, T.C => O(log N)
        }

        /// command 1 is deleting value
        else if (command == 1)
        {
            pq.pop();
        }

        /// command 2 is check the top
        else if (command == 2)
        {
            cout << pq.top() << endl;
        }

        else
            break;
    }

    /// display
    display(pq);

    return 0;
}