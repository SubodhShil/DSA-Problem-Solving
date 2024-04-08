#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int n, m;
int visited[N];

vector<int> componentMembers;
vector<int> graph[N];

void dfs(int s)
{
    visited[s] = 1;
    componentMembers.push_back(s);

    for (auto i : graph[s])
    {
        if (!visited[i])
        {
            dfs(i);
        }
    }
}

int main()
{
    cin >> n >> m;
    while (m--)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    int cnt_component = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (!visited[i])
        {
            dfs(i);

            /// if question doesn't consider single node as component
            if (componentMembers.size() == 1)
                continue;

            ++cnt_component;
            cout << "Component " << cnt_component << ": ";
            for (auto i : componentMembers)
                cout << i << " ";

            cout << endl;
            componentMembers.clear();
        }
    }

    cout << "Total components: " << cnt_component << endl;

    return 0;
}

/*

Input:
5 2
1 2
3 4

Output:


 */