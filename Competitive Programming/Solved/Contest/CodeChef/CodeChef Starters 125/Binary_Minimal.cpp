#include <bits/stdc++.h>
using namespace std;

void ans()
{
    int n, m;
    cin >> n >> m;
    string str;
    cin >> str;
    int cntOne = 0;

    for (auto i : str)
        if (i == '1')
            ++cntOne;

    if (m >= cntOne)
    {
        for (int i = 1; i <= n - m; ++i)
            cout << "0";
        cout << endl;
    }
    else
    {
        for (int i = 0; i < n; ++i)
        {
            if (m and str[i] == '1')
            {
                --m;
                cout << '0';
            }
            else
                cout << str[i];
        }
        cout << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        ans();

    return 0;
}