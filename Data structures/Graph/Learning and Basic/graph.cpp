#include <bits/stdc++.h>
using namespace std;

#define superfast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define yes {cout<<"YES"<<endl;}
#define no {cout<<"NO"<<endl;}

/// for loops
#define fori(x) for( int i = 0; i < x; i++)
#define forj(x) for( int j = 0; j < x; j+b+)

template<typename T>
class Graph
{
public:
    unordered_map<T, list<pair<T, int>>> adjList;
    Graph()
    {
    }

    void add_edge(T n1, T n2, int wt, bool bidir = true)
    {
        adjList[n1].push_back({n2, wt});
        if(bidir)
            adjList[n2].push_back({n1, wt});
    }

    void print()
    {
        for(auto row : adjList)
        {
            cout << row.first << " --> ";
            for(auto i : row.second)    
            {
                cout << "[" << i.first << " (" << i.second << ")]\t";
            }

            cout << endl;
        }
    }
};

int main()
{
    superfast
    Graph<int> g1;
    g1.add_edge(1, 2, 10, 0);
    g1.add_edge(3, 3, 20, 0);
    g1.add_edge(4, 2, 30, 0);
    g1.add_edge(1, 4, 11, 0);
    g1.add_edge(1, 3, 15, 0);
    g1.add_edge(1, 7, 33, 0);
    g1.print();

    return 0;
}