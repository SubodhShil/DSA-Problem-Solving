/*
                            ॐ ॐ

    * https://codeforces.com/contest/1896/problem/B
    * Author: Subodh Chandra Shil
    * Tag: Observation
    * ACCEPTED

                            ॐ ॐ
*/

#include <bits/stdc++.h>
using namespace std;

#define isOddEven(x) (x & 1)
#define clrBit(x, i) (x & (~(1 << i)))

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

#define FOR(i, s, e, t) for ((i) = (s); (i) < (e); (i) += (t))
#define REP(i, e) for (int i = 0; i < (e); ++i)
#define REP1(i, s, e) for (int i = (s); i < (e); ++i)
#define RREP(i, e) for (int i = (e); i >= 0; --i)
#define RREP1(i, e, s) for (int i = (e); i >= (s); --i)
#define endl "\n"
#define all(v) v.begin(), v.end()
#define pb push_back
#define qb pop_back
#define pf push_front
#define qf pop_front
#define maxe max_element
#define mine min_element

#define superfast                 \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define int long long
#define yes                    \
    {                          \
        cout << "YES" << endl; \
    }
#define no                    \
    {                         \
        cout << "NO" << endl; \
    }

/// for loops
#define fori(x) for (int i = 0; i < x; ++i)
#define forj(x) for (int j = 0; j < x; ++j)
#define fork(x) for (int k = 1; i <= x; ++k)

/// iterators
#define itAll(x) for (auto x = s.begin(); x != s.end(); ++x)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

int inf = 1e18;
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

// ~ ** ======================================================================== ** //
class Solution
{
public:
    void solve()
    {
        int n, x, y, z; vector<int> v;
        cin >> n;
        string str;
        cin >> str;

        int ans = n - 1;
        int i = 0, j  = n - 1;

        for(int i = 0; i < n; ++i) {
            if(str[i] == 'B') --ans;
            else break;
        }

        for(int i = n - 1; i >= 0; --i)
        {
            if(str[i] == 'A') --ans;
            else break;
        }
        
        cout << ((ans < 0) ? 0 : ans) << endl;
    }
};
// ~ ** ======================================================================== ** //

int32_t main()
{
    Solution op;
    int t;
    cin >> t;
    while (t--)
        op.solve();

    return 0;
}