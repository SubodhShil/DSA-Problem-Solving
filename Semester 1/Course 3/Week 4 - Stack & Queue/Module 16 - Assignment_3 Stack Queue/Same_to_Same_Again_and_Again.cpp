#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    if (n != m)
    {
        cout << "NO\n";
        exit(0);
    }

    list<int> l1, l2;
    stack<int> st;
    queue<int> qu;

    /// stack and it's corresponding list (l1)
    while (n--)
    {
        int x;
        cin >> x;
        l1.push_back(x);
    }

    while (!l1.empty())
    {
        st.push(l1.front());
        l1.pop_front();
    }

    while (!st.empty())
    {
        l1.push_back(st.top());
        st.pop();
    }

    /// Queue and it's corresponding list (l2)
    while (m--)
    {
        int x;
        cin >> x;
        l2.push_back(x);
    }

    while (!l2.empty())
    {
        qu.push(l2.front());
        l2.pop_front();
    }

    while (!qu.empty())
    {
        l2.push_back(qu.front());
        qu.pop();
    }

    /// check
    bool isSame = true;

    if (l1 == l2)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
