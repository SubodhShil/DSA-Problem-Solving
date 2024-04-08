/*
 * Link 1:  https://www.codingninjas.com/codestudio/problems/aggressive-cows_1082559
 * Link 2:  https://practice.geeksforgeeks.org/problems/aggressive-cows/1
 */

#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> &stalls, int k, int mid)
{
    /// start placing with the first cow
    int cowCount = 1;
    /// first cow should be place in
    /// the first co-ordinate or position
    int lastPos = stalls[0];

    for (int i = 1; i < stalls.size(); i++)
    {
        if (stalls[i] - lastPos >= mid)
        {
            cowCount++;
            if (cowCount == k)
                return true;

            lastPos = stalls[i];
        }
    }

    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    /// distance must be parallel, otherwise difference
    /// could lead to negative value
    sort(stalls.begin(), stalls.end());

    int start = 0, end = stalls[stalls.size() - 1];
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (isPossible(stalls, k, mid))
        {
            /// @dev store mid value to ans
            /// satisfied mid value could be a possible answer
            ans = mid;

            /**
             * @brief
             * question says largest minimum distance
             * you have to arrang cows in a way that, minimum distance
             * between two cows should be maximum
             * suppose you've arrange cows in 5 different ways
             * for each arragnment we will take the minimum and among all
             * 5 arrangements the maximum value would be result
             * @implements go right if cows doesn't maintain aggressiveness enough distance

             * @logic going left can't be an option being cows from getting aggressive since
             * the bigger and right value can't save from aggressive
             */
            start = mid + 1;
        }
        else
        {
            /// going right after the statisfied distance value (mid) would bigger distance
            /// as per question says, for each arrangement cows should maintain a minimum value
            /// that's why go left
            end = mid - 1;
        }
    }

    return ans;
}

int main()
{

    return 0;
}