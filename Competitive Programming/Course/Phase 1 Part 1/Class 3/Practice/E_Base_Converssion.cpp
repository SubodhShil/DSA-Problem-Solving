#include <bits/stdc++.h>
using namespace std;

void ans(int n)
{
    if (n == 0)
        return;

    int x = n % 2;
    ans(n / 2);
    cout << x;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ans(n);
        cout << endl;
    }

    return 0;
}