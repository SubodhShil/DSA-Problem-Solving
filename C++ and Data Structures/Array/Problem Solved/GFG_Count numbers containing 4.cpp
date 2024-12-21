/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://www.geeksforgeeks.org/problems/count-numbers-containing-43022/1?
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
    bool containsDigit(int n)
    {
        while (n)
        {
            if (n % 10 == 4)
                return true;
            n /= 10;
        }

        return false;
    }

    int countNumberswith4(int n)
    {

        int result = 0;
        for (int i = 1; i <= n; ++i)
        {
            result += containsDigit(i);
        }

        return result;
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}