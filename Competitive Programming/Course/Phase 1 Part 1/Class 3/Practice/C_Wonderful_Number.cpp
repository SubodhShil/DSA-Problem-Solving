#include <bits/stdc++.h>
using namespace std;

void ans()
{
    int n;
    cin >> n;
    int digits = log2(n) + 1;
    if (n % 2 == 0)
    {
        cout << "NO\n";
        return;
    }

    // cout << digits << endl;

    // string num = bitset<32>(n).to_string();
    // cout << num << endl;

    int i = 0, j = digits - 1;

    while (i <= j)
    {
        if (((n >> i) & 1) != ((n >> j) & 1))
        {
            cout << "NO\n";
            return;
        }
        ++i, --j;
    }

    cout << "YES\n";
}

int main()
{
    ans();
    return 0;
}