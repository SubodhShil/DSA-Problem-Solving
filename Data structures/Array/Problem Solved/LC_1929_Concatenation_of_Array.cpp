#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> getConcatenation(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> result(2 * n, 0);
        for (int i = 0; i < n; ++i)
        {
            result[i] = result[n + i] = nums[i];
        }

        return result;
    }
};

int main()
{

    return 0;
}