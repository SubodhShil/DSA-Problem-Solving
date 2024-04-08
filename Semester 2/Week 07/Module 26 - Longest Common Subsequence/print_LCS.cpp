#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    int size1 = s1.size(), size2 = s2.size();
    int dp[size1 + 1][size2 + 2];

    /// base case
    for (int i = 0; i <= size1; ++i)
    {
        for (int j = 0; j <= size2; ++j)
        {
            dp[i][j] = 0;
        }
    }

    /// others
    for (int i = 1; i <= size1; ++i)
    {
        for (int j = 1; j <= size2; ++j)
        {
            if (s1[i - 1] == s2[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }

    /// generating the subsequence string
    string result = "";
    int i = size1, j = size2;
    while (i != 0 && j != 0)
    {
        if (s1[i - 1] == s2[j - 1])
        {
            result += s1[i - 1];
            /// go to the corner
            --i, --j;
        }
        else
        {
            if (dp[i][j - 1] > dp[i - 1][j])
                --j;
            else
                --i;
        }
    }

    reverse(result.begin(), result.end());

    cout << result << endl;

    return 0;
}

/*
----------
Testcase 1
----------

Input:
abdef
adegf

Output:
adef

----------
Testcase 2
----------

Input:
abd
gbad

Output:
ad

----------
Testcase 3
----------

Input:
abccdgceg
zbaccgef

Output:
accge

 */