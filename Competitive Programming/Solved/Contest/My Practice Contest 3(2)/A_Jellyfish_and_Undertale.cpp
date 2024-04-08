/*
                            ॐ ॐ

    * 
    * Author: Subodh Chandra Shil
    * Tag: 
    ! NOT DONE

                            ॐ ॐ
*/

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define qb pop_back
#define pf push_front
#define qf pop_front
#define maxe max_element
#define mine min_element
#define N 1e7
#define endl "\n"

#define superfast                 \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define int long long
#define yes                    \
    {                          \
        cout << "YES" << endl; \
        return;                \
    }
#define no                    \
    {                         \
        cout << "NO" << endl; \
        return;               \
    }

vector<int> v(N);

void solve()
{
    int a, b, n;
    cin >> a >> b >> n;

    for(int i = 0; i < n; ++i)
    {
        int x; 
        cin >> x;
        if(x >= a) b += a - 1;
        else b += x;
    }

    cout << b << endl;
}

int32_t main()
{
    superfast

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    
    int t = 1; cin >> t;
    while (t--) solve();

    return 0;
}

/*
* Notes :
    ^ If n ≤ 12, the time complexity can be O(n!).
    ^ If n ≤ 25, the time complexity can be O(2n).
    ^ If n ≤ 100, the time complexity can be O(n4).
    ^ If n ≤ 500, the time complexity can be O(n3).
    ^ If n ≤ 104, the time complexity can be O(n2).
    ^ If n ≤ 106, the time complexity can be O(n log n).
    ^ If n ≤ 108, the time complexity can be O(n).
    ^ If n > 108, the time complexity can be O(log n) or O(1).
 */