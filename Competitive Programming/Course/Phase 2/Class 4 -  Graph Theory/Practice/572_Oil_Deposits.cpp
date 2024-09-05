/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://vjudge.net/problem/uva-572
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k, m, a, b, c;

const int N = 1e3 + 9;
bool vis[N][N];
char s[N][N];

// direction array for go all the way to 8 points
int di[] = {0, -1, 0, +1, -1, -1, +1, +1};
int dj[] = {+1, 0, -1, 0, +1, -1, -1, +1};

bool is_valid(int i, int j)
{
    return i >= 0 and i < n and j >= 0 and j < m;
}

void dfs(int i, int j)
{
    vis[i][j] = true;
    if (s[i][j] == '@')
    {
        for (int k = 0; k < 8; ++k)
        {
            int nxt_i = i + di[k];
            int nxt_j = j + dj[k];

            if (!vis[nxt_i][nxt_j] and is_valid(nxt_i, nxt_j))
                dfs(nxt_i, nxt_j);
        }
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    while (cin >> n >> m and n and m)
    {
        for (int i = 0; i < n; ++i)
        {
            cin >> s[i];
        }

        int components = 0;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                if (s[i][j] == '@' and !vis[i][j])
                {
                    dfs(i, j);
                    ++components;
                }
            }
        }

        cout << components << endl;

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                vis[i][j] = 0;
            }
        }
    }

    return 0;
}