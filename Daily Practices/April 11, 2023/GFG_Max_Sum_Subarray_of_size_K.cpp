/**
 * @file GFG_Max_Sum_Subarray_of_size_K.cpp
 * @author Subodh Chandra Shil
 * @date 2023-04-11
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long maximumSumSubarray(int K, vector<int> &Arr, int N)
    {
        map<long long, long, greater<long>> hash;
        int result = 0;

        for (int i = 0; i < N; i++)
        {
            hash[Arr[i]]++;
        }

        for (auto &i : hash)
        {
            if (K == 0)
                break;

            result = result + (i.first * i.second);
            K = (K - i.second >= 0) ? K - i.second : 0;
        }

        return result;
    }
};

int main()
{
    Solution sol;
    vector<int> v{30, 50, 30, 60, 70, 60};
    cout << sol.maximumSumSubarray(3, v, 6) << endl;

    return 0;
}