#include <bits/stdc++.h>
using namespace std;

void stackReversePrint(stack<char> &st)
{
    if (st.empty())
        return;
    char ele = st.top();
    st.pop();
    stackReversePrint(st);
    cout << ele;
}

void solve()
{
    int n;
    cin >> n;
    stack<char> st;

    while (n--)
    {
        char ch;
        cin >> ch;

        /// for the first character
        if (st.empty())
        {
            st.push(ch);
        }
        else if (ch == st.top())
        {
            st.pop();
        }
        else
        {
            if ((ch == 'B' && st.top() == 'R') || (ch == 'R' && st.top() == 'B'))
            {
                st.pop();
                if (!st.empty() && st.top() == 'P')
                    st.pop();
                else
                    st.push('P');
            }
            else if ((ch == 'G' && st.top() == 'R') || (ch == 'R' && st.top() == 'G'))
            {
                st.pop();
                if (!st.empty() && st.top() == 'Y')
                    st.pop();
                else
                    st.push('Y');
            }
            else if ((ch == 'G' && st.top() == 'B') || (ch == 'B' && st.top() == 'G'))
            {
                st.pop();
                if (!st.empty() && st.top() == 'C')
                    st.pop();
                else
                    st.push('C');
            }
            else
                st.push(ch);
        }
    }

    stackReversePrint(st);
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}