#include <bits/stdc++.h>
using namespace std;

void print(stack<int> &st)
{
    if (st.empty())
        return;

    /// we need to store the value, cause in each iteration
    /// current value get deleted
    int val = st.top();

    st.pop();
    print(st);
    cout << val << " ";
}

int main()
{
    stack<int> st;
    int n;
    cin >> n;

    while (n--)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    print(st);

    return 0;
}