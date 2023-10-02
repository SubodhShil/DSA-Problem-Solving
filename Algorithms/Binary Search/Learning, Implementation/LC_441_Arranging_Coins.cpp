/**
 * @file        LC_441_Arranging_Coins.cpp
 * @author      Subodh Chandra Shil
 * @link:       https://leetcode.com/problems/arranging-coins/description/
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isSatisfied(long long x, int boundary)
    {
        long long sum = x * (x + 1) / 2;
        return sum <= boundary;
    }

    int arrangeCoins(int n)
    {
        int size = 1;
        int start = 1, end = n;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (!isSatisfied(mid, n))
                end = mid - 1;
            else if (isSatisfied(mid, n))
            {
                size = mid;
                start = mid + 1;
            }
        }

        return size;
    }
};

int main()
{

    return 0;
}