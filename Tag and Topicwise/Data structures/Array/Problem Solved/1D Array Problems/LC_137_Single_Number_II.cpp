/**
 * @file            2_LC_137_Single_Number_II.cpp
 * @author          Subodh Chandra Shil
 * @date            2023-04-22
 * @resources:
 */

#include <bits/stdc++.h>
using namespace std;

/*
2 -> ---------------------------> 0 0 1 0
2 -> ---------------------------> 0 0 1 0
3 -> ---------------------------> 0 0 1 1
2 -> ---------------------------> 0 0 1 0
3 -> ---------------------------> 0 0 1 1
4 -> ---------------------------> 0 1 0 0
3 -> ---------------------------> 0 0 1 1

Sum of total at every index ----> 0 1 6 3
Taking mod by 3 at every index -> 0 1 0 0 (0%3=0 , 1%3=1 , 6%3=0 , 3%3=0)

 */

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int res = 0;
        for (int i = 0; i < 32; i++)
        {
            int count = 0;
            for (auto num : nums)
            {
                count += (num >> i) & 1;
                cout << "Ite " << i << " num = " << num << " count: " << count << " count % 3 = " << count % 3 << endl;
            }
            cout << "(count % 3) << i is: " << ((count % 3) << i) << "\n ";
            res |= (count % 3) << i;
            cout << "res |= (count % 3) << i => " << res;
            cout << "\n--------------------";
            cout << endl << endl;
        }

        return res;
    }
};

int main()
{
    vector<int> v{2, 2, 3, 2};
    Solution sol;
    cout << sol.singleNumber(v);

    return 0;
}