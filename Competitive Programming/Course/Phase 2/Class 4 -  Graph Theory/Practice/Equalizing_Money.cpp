/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://vjudge.net/problem/lightoj-1263
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k, m, a, b, c;

const int N = 1055;
vector<int> adjList[N];
bool visited[N];
vector<int> money(N);

int person_cnt, total;
void dfs(int u)
{
    visited[u] = true;
    total += money[u];
    ++person_cnt;

    for (auto v : adjList[u])
    {
        if (!visited[v])
            dfs(v);
    }
}

void ans()
{
    cin >> n >> m;

    // things to be cleared
    for (int i = 1; i <= n; ++i)
    {
        visited[i] = 0;
        adjList[i].clear();
    }

    money.clear();

    for (int i = 1; i <= n; ++i)
        cin >> money[i];

    for (int i = 1; i <= m; ++i)
    {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    set<int> mySet;
    for (int i = 1; i <= n; ++i)
    {
        if (!visited[i])
        {
            person_cnt = total = 0;
            dfs(i);

            if (total % person_cnt == 0)
            {
                int eachPerson = total / person_cnt;
                mySet.insert(eachPerson);
            }
            else
            {
                cout << "No\n";
                return;
            }
        }
    }

    if (mySet.size() == 1)
        cout << "Yes\n";
    else
        cout << "No\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;

    for (int i = 1; i <= t; ++i)
    {
        cout << "Case " << i << ": ";
        ans();
    }

    return 0;
}