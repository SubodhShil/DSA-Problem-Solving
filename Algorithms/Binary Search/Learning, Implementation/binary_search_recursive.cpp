#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n;

class Solution
{
public:
    bool isFound(vector<int> &v, int l, int r, int target)
    {
        if (l > r)
            return false;

        int mid = l + (r - l) / 2;
        if (v[mid] == target)
            return true;
        else if (v[mid] > target)
            return isFound(v, l, mid - 1, target);
        else
            return isFound(v, mid + 1, r, target);
    }

    int search(vector<int> &nums, int target)
    {
        int n = nums.size();
        return isFound(nums, 0, n - 1, target);
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}