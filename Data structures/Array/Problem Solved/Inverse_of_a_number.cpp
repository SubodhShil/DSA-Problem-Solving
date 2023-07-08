/**
 * @file            Inverse_of_a_number.cpp
 * @author          Subodh Chandra Shil
 * @date            2023-05-04
 * @resources:      https://nados.io/question/inverse-of-a-number?zen=true
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void inverseNumber(vector<int> &v)
    {
        int n = v.size();
        unordered_map<int, int> mp;
        int index = 1;

        for (int i = n - 1; i >= 0; --i)
        {
            mp[index++] = v[i];
        }

        vector<int> ans(n);
        for (auto i : mp)
        {
            ans[n - i.second] = i.first;
        }

        for (auto i : ans)
            cout << i << ' ';
    }
};

int main()
{
    // vector<int> v{2, 8, 3, 4, 6, 7, 5, 1};
    vector<int> v{3, 5, 4, 1, 2};
    Solution sol;
    sol.inverseNumber(v);

    return 0;
}