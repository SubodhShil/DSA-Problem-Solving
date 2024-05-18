/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://www.geeksforgeeks.org/problems/largest-prime-factor2601/1
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int n, k, m, a, b, c;

long long int largestPrimeFactor(int N)
{
    long long int n = N;
    priority_queue<long long int> pq;
    while (n % 2 == 0)
        pq.push(2), n /= 2;

    for (long long int i = 3; i * i <= n; i += 2)
        while (n % i == 0)
            pq.push(i), n /= i;

    if (n > 2)
        pq.push(n);

    return pq.top();
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while (t--)
        cout << largestPrimeFactor(24) << endl;

    return 0;
}