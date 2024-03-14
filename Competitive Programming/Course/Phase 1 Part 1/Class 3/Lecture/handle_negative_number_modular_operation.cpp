#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define isModResultSafe(res) ((res) >= 0 && (res) <= MOD)

int main()
{
    int a = 1e9, b = 1e9 + 1, m = 27;
    int x = ((a % m) - (b % m)) % m;

    cout << x << endl; /// -1
    if (x < 0 or !isModResultSafe(x))
        x = (x + m) % m;
    cout << x << endl; /// 26

    return 0;
}