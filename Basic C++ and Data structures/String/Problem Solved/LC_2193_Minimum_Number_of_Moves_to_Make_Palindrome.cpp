/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://leetcode.com/problems/minimum-number-of-moves-to-make-palindrome/description/
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k, m, a, b, c;

class Solution
{
public:
    int minMovesToMakePalindrome(string s)
    {
        int n = s.size();
        int left = 0, right = n - 1;
        int moves = 0;
        while (left < right)
        {
            // until meet the same character as left from right of the string
            int start = left, end = right;

            while (s[start] != s[end])
                --end;

            // if hits the middle character
            if (start == end)
            {
                swap(s[start], s[start + 1]);
                ++moves;
                continue;
            }
            else
            {
                while (end < right)
                {
                    swap(s[end], s[end + 1]), ++end, ++moves;
                }
            }
            ++left, --right;
        }

        return moves;
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}