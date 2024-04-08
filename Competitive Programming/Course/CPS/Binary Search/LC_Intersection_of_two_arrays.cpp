#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector<int> result;

        for (auto element : nums1)
        {
            /// result.size() is an edge case
            if (result.size() and result.back() == element)
                continue;
            if (binary_search(nums2.begin(), nums2.end(), element))
                result.push_back(element);
        }

        return result;
    }
};
int main()
{

    return 0;
}