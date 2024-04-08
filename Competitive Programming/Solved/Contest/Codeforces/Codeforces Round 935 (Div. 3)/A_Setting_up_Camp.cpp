/*
                            ॐ ॐ

    *
    * Author: Subodh Chandra Shil
    * Tag:
    *

                            ॐ ॐ
*/

#include <bits/stdc++.h>
using namespace std;

#define isOddEven(x) (x & 1)
#define clrBit(x, i) (x & (~(1 << i)))
#define kth_bit(x, k) (x >> k) & 1
#define on_kth_bit(x, k) (x | (1 << k))
#define off_kth_bit(x, k) (x & (~(1 << k)))
#define countSetBit(n) __builtin_popcount(i);
#define toggle_kth_bit(x, k) (x ^ (1 << k))
#define is_power_of_two(x)

typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<double> vd;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef vector<pdd> vpdd;
#define yn(ans) printf("%s\n", (ans) ? "Yes" : "No");
template <class T>
bool chmax(T &a, T b)
{
    if (a >= b)
        return false;
    a = b;
    return true;
}
template <class T>
bool chmin(T &a, T b)
{
    if (a <= b)
        return false;
    a = b;
    return true;
}

#define pb push_back
#define qb pop_back
#define pf push_front
#define qf pop_front
#define maxe max_element
#define mine min_element
#define N 1e7
#define int long long
#define endl "\n"

#define superfast                 \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
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

/// iterators
#define itAll(x) for (auto x = s.begin(); x != s.end(); ++x)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

/// for loops
#define fori(x) for (int i = 0; i < x; i++)
#define forj(x) for (int j = 0; j < x; j++)
#define FOR(s, e, t) for (int i = (s); (i) < (e); (i) += (t))
#define REP(i, e) for (int i = 0; i < (e); ++i)
#define REP1(i, s, e) for (int i = (s); i < (e); ++i)
#define RREP(i, e) for (int i = (e); i >= 0; --i)
#define RREP1(i, e, s) for (int i = (e); i >= (s); --i)

#define MOD 1000000007

ll inv(ll i)
{
    if (i == 1)
        return 1;
    return (MOD - ((MOD / i) * inv(MOD % i)) % MOD) % MOD;
}

ll MOD_mul(ll a, ll b)
{
    a = a % MOD;
    b = b % MOD;
    return (((a * b) % MOD) + MOD) % MOD;
}

ll MOD_add(ll a, ll b)
{
    a = a % MOD;
    b = b % MOD;
    return (((a + b) % MOD) + MOD) % MOD;
}

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

ll ceil_div(ll a, ll b) { return a % b == 0 ? a / b : a / b + 1; }

ll pwr(ll a, ll b)
{
    a %= MOD;
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}

ll inf = 1e18;
// #define DEBUG                 \
//     printf("%d\n", __LINE__); \
//     fflush(stdout);
template <class T>
void print(vector<T> &v, bool withSize)
{
    if (withSize)
        cout << v.size() << endl;
    REP(i, v.size())
    cout << v[i] << " \n"[i == v.size() - 1];
}

vector<int> v(N);
int a, b, c;

void solve()
{
    cin >> a >> b >> c;
    double x = (b % 3) + (c * 1.0);

    if (b % 3 and (int) x < 3)
    {
        cout << -1 << endl;
        return;
    }

    int ans = a + (b / 3) + ceil(x / 3);
    cout << ans << endl;
}

int32_t main()
{
    superfast

    int t = 1;
    cin >> t;
    while (t--)
        solve();

    return 0;
}