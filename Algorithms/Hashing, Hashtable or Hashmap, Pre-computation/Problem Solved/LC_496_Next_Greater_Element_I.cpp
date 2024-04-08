#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int nextBig(vector<int> &nums2, int idx, int currentBig)
    {
        for (int i = idx; i < nums2.size(); ++i)
            if (nums2[i] > currentBig)
                return nums2[i];
        return -1;
    }

    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {

        vector<int> result;
        unordered_map<int, int> storeNextGreaterElement;
        int n = nums2.size();

        for (int i = 0; i <= n - 1; ++i)
        {
            storeNextGreaterElement[nums2[i]] = nextBig(nums2, i + 1, nums2[i]);
        }

        for (auto element : nums1)
        {
            result.push_back(storeNextGreaterElement[element]);
        }

        return result;
    }
};

int main()
{

    return 0;
}