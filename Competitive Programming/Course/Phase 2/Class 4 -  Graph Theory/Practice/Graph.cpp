/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://vjudge.net/problem/aizu-alds1_11_a
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k, m, a, b, c;

const int N = 105;
vector<int> adjList[N];
int matrix[N][N];

void ans()
{
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        int u, k;
        cin >> u >> k;

        while (k--)
        {
            int v;
            cin >> v;
            matrix[u][v] = 1;
        }
    }

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            if (j != 1)
                cout << " ";
            cout << matrix[i][j];
        }
        cout << endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while (t--)
        ans();

    return 0;
}