/*
                            ॐ JAY JAY SRI RAM ॐ

    * Fibonacci with DP
    * https://leetcode.com/problems/fibonacci-number/
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
    int f[100];
    bool visited[100];

    int fibo(int n)
    {
        if (n <= 1)
            return n;

        /// check if already visited
        if (visited[n])
            return f[n];

        /// if not visited then just do computation in the array
        f[n] = fibo(n - 1) + fibo(n - 2);
        visited[n] = true;
        return f[n];
    }

    int fib(int n)
    {
        return fibo(n);
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        cin >> a;
        cout << fibo(a) << endl;
    }

    return 0;
}