#include <bits/stdc++.h>
using namespace std;

int dp[100007];

bool isPossible(int x)
{
    if (x == 1)
        return true;
    if (x < 1)
        return false;

    if (dp[x] != -1)
        return dp[x];

    if (x % 2 == 0)
    {
        bool choice1 = isPossible(x - 3);
        bool choice2 = isPossible(x / 2);

        return dp[x] = (choice1 || choice2);
    }
    else
        return dp[x] = isPossible(x - 3);
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x;
        cin >> x;
        int s = 1;

        memset(dp, -1, sizeof(dp));
        if (isPossible(x))
            cout
                << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}