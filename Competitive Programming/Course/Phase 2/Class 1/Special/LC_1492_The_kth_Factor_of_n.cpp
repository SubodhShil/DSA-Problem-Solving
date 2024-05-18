/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://leetcode.com/problems/the-kth-factor-of-n/description/
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k, m, a, b, c;

class Solution1
{
public:
    int kthFactor(int n, int k)
    {
        priority_queue<int, vector<int>, greater<int>> pq;

        for (int i = 1; i * i <= n; ++i)
        {
            if (n % i == 0)
            {
                pq.push(i);
                if (n / i != i)
                    pq.push(n / i);
            }
        }

        if (pq.size() < k)
            return -1;

        int res = 0;
        for (int i = 1; i <= k; ++i)
        {
            res = pq.top();
            pq.pop();
        }

        return res;
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)

        return 0;
}