#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int MissingNumber(vector<int> &arr, int n)
    {
        int totalSumTilln = (n * (n + 1)) / 2;
        int ans = totalSumTilln - accumulate(arr.begin(), arr.end(), 0);
        return ans;
    }
};

int main()
{

    return 0;
}