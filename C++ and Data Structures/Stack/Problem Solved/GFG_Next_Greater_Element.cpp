/**
 * @file            GFG_Next_Greater_Element.cpp
 * @author          Subodh Chandra Shil
 * @resources:      https://practice.geeksforgeeks.org/problems/next-larger-element-1587115620/1?
 */

#include <bits/stdc++.h>
using namespace std;

/// Optimized solution
class Solution
{
public:
    vector<int> nextLargerElement(vector<int> &arr)
    {
        int n = arr.size();
        vector<int> result(n, -1);
        stack<int> st;

        st.push(arr[n - 1]);
        /// last element has not greater element hence -1
        result[n - 1] = -1;

        for (int i = n - 2; i >= 0; --i)
        {
            if (st.top() > arr[i])
            {
                int save = arr[i];
                result[i] = st.top();
                st.push(save);
            }
            else
            {
                while (!st.empty())
                {
                    if (arr[i] >= st.top())
                        st.pop();
                    else
                        break;
                }

                if (!st.empty())
                    result[i] = st.top();

                st.push(arr[i]);
            }
        }

        return result;
    }
};

int main()
{

    return 0;
}