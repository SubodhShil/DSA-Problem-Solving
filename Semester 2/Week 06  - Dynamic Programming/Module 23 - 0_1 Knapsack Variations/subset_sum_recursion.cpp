#include <bits/stdc++.h>
using namespace std;

bool subset_sum(int n, int sum, int setArray[])
{
    /// base case
    if (n == 0)
    {
        if (sum == 0)
            return true;
        else
            return false;
    }

    if (sum >= setArray[n - 1])
    {
        bool choice1 = subset_sum(n - 1, sum - setArray[n - 1], setArray);
        bool choice2 = subset_sum(n - 1, sum, setArray);

        return (choice1 || choice2);
    }

    else
        return subset_sum(n - 1, sum, setArray);
}

int main()
{
    int n;
    cin >> n;
    int setArray[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> setArray[i];
    }

    int sum;
    cin >> sum;
    int dp[n + 1][sum + 1];

    cout << subset_sum(n, sum, setArray) << endl;

    return 0;
}