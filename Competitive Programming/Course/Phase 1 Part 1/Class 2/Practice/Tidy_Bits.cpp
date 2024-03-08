#include <bits/stdc++.h>
using namespace std;

int count_set_bits(int n)
{
    int count = 0;
    for (int i = 0; i < 32; ++i)
    {
        if ((n >> i) & 1)
            ++count;
    }

    return count;
}

void ans()
{
    map<int, priority_queue<int, vector<int>, greater<int>>> mapPQ;
    unsigned n;
    cin >> n;
    int cnt = __builtin_popcount(n);

    while (n--)
    {
        int x = count_set_bits(n);
        mapPQ[x].push(n);
    }

    for (auto i : mapPQ)
    {
        if (i.first == cnt)
        {
            cout << i.second.top() << endl;
            break;
        }
    }
}

// O(n)
void ans2()
{
    unsigned n;
    cin >> n;
    int givenSetbitCount = __builtin_popcount(n);
    for (int i = 1; i <= n; ++i)
    {
        if (__builtin_popcount(i) == givenSetbitCount)
        {
            cout << i << endl;
            break;
        }
    }
}

// O(1)
void ans3()
{
    unsigned n;
    cin >> n;
    int givenSetbitCount = __builtin_popcount(n);
    cout << (1 << givenSetbitCount) - 1 << endl;
}

int main()
{
    int t = 1;
    while (t--)
        ans3();

    return 0;
}