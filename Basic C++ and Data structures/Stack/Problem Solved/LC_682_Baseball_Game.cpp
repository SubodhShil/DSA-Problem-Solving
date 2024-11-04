/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://leetcode.com/problems/baseball-game/
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k, m, a, b, c;

class Solution
{
public:
    int calPoints(vector<string> &operations)
    {
        stack<int> st;
        int sum = 0;

        for (auto i : operations)
        {
            if (i == "C")
            {
                sum -= st.top();
                st.pop();
            }
            else if (i == "D")
            {
                int current = st.top() * 2;
                sum += current;
                st.push(current);
            }
            else if (i == "+")
            {
                int value1 = st.top();
                st.pop();
                int value2 = st.top();
                st.push(value1);
                sum += value1 + value2;
                st.push(value1 + value2);
            }
            else
            {
                int number = stoi(i);
                sum += number;
                st.push(number);
            }
        }

        return sum;
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}