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

    int size()
    {
        return v.size();
    }

    bool empty()
    {
        return (v.size() == 0) ? true : false;
    }

    void top()
    {
        if (v.size() == 0)
            cout << "Stack is empty\n";
        else
            cout << v.back() << endl;
    }

    void pop()
    {
        if (v.size() == 0)
            cout << "Stack is empty\n";
        else
            v.pop_back();
    }
};

int main()
{

    return 0;
}
