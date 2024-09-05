/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://vjudge.net/problem/aizu-alds1_11_b
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
bool visited[N];
int discovery_time[N], finish_time[N], current_time;

void dfs(int u)
{
    visited[u] = true;
    ++current_time;
    discovery_time[u] = current_time;
    for (auto v : adjList[u])
    {
        if (!visited[v])
            dfs(v);
    }
    ++current_time;
    finish_time[u] = current_time;
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        int u, k;
        cin >> u >> k;
        for (int i = 1; i <= k; ++i)
        {
            cin >> a;
            adjList[u].push_back(a);
        }

        sort(adjList[u].begin(), adjList[u].end());
    }

    // dfs for all nodes
    for (int i = 1; i <= n; ++i)
    {
        if (!visited[i])
            dfs(i);
    }

    // result
    for (int i = 1; i <= n; ++i)
        cout << i << " " << discovery_time[i] << " " << finish_time[i] << endl;

    return 0;
}