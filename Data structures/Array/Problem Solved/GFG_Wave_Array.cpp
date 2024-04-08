/**
 * @file        2_GFG_Wave_Array.cpp
 * @author      Subodh Chandra Shil
 * @date        2023-04-29
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void convertToWave(int n, vector<int> &arr)
    {
        for (int i = 0; i < arr.size(); i += 2)
        {
            if (i + 1 < arr.size())
            {
                swap(arr[i], arr[i + 1]);
            }
        }
    }
};

int main()
{
    // vector<int> v{1, 2, 3, 4, 5};
    vector<int> v{2, 4, 7, 8, 9, 10};

    Solution sol;
    sol.convertToWave(6, v);

    return 0;
}