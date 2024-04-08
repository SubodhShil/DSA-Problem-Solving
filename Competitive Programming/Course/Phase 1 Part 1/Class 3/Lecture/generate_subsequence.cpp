#include <bits/stdc++.h>
using namespace std;

int n, arr[100000];
bool is_taken[100000]{0};
#define endl "\n"

void ans(int pos)
{
    /// base case
    if (pos > n)
    {
        for (int i = 1; i <= n; ++i)
        {
            if (is_taken[i])
                cout << arr[i] << " ";
        }

        cout << endl;
        return;
    }

    // taking
    is_taken[pos] = true;
    ans(pos + 1);

    // not taking
    is_taken[pos] = false;
    ans(pos + 1);
}

int main()
{
    cin >> n;

    for (int i = 1; i <= n; ++i)
        cin >> arr[i];

    ans(1);

    return 0;
}