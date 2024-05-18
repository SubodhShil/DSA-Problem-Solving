#include <bits/stdc++.h>
using namespace std;

class MyQueue
{
public:
    stack<int> primary;

    MyQueue()
    {
    }

    void push(int x)
    {
        return primary.push(x);
    }

    int pop()
    {
        /// deleting the last element of will make the stack
        /// behave lilke queue
        stack<int> secondary;
        int val;
        while (!primary.empty())
        {
            val = primary.top();
            primary.pop();
            if (!primary.empty())
            {
                secondary.push(val);
            }
        }

        while (!secondary.empty())
        {
            primary.push(secondary.top());
            secondary.pop();
        }

        return val;
    }

    int peek()
    {
        stack<int> secondary = primary;
        int val;
        while (!secondary.empty())
        {
            val = secondary.top();
            secondary.pop();
        }

        return val;
    }

    bool empty()
    {
        return primary.empty();
    }
};

int main()
{

    return 0;
}