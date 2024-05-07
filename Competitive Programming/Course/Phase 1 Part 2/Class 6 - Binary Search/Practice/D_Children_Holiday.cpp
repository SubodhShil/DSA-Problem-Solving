/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/D
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

const int MAX_TIME = 1e7, N = 1005;
int required_balloons, n, k, m, a, b, c;
int t[N], z[N], y[N];
vector<int> allBalloons;

bool ok(int total_time)
{
    int total_balloons = 0;
    int balloons_left = required_balloons;

    for (int i = 1; i <= n; ++i)
    {
        int block_time = t[i] * z[i] + y[i];
        int count_blocks = total_time / block_time;
        int balloons = count_blocks * z[i];
        int remain = total_time % block_time;
        balloons += min(z[i], remain / t[i]);
        total_balloons += balloons;

        allBalloons.push_back(min(balloons_left, balloons));
        balloons_left -= allBalloons.back();
    }

    return total_balloons >= required_balloons;
}

void ans()
{
    cin >> required_balloons >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> t[i] >> z[i] >> y[i];
    }

    int l = 0, r = MAX_TIME, ans = 0;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    allBalloons.clear();
    ok(ans);
    cout << ans << endl;
    for (auto i : allBalloons)
        cout << i << " ";
    cout << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while (t--)
        ans();

    return 0;
}