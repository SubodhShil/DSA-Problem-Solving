/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://codeforces.com/edu/course/2/lesson/6/3/practice/contest/285083/problem/B
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k, m, a, b, c;

const int N = 1e5 + 9;
int v[N];

bool ok(int x)
{
    int cur_sum = 0;
    int segment_cnt = 1;
    for (int i = 0; i < n; ++i)
    {
        if (cur_sum + v[i] <= x)
        {
            cur_sum += v[i];
        }
        else
        {
            if (v[i] > x)
                return false;

            cur_sum = v[i];
            ++segment_cnt;
        }
    }
    return segment_cnt <= k;
}

void ans()
{
    cin >> n >> k;
    int total_sum = 0;
    int max_element = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
        total_sum += v[i];
        max_element = max(max_element, v[i]);
    }

    int l = max_element, r = total_sum;
    int answer = 0;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (ok(mid))
        {
            answer = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << answer << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while (t--)
        ans();

    return 0;
}