#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n, 0);
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
        }

        map<int, int> mp;
        for (auto i : v)
        {
            mp[i]++;
        }]

        int maxElement = INT32_MIN, maxOccur = INT32_MIN;
        for (auto i : mp)
        {
            if (i.first > maxElement && i.second >= maxOccur)
                maxElement = i.first, maxOccur = i.second;
        }

        cout << maxElement << " " << maxOccur << endl;
    }

    return 0;
}