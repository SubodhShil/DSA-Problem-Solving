#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<int> v{1, 2, 2, 2, 3, 3, 5};
ll target = 3;

long long lowerBoundIndex()
{
    ll n = v.size(), ans = INT64_MAX;
    ll left = 0, right = n - 1;

    while (left <= right)
    {
        ll mid = left + ((right - left) >> 1);

        if (v[mid] >= target)
        {
            ans = min(ans, mid);
            right = mid - 1;
        }
        else
            left = mid + 1;
    }

    return ans;
}

void lowerBound_library()
{
    auto index = distance(v.begin(), lower_bound(v.begin(), v.end(), target));
    cout << "Lower bound index: " << index << endl;
    cout << "Lower bound element: " << v[index] << endl;
}

void upperBound_library()
{
    // 0 based index
    auto index = distance(v.begin(), upper_bound(v.begin(), v.end(), target));
    cout << "Upper bound index: " << index << endl;
    cout << "Upper bound element: " << v[index] << endl;
}

long long upperBoundIndex()
{
    ll n = v.size(), ans = INT64_MIN;
    ll left = 0, right = n - 1;

    while (left <= right)
    {
        ll mid = left + ((right - left) >> 1);

        if (v[mid] <= target)
            left = mid + 1;
        else
        {
            ans = max(ans, mid);
            right = mid - 1;
        }
    }

    return ans;
}

int main()
{
    cout << upperBoundIndex() << endl;
    upperBound_library();
    cout << lowerBoundIndex() << endl;
    lowerBound_library();

    return 0;
}