/**
 * @file LC_1979_Find_Greatest_Common_Divisor_of_Array.cpp
 * @author Subodh Chandra Shil
 * @date 2023-03-31
 * @problem_source: https://leetcode.com/problems/find-greatest-common-divisor-of-array/
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    /**
     * @brief
     * gcd(a, b, c) = gcd(a, gcd(b, c))
                    = gcd(gcd(a, b), c)
                    = gcd(gcd(a, c), b)
     * @return int
     */
    int findGCD(vector<int> &nums)
    {
        sort(begin(nums), end(nums));

        int biggestElement = nums[nums.size() - 1];
        int smallestElement = nums[0];

        while (biggestElement && smallestElement)
        {
            biggestElement %= smallestElement;

            swap(biggestElement, smallestElement);
        }

        return biggestElement;
    }
};

int main()
{
    Solution obj1;
    vector<int> vec{3, 3};
    cout << obj1.findGCD(vec) << endl;

    return 0;
}