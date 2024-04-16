/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://vjudge.net/problem/codechef-evenpsum
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, x;

#define EVEN_ODD_COUNT(n, evenCnt, oddCnt) \
    evenCnt = (n / 2),                     \
    oddCnt = (n & 1) ? (n / 2) + 1 : (n / 2)

void ans()
{
    cin >> n >> x;
    int e1, o1, e2, o2;

    EVEN_ODD_COUNT(n, e1, o1);
    EVEN_ODD_COUNT(x, e2, o2);

    /*
        even + even = even
        odd + odd = even
     */

    cout << e1 * e2 + o1 * o2 << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
        ans();

    return 0;
}