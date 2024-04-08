#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    int cntOne = 0, cntZero = 0, maxZero = 0;

    for (auto i : str)
    {
        if (i == '1')
        {
            ++cntOne;
            maxZero = max(maxZero, cntZero);
            cntZero = 0;
        }
        else
        {
            ++cntZero;
        }
    }

    maxZero = max(maxZero, cntZero);
    cout << cntOne + maxZero << endl;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
