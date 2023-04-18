/**
 * @file        2_Right_rotate_an_array_k_times.cpp
 * @author      Subodh Chandra Shil
 * @resources:  https://www.techiedelight.com/right-rotate-an-array-k-times/
 *              https://leetcode.com/problems/rotate-array/description/
 * @date        2023-04-18
 */

#include <bits/stdc++.h>
using namespace std;

/// Bruteforce solution 1
/// time complexity: O(k x n)
/// space complexity: O(1) -> no extra place
/// worst case situation: TLE (Time Limit Exceed)
class Solution1
{
public:
    void rotateKTimes(vector<int> v, int k)
    {
        int n = v.size();

        /// shift element to the right by 'k' positions
        for (int i = 1; i <= k; i++)
        {
            /// do shift element to the right by one position
            /// preserve the last element
            int lastElement = v[n - 1];

            for (int j = n - 2; j >= 0; j--)
            {
                v[j + 1] = v[j];
            }

            v[0] = lastElement;
        }
    }
};

/// uses extra array space
class Solution2
{
public:
    void rotateKTimes(vector<int> v, int k)
    {
        int size = v.size();

        if (size <= 1)
            return;

        /// edge case: invalid input
        if (k < 0)
            return;

        k = k % size;

        /// taking an extra array
        vector<int> extraArray(size);

        /// shift last 'k' elements to the front of the extra array
        for (int i = 0; i < k; i++)
        {
            extraArray[i] = v[size - k + i];
        }

        /// shift first (n - k) elements to the end of the extra array
        for (int i = k; i <= (size - k) + 1; i++)
        {
            extraArray[i] = v[i - k];
        }

        for (int i = 0; i < extraArray.size(); i++)
            cout << extraArray[i] << " ";
    }
};

class Solution3
{
public:
};

int main()
{
    vector<int> v{1, 2, 3, 7, 13, 20};
    Solution2 sol2;
    sol2.rotateKTimes(v, 2);

    return 0;
}