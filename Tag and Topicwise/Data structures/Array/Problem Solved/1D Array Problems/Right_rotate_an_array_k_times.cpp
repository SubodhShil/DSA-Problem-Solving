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
    void rotateKTimes(vector<int> &v, int k)
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

        v = extraArray;
    }
};

class Solution3
{
public:
    void rotateKTimes(vector<int> &v, int k)
    {
        int size = v.size();
        vector<int> extraArray(size);

        k = k % size;

        for (int i = 0; i < size; i++)
        {
            extraArray[(i + k) % size] = v[i];
        }

        v = extraArray;
    }
};

/// optimal solution
class Solution4
{
public:
    void rotateKTimes(vector<int> &v, int k)
    {
        int n = v.size();

        k = k % n;

        /// reverse last 'k' elements
        reverse(v.begin() + n - k, v.end());

        /// reverse remaining (n - k) elements
        reverse(v.begin(), v.begin() + n - k);

        /// reverse the entire array
        reverse(v.begin(), v.end());
    }
};

void display(vector<int> &v)
{
    for (auto i : v)
        cout << i << ' ';
}

int main()
{
    vector<int> v{1, 2, 3, 7, 13, 20};

    // Solution2 sol2;
    // sol2.rotateKTimes(v, 2);
    // display(v);
    // cout << endl;

    // Solution3 sol3;
    // sol3.rotateKTimes(v, 2);
    // display(v);

    // Solution4 sol4;
    // sol4.rotateKTimes(v, 2);
    // display(v);

    return 0;
}