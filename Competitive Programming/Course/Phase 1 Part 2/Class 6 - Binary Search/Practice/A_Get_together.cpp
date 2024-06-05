/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://codeforces.com/edu/course/2/lesson/6/3/practice/contest/285083/problem/A
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int n, k, m, a, b, c;

const int N = 1e5 + 9;
const double MAX_TIME = 1e9;
int cur_pos[N], x[N];

double segment_left[N];
double segment_right[N];

bool ok(double t)
{
    for (int i = 1; i <= n; ++i)
    {
        segment_left[i] = cur_pos[i] - t * x[i];
        segment_right[i] = cur_pos[i] + t * x[i];
    }

    double segment_left_max = -1e40;
    for (int i = 1; i <= n; ++i)
    {
        segment_left_max = max(segment_left_max, segment_left[i]);
    }

    double segment_right_min = 1e40;
    for (int i = 1; i <= n; ++i)
    {
        segment_right_min = min(segment_right_min, segment_right[i]);
    }

    return segment_left_max <= segment_right_min;
}

void ans()
{
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> cur_pos[i] >> x[i];
    }

    double l = 0, r = MAX_TIME, ans = 0;
    int iterations = 100;

    while (iterations--)
    {
        double mid = l + (r - l) / 2;
        if (ok(mid))
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
    int p = 1;
    while (p--)
        ans();

    return 0;
}