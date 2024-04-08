#include <bits/stdc++.h>
using namespace std;

void ans()
{
    int n, m;
    cin >> n >> m;

    int a[n]{0}, b[m]{0}, c[n + m]{0};
    int i = 0;
    for(; i < n; ++i) cin >> a[i], c[i] = a[i];
    for(int j = 0; j < m; ++j) cin >> b[j], c[i + j] = b[j];

    sort(c, c + m + n);
    unordered_map<int, int> ump;
    for(int i = 0; i < n + m; ++i)
    {
        // cout << c[i] << ' ';
        ump[c[i]] = i + 1;
    }

    for(int i = 0; i < n; ++i) cout << ump[a[i]] << ' ';
    cout << endl;
    for(int i = 0; i < m; ++i) cout << ump[b[i]] << ' ';
}

int main()
{
    ans();

    return 0;
}