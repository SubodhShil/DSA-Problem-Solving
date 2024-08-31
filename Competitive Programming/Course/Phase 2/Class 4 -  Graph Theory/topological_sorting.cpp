/*
                            ॐ JAY JAY SRI RAM ॐ

    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k, m, a, b, c;

const int N = 105;
vector<int> g[N];
int indeg[N];
bool visited[N];

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    cin >> n >> m;
    while (m--)
    {
        int u, v;
        cin >> u >> v;
        indeg[v]++;
        g[u].push_back(u);
    }

    vector<int> ans;

    while (ans.size() < n)
    {
        int cur = -1;
        for (int i = 1; i <= n; ++i)
        {
            if (!visited[i] and indeg[i] == 0)
            {
                cur = i;
                break;
            }
        }

        if (cur == -1)
        {
            cout << "Impossible!" << endl;
            return 0;
        }

        visited[cur] = true;
        ans.push_back(cur);

        for (auto v : g[cur])
        {
            indeg[v]--;
        }
    }

    for (auto i : ans)
        cout << i << " ";

    return 0;
}

/*

I/P:

3 3
1 2
2 3
3 1

O/P:

Impossible
 */