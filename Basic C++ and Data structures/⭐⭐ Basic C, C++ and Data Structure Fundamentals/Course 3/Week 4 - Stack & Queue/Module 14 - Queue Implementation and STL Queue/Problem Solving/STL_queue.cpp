#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> qu;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        qu.push(x);
    }

    /// display
    while (!qu.empty())
    {
        cout << qu.front() << " ";
        qu.pop();
    }

    return 0;
}