/**
 * @file        CN_Sort_an_array_of_0s_1s_&_2s.cpp
 * @author      Subodh Chandra Shil
 * @date        2023-05-04
 * @resources:  https://www.codingninjas.com/codestudio/problems/sort-an-array-of-0s-1s-and-2s_892977?leftPanelTab=0
 */

#include <bits/stdc++.h>
using namespace std;

class Solution1
{
public:
    void sortArray(vector<int> &arr, int n)
    {
        int cnt0 = 0, cnt1 = 0, cnt2 = 0;

        for (int i = 0; i < n; ++i)
        {
            if (arr[i] == 0)
                ++cnt0;
            else if (arr[i] == 1)
                ++cnt1;
            else
                ++cnt2;
        }

        /// loop to store 0's
        for (int i = 0; i < cnt0; ++i)
            arr[i] = 0;

        /// loop to store 1's
        for (int i = cnt0; i < cnt0 + cnt1; ++i)
            arr[i] = 1;

        /// loop to store 2's
        for (int i = cnt0 + cnt1; i < n; ++i)
            arr[i] = 2;
    }
};

int main()
{
    // vector<int> v{2, 2, 2, 2, 0, 0, 1, 0};
    vector<int> v{2, 0, 1};

    Solution1 sol1;
    sol1.sortArray(v, 8);

    return 0;
}
