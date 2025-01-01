/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://leetcode.com/problems/valid-parentheses/
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;

        for (char ch : s)
        {
            if (ch == '(' or ch == '[' or ch == '{')
            {
                st.push(ch);
            }
            else
            {
                if (st.empty())
                    return false;
                if (ch == ')' and st.top() != '(')
                    return false;
                if (ch == ']' and st.top() != '[')
                    return false;
                if (ch == '}' and st.top() != '{')
                    return false;

                st.pop();
            }
        }

        return st.empty();
    }
};

int32_t main()
{
    return 0;
}