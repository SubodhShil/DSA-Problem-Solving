/*
You will be given an adjacency matrix for a directed graph (index starting from 1) as input.
Now, convert it to an adjacency list and print it.
*/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 10;
int adjMatrix[N][N];
vector<int> adjList[N];
int n;

void toAdjList()
{
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            if (adjMatrix[i][j])
                adjList[i].push_back(j);
        }
    }

    for (int i = 1; i <= n; ++i)
    {
        cout << "List " << i << " : ";
        for (auto j : adjList[i])
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main()
{
    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            cin >> adjMatrix[i][j];
        }
    }

    toAdjList();

    return 0;
}

/// subset of a set is that contains at most all the values of the set or least contains no values at all

/*
----------
Testcase 1
----------

Input
4
0 0 0 1
1 0 0 1
1 1 0 0
0 0 1 0

Ouput
List 1 : 4
List 2 : 1 4
List 3 : 1 2
List 4 : 3

----------
Testcase 2
----------

Input
5
0 0 0 0 0
1 0 0 1 1
1 1 0 1 1
1 1 1 0 0
0 0 1 0 0

Ouput
List 1 : 
List 2 : 1 4 5
List 3 : 1 2 4 5
List 4 : 1 2 3
List 5 : 3
*/
