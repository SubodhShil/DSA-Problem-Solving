#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string str;
    cin >> str;

    string result;

    for (int i = 0, j = n - 1; i <= j; ++i, --j)
    {
        if (str[i] == '0')
            result = '0' + result;
        if (str[i] == '1')
            result = result + '1';
        if (str[j] == '1')
            result = '1' + result;
        if (str[j] == '0')
            result = result + '0';
    }

    cout << result << endl;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
