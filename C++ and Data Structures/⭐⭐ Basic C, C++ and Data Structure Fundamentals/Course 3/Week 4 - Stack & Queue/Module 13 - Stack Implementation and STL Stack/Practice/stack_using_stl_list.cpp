#include <bits/stdc++.h>
using namespace std;

class Stack
{
private:
    list<int> ll;

public:
    /// operations
    void push(int val)
    {
        ll.push_back(val);
    }

    int stackSize()
    {
        return ll.size();
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
            cout << ll.back() << endl;
    }

    void pop()
    {
        if (stackSize() == 0)
            cout << "Stack is empty\n";
        else
            ll.pop_back();
    }
};

int main()
{
    Stack st;
    int n;
    cin >> n;

    while (n--)
    {
        int val;
        cin >> val;
        st.push(val);
    }

    cout << "-------------------------\n";
    while (!st.empty())
    {
        st.top();
        st.pop();
    }

    return 0;
}