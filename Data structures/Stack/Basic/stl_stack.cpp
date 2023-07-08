#include <bits/stdc++.h>
using namespace std;

void practice1()
{
    stack<int> st;
    st.push(10);
    st.push(20);

    cout << st.top() << endl;
    if (!st.empty())
        st.pop();
    cout << st.top() << endl;
    if (!st.empty())
        st.pop();
    if (!st.empty())
        cout << st.top() << endl;
    else
        cout << "Empty\n";
}

void practice2()
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

    cout << "-------------------------\n";
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
}

int main()
{
    practice2();

    return 0;
}