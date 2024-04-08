//* link: https://leetcode.com/problems/single-number/description/

#include <bits/stdc++.h>
using namespace std;

/// Bruteforce solution
/// Time complexity: O(n * n)
class Solution1
{
public:
    int singleNumber(vector<int> &nums)
    {
        int size = nums.size();

        for (int i = 0; i < size; ++i)
        {
            int counter = 0;
            int currentNumber = nums[i];

            for (int j = 0; j < size; ++j)
            {
                if (nums[j] == currentNumber)
                    ++counter;
            }

            if (counter == 1)
                return currentNumber;
        }

        return -1;
    }
};

/// Better solution
class Solution2
{
public:
    int singleNumber(vector<int> &nums)
    {
        vector<int> v = nums;

        /// sort the array or list
        sort(begin(v), end(v));
        int n = v.size();

        for (int i = 0; i < n;)
        {
            if (v[i] == v[i + 1])
                i += 2;
            else
                return v[i];
        }

        return -1;
    }
};

/// Optimal solution 1: using pre-computation: hashing
/// Drawbacks of hashing array: for very big number of elements
/// it will store unnecessary elements
/// additionally, the hashing array can't store negative numbers
///
class Solution3
{
public:
    int singleNumber(vector<int> &nums)
    {
        int result = 0;

        /// complexity of an ordered map: O(N Log N)
        // map<int, int> countDigitOccurances;

        /// best case of unordered map is O(N)
        unordered_map<int, int> countDigitOccurances;

        for (int i : nums)
            countDigitOccurances[i]++;

        for (auto i : countDigitOccurances)
        {
            if (i.second == 1)
                result = i.first;
        }

        return result;
    }
};

/// Optimal solution 2: using bit manipulation
class Solution4
{
public:
    int singleNumber(vector<int> &nums)
    {
        int ans = 0;
        for (auto i : nums)
            ans ^= i;

        return ans;
    }
};

int main()
{
    // vector<int> nums = {1};
    vector<int> nums = {3, 13, 33, 13, 33, 3, 1, 1, 0};
    // vector<int> nums = {1, 1, 2, 3, 3, 0, 0};

    Solution1 result1;
    cout << result1.singleNumber(nums);

    cout << endl;

    Solution2 result2;
    cout << result2.singleNumber(nums);

    cout << endl;

    Solution3 result3;
    cout << result3.singleNumber(nums);

    cout << endl;

    Solution4 result4;
    cout << result4.singleNumber(nums);

    return 0;
}