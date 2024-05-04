/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/E
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define double long double
#define endl "\n"
double n, k, m, a, b, c;

double f(double x)
{
    return x * x + sqrt(x);
}

void ans()
{
    cin >> n;
    double l = 0, r = 1e6, ans = 0;

    while (r - l >= 1e-7)
    {
        double mid = l + (r - l) / 2;
        if (f(mid) >= n)
        {
            ans = mid;
            r = mid;
        }
        else
            l = mid;
    }

    cout << fixed << setprecision(10) << ans << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while (t--)
        ans();

    return 0;
}