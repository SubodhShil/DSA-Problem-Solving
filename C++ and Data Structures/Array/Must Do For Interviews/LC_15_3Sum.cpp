#include <bits/stdc++.h>
using namespace std;

/// TLE
class Solution1
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        int n = nums.size();
        /// why are you using a vector within a set?
        /// The question already mentioned that, the result must not contain any duplicate triplets. Since that, I'm using the set data structure that truncates duplicate values or objects

        set<vector<int>> st;

        for (int i = 0; i < n; ++i)
        {
            for (int j = i + 1; j < n; ++j)
            {
                for (int k = j + 1; k < n; ++k)
                {
                    if (nums[i] + nums[j] + nums[k] == 0)
                    {
                        vector<int> triplet = {nums[i], nums[j], nums[k]};
                        sort(triplet.begin(), triplet.end());
                        st.insert(triplet);
                    }
                }
            }
        }

        vector<vector<int>> resultTriplets(st.begin(), st.end());
        return resultTriplets;
    }
};

/// better solution - TLE
/// Time Complexity: O(N^2 * log(n))
/// searching in hash map or set is O(log n)
/// Space Complexity: O(2 * N)

class Solution2
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        int n = nums.size();
        set<vector<int>> st;

        for (int i = 0; i < n; ++i)
        {
            /// FUQ: why not using a traditional vector or array?
            /// -> finding values in vector or array requires O(n) complexity whereas set or map has TC O(log n)
            // vector<int> hash;

            /// why are you creating hash set or hash map here
            // set<int> hash;

            /// Instead of using a map I can use unordered_map that has an average time complexity of O(1).
            /// In the worst case scenario when there are multiple hash collisions happens the TC becomes O(n).
            unordered_map<int, int> ump;

            for (int j = i + 1; j < n; ++j)
            {
                int third = -(nums[i] + nums[j]);
                /* if (hash.find(third) != hash.end())
                {
                    vector<int> triplet = {nums[i], nums[j], third};
                    sort(triplet.begin(), triplet.end());
                    st.insert(triplet);
                }
                hash.insert(nums[j]); */

                if (ump.count(third))
                {
                    vector<int> triplet = {nums[i], nums[j], third};
                    sort(triplet.begin(), triplet.end());
                    st.insert(triplet);
                }
                ump[nums[j]]++;
            }
        }

        vector<vector<int>> result(st.begin(), st.end());
        return result;
    }
};

/// Time Complexity: O(n^2 * log n)
/// Space Complexity: O(arr[3])
class Solution3
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        /// Can I spoil the values in the array? Or should I go for copying the array into a new array?
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<vector<int>> result;

        for (int i = 0; i < n; ++i)
        {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            int j = i + 1;
            int k = n - 1;

            while (j < k)
            {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum < 0)
                    ++j;
                else if (sum > 0)
                    --k;
                else
                {
                    vector<int> triplet = {nums[i], nums[j], nums[k]};
                    result.push_back(triplet);
                    ++j, --k;
                    while (j < k && nums[j] == nums[j - 1])
                        ++j;
                    while (j < k && nums[k] == nums[k + 1])
                        --k;
                }
            }
        }

        return result;
    }
};

/* Optimized and best solution */
class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        int target = 0;
        sort(nums.begin(), nums.end());
        set<vector<int>> st;

        for (int i = 0; i < nums.size(); i++)
        {
            int j = i + 1;
            int k = nums.size() - 1;
            while (j < k)
            {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum < target)
                    j++;
                else if (sum > target)
                    k--;
                else
                {
                    st.insert({nums[i], nums[j], nums[k]});
                    j++, k--;
                }
            }
        }

        vector<vector<int>> output(st.begin(), st.end());
        return output;
    }
};

int main()
{
    return 0;
}