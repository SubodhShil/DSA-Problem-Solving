// https://codeforces.com/problemset/problem/1915/D

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

#define pb push_back
#define qb pop_back
#define pf push_front
#define qf pop_front
#define maxe max_element
#define mine min_element
#define endl "\n"

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

/// iterators
#define itAll(x) for (auto x = s.begin(); x != s.end(); ++x)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

/// for loops
#define fori(x) for (int i = 0; i < x; i++)
#define forj(x) for (int j = 0; j < x; j++)
#define FOR(i, s, e, t) for ((i) = (s); (i) < (e); (i) += (t))
#define REP(i, e) for (int i = 0; i < (e); ++i)
#define REP1(i, s, e) for (int i = (s); i < (e); ++i)
#define RREP(i, e) for (int i = (e); i >= 0; --i)
#define RREP1(i, e, s) for (int i = (e); i >= (s); --i)

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
        int n; cin >> n;
        string str; cin >> str;
        vector<int> idx;
        fori(n) if(str[i] == 'a' or str[i] == 'e') idx.push_back(i);

        string res; res += str[0], res += str[1];

        int i = 0, j = 1;
        for(; j < idx.size(); ++i, ++j)
        {
            if(idx[j] - idx[i] - 1 == 2) res += str[idx[i] + 1], res += '.';
            else if(idx[j] - idx[i] - 1 == 1) res += '.';
            res += str[idx[j] - 1], res += str[idx[j]];
        }

        for(int i = idx[j - 1] + 1; i < n; ++i) res += str[i];

        cout << res << "\n";
    }
};
// ~ ** ======================================================================== ** //

int main()
{
    superfast
    Solution op;

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    
    int t = 1;
    cin >> t;
    while (t--)
        op.solve();

    return 0;
}