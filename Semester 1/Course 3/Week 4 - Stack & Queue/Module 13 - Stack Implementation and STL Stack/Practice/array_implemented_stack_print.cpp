#include <bits/stdc++.h>
using namespace std;

class Stack
{
private:
    vector<int> v;

public:
    /// stack operations
    void push(int val)
    {
        v.push_back(val);
    }

    int stackSize()
    {
        return v.size();
    }

    bool empty()
    {
        return (stackSize() == 0) ? true : false;
    }

    void top()
    {
        if (stackSize() == 0)
            cout << "Stack is empty\n";
        else
            cout << v.back() << endl;
    }

    void pop()
    {
        if (stackSize() == 0)
            cout << "Stack is empty\n";
        else
            v.pop_back();
    }
};

int main()
{
    Stack st;

    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        int val;
        cin >> val;

        st.push(val);
    }

    while (!st.empty())
    {
        st.top();
        st.pop();
    }

    return 0;
}
