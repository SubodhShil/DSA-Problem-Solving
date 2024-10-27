/*
                            ॐ JAY JAY SRI RAM ॐ

    *
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

class Solution
{
public:
    bool doesAliceWin(string s)
    {
        unordered_map<int, int> ump;

        for (auto i : s)
        {
            if (i == 'a' or i == 'e' or i == 'i' or i == 'o' or i == 'u')
                ump[i]++;
        }

        int n = ump.size(), x = 1;
        bool result = false;

        while (n)
        {
            if (x & 1)
            {
                if (n & 1)
                    return true;
                else
                    n -= (n - 1), result = true;
            }
            else
            {
                if (n % 2 == 0)
                    return false;
                else
                    n -= (n - 1);
            }
        }

        return result;
    }
};

class Solution2
{
public:
    bool doesAliceWin(string s)
    {
        unordered_map<int, int> ump;

        for (auto i : s)
        {
            if (i == 'a' or i == 'e' or i == 'i' or i == 'o' or i == 'u')
                ump[i]++;
        }

        int n = ump.size(), x = 1;
        bool result = false;

        while (n)
        {
            if (x & 1)
            {
                if (n & 1)
                    return true;
                else
                    result = true;
            }
            else if (n % 2 == 0)
                return false;

            n -= (n - 1);
        }

        return result;
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}