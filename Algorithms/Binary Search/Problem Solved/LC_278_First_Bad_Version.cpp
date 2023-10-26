/*
                            ॐ ॐ
    * https://leetcode.com/problems/first-bad-version/
    * Author: Subodh Chandra Shil
    * Tag: Binary Search
    * ACCEPTED
                            ॐ ॐ
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int firstBadVersion(int n)
    {
        int start = 1, end = n;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (mid - 1 >= 0 && isBadVersion(mid) && !isBadVersion(mid - 1))
                return mid;
            if (!isBadVersion(mid))
                start = mid + 1;
            else
                end = mid - 1;
        }

        return -1;
    }
};

int main()
{

    return 0;
}