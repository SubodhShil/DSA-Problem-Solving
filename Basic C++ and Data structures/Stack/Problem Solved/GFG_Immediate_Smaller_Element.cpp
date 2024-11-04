/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://www.geeksforgeeks.org/problems/immediate-smaller-element1142/1?
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
    void immediateSmaller(vector<int> &arr, int n)
    {
        stack<int> st;
        st.push(-1);

        for (int i = n - 1; i >= 0; --i)
        {
            int current = arr[i];
            if (arr[i] > st.top())
                arr[i] = st.top();
            else
                arr[i] = -1;

            st.push(current);
        }
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}