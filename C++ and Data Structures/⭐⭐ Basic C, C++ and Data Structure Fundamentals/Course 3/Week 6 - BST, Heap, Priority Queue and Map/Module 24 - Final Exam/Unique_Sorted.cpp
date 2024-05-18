#include <bits/stdc++.h>
using namespace std;

void ans()
{
    int n;
    cin >> n;
    set<int, greater<int>> st;

    while (n--)
    {
        int x;
        cin >> x;
        st.insert(x);
    }

    for (auto i : st)
    {
        cout << i << " ";
    }

    cout << endl;
}

void ans2()
{
    int n;
    cin >> n;
    set<int> st;
    vector<int> v;

    while (n--)
    {
        int x;
        cin >> x;
        st.insert(x);
    }

    for (auto it = st.begin(); it != st.end(); ++it)
    {
        v.push_back(*it);
    }

    reverse(v.begin(), v.end());
    for (auto i : v)
        cout << i << " ";

    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ans2();
    }
    return 0;
}