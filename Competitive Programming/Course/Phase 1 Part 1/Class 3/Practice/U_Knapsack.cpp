#include <bits/stdc++.h>
using namespace std;
#define int long long

int N, max_weight;
vector<pair<int, int>> items(30);
int result = INT32_MIN;

void ans(int i = 0, int w = 0, int val = 0)
{
    if (i >= N)
    {
        if (w <= max_weight)
            result = max(result, val);
        return;
    }

    // if take
    ans(i + 1, w + items[i].first, val + items[i].second);

    // if not take
    ans(i + 1, w, val);
}

int32_t main()
{
    cin >> N >> max_weight;

    for (int i = 0; i < N; ++i)
    {
        int x, y;
        cin >> x >> y;
        /// weight
        items[i].first = x;
        /// value
        items[i].second = y;
    }

    ans();
    cout << result << endl;

    return 0;
}