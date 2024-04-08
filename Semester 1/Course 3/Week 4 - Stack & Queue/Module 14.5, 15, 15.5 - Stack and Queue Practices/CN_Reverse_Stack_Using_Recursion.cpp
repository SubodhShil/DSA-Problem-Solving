/**
 * @file            CN_Reverse_Stack_Using_Recursion.cpp
 * @author          Subodh Chandra Shil
 * @resources:      https://www.codingninjas.com/studio/problems/reverse-stack-using-recursion_631875
 */

#include <bits/stdc++.h>
using namespace std;

class Solution1
{
public:
    void reverseStack(stack<int> &st)
    {
        if (st.empty())
            return;

        int ele = st.top();
        st.pop();
        reverseStack(st);

        stack<int> secondary;
        while (!st.empty())
        {
            secondary.push(st.top());
            st.pop();
        }
        secondary.push(ele);

        while (!secondary.empty())
        {
            st.push(secondary.top());
            secondary.pop();
        }
    }
};

int main()
{

    return 0;
}