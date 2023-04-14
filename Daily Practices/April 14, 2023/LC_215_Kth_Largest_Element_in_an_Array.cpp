#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    /// bruteforce solution
    /// time complexity: O(n log n)
    int findKthLargest(vector<int> &nums, int k)
    {
        /// sort the array
        sort(nums.begin(), nums.end(), greater<int>());

        int cnt = 1;
        int ans = 0;
        int i = 0;

        return nums[k - 1];
    }
};

int main()
{
    Solution sol;
    // vector<int> v{3, 2, 1, 5, 6, 4};
    // vector<int> v{3, 2, 3, 1, 2, 4, 5, 5, 6};
    vector<int> v{15, 20, 25, 30, 33, 33, 35};
    cout << sol.findKthLargest(v, 4);

    return 0;
}