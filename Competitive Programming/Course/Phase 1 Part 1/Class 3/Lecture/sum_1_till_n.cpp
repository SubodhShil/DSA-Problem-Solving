#include <bits/stdc++.h>
using namespace std;
#define int long long

int n;
void bruteforce()
{
    int sum = 0;
    for (int i = 1; i <= n; ++i)
        sum += i;
    cout << sum << endl;
}

void optimized()
{
    int sum = 1LL * (n / 2) * (n + 1);
    cout << sum << endl;
}

int32_t main()
{

    cin >> n;

    bruteforce();
    optimized();

    #ifndef ONLINE_JUDGE
        cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    #endif

    return 0;
}