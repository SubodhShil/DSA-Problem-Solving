/*
                            ॐ ॐ
    * https://leetcode.com/problems/koko-eating-bananas/
    * Author: Subodh Chandra Shil
    * Tag: Binary Search
    * ACCEPTED
                            ॐ ॐ
*/

#include <bits/stdc++.h>
using namespace std;

/* Time Complexity: O(n * log(n)) */
class Solution
{
public:
    bool isPossibleSpeed(vector<int> &piles, int givenHour, int speed)
    {
        long long hourForSpeed = 0;
        for (auto i : piles)
        {
            hourForSpeed += ceil((double)i / (double)speed);
        }

        return hourForSpeed <= givenHour;
    }

    int minEatingSpeed(vector<int> &piles, int h)
    {
        int start = 1, end = *max_element(piles.begin(), piles.end());
        int leastSpeed = INT32_MAX;

        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            bool possibleSpeed = isPossibleSpeed(piles, h, mid);
            if (possibleSpeed)
            {
                leastSpeed = min(leastSpeed, mid);
                end = mid - 1;
            }
            else
                start = mid + 1;
        }

        return leastSpeed;
    }
};

int main()
{

    return 0;
}