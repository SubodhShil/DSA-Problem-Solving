/*
                            ॐ ॐ

    * https://codeforces.com/problemset/problem/1670/B
    * Author: Subodh Chandra Shil
    * Tag: String
    * ACCEPTED

                            ॐ ॐ
*/

#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

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
#define ll long long
#define yes                    \
    {                          \
        cout << "YES" << endl; \
    }
#define no                    \
    {                         \
        cout << "NO" << endl; \
    }

/// for loops
#define fori(x) for (int i = 0; i < x; i++)
#define forj(x) for (int j = 0; j < x; j++)

/// iterators
#define itAll(x) for (auto x = s.begin(); x != s.end(); ++x)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

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

// ~ ** ======================================================================== ** //
class Solution
{
public:
    void solve()
    {
        bool allChar[300]{0};
        int n, k;
        string str;
        cin >> n >> str >> k;
        char chAr[k];

        for (int i = 0; i < k; ++i)
            cin >> chAr[i], allChar[chAr[i]] = 1;

        int breakPoint = 0, res = 0;
        fori(n)
        {
            if (allChar[str[i]])
                res = max(res, i - breakPoint), breakPoint = i;
        }

        cout << res << endl;
    }
};
// ~ ** ======================================================================== ** //

int main()
{
    superfast;
    Solution op;
    int t;
    cin >> t;
    while (t--)
        op.solve();

    return 0;
}