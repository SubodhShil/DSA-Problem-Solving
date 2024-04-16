#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    vector<int> v(n, 0);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    sort(begin(v), end(v));

    while (q--)
    {
        int start = 0, end = n - 1, target = 0;
        int matchIndex = -1;
        cin >> target;

        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (v[mid] == target)
            {
                matchIndex = mid;
                break;
            }
            else if (v[mid] > target)
                end = mid - 1;
            else
                start = mid + 1;
        }

        if (matchIndex == -1)
            cout << "not found\n";
        else
            cout << "found\n";
    }

    return 0;
}