#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int size1 = s1.size(), size2 = s2.size();
    int totalSize = size1 + size2;
    int dp[size1 + 1][size2 + 1];

    /// base case
    for (int i = 0; i <= size1; ++i)
    {
        for (int j = 0; j <= size2; ++j)
        {
            if (i == 0 || j == 0)
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

    cout << totalSize - dp[size1][size2] << endl;

    return 0;
}

/*
----------
Testcase 1
----------

Input:
peek
eke

Output:
5

----------
Testcase 2
----------

Input:
CKKGCD
KXGXCYD

Output:
9
 */