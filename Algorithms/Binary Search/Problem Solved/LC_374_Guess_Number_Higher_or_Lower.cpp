/*
                            ॐ ॐ
    * https://leetcode.com/problems/guess-number-higher-or-lower/
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
    int guessNumber(int n)
    {
        int start = 1, end = n;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (guess(mid) == 0)
                return mid;
            if (guess(mid) == 1)
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