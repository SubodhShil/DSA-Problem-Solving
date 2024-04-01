/*
                            ॐ JAY JAY SRI RAM ॐ

    * Given an array of n integers, find the sum of a[i] x a[j] for all 1 <= i, j <= n
    * Author: Subodh Chandra Shil
    * Tag: observation

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;

void ans()
{
    cin >> n;
    vector<int> v(n, 0);
    int sum = 0, ans = 0;
    for (auto &x : v)
    {
        cin >> x;
        sum += x;
    }

    for (auto i : v)
    {
        ans += (i * sum);
    }
    cout << ans << endl;
}

int32_t main()
{
    int t = 1;
    while (t--)
        ans();

    return 0;
}

/*
Input:
3
3 4 1

Output:
64
 */