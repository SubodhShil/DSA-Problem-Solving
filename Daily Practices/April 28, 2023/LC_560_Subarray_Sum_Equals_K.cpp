#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int subarraySum(vector<int> &a, int k)
    {
    }
};

int main()
{
    // vector<int> v{1, 2, 3};
    // vector<int> v{3, 4, 5, 1, 6};
    // vector<int> v{1, 1, 1, 4, 6, 7, 3};
    vector<int> v{-3, 1, 3, -5};

    Solution sol1;
    cout << sol1.subarraySum(v, -2);

    return 0;
}