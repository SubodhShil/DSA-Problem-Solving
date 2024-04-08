#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    priority_queue<long long, vector<long long>, greater<long long>> pq;

    for (int i = 1; i <= n; ++i)
    {
        long long x;
        cin >> x;
        pq.push(x);
    }

    int q;
    cin >> q;

    while (q--)
    {
        int t;
        cin >> t;

        if (t == 0)
        {
            long long c;
            cin >> c;
            pq.push(c);
            cout << pq.top() << endl;
        }
        else if (t == 1)
        {
            if (pq.empty())
                cout << "Empty\n";
            else
                cout << pq.top() << endl;
        }
        else
        {
            if (!pq.empty())
                pq.pop();
            if (pq.empty())
                cout << "Empty\n";
            else
                cout << pq.top() << endl;
        }
    }

    return 0;
}