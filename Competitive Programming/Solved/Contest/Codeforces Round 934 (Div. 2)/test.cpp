/* #include <bits/stdc++.h>
using namespace std;

int main()
{
    int x = (1 ^ 5 ^ 3 ^ 4);
    int y = (2 ^ 6 ^ 3 ^ 4);
    cout << (x == y) << endl;

    return 0;
} */

#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
int power(int x, unsigned int y)
{
    int res = 1; // Initialize result

    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = res * x;

        // y must be even now
        y = y >> 1; // y = y/2
        x = x * x;  // Change x to x^2
    }
    return res;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n], b[n];
        map<int, int> m1, m2;
        vector<int> v1, v2, ans;
        vector<pair<int, int>> c1, c2;

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            m1[a[i]]++;
        }

        for (int i = 0; i < n; ++i)
        {
            cin >> b[i];
            m2[b[i]]++;
        }

        for (auto x : m1)
        {
            c1.push_back({x.second, x.first});
        }

        for (auto x : m2)
        {
            c2.push_back({x.second, x.first});
        }

        sort(c1.begin(), c1.end());
        sort(c2.begin(), c2.end());

        for (int i = c1.size() - 1; i >= 0; i--)
        {
            if (c1[i].first == c2[i].first && c1[i].first == 2)
            {
                v1.push_back(c1[i].second);
                v2.push_back(c2[i].second);
                v1.push_back(c1[i].second);
                v2.push_back(c2[i].second);
            }
        }

        if (v1.size() != 0)
        {
            for (int i = 0; i < 2 * k; ++i)
            {
                cout << v1[i] << " ";
            }

            cout << "\n";
            for (int i = 0; i < 2 * k; ++i)
            {
                cout << v2[i] << " ";
            }

            cout << "\n";
            continue;
        }

        for (int i = 0; i < n; ++i)
        {
            if (m2.find(a[i]) != m2.end())
            {
                v1.push_back(a[i]);
                v2.push_back(a[i]);
                m2.erase(a[i]);
            }
        }

        for (int i = 0; i < 2 * k; ++i)
        {
            /* code */ cout << v1[i] << " ";
        }
        cout << "\n";
        for (int i = 0; i < 2 * k; ++i)
        {
            /* code */ cout << v2[i] << " ";
        }
        cout << "\n";
    }
}