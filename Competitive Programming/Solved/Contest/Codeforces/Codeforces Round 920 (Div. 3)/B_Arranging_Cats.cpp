#include <bits/stdc++.h>
using namespace std;

#define superfast                 \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
#define yes                    \
    {                          \
        cout << "YES" << endl; \
    }
#define no                    \
    {                         \
        cout << "NO" << endl; \
    }

/// for loops
#define fori(x) for (int i = 0; i < x; i++)
#define forj(x) for (int j = 0; j < x; j++)

void ans()
{
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    int x = 0, y = 0;

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == '0' && b[i] == '1')
            x++;
        if (a[i] == '1' && b[i] == '0')
            y++;
    }

    cout << max(x, y) << endl;
}

int main()
{
    superfast int tt;
    cin >> tt;
    while (tt--)
    {
        ans();
    }

    return 0;
}