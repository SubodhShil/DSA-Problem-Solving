/*
                            ॐ ॐ
    * https://atcoder.jp/contests/abc322/tasks/abc322_c
    * Author: Subodh Chandra Shil
    * Tag: Array, Implementation
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
#define all(v) v.begin(), v.end()
#define pb push_back
#define qb pop_back
#define pf push_front
#define qf pop_front
#define maxe max_element
#define mine min_element

#define yn(ans) printf("%s\n", (ans) ? "Yes" : "No");

/// Fast IO
#define superfast                 \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

/// for loops
#define fori(x, y) for (int i = x; i < y; i++)
#define forj(x, y) for (int j = x; j <= y; j++)

/// iterators
#define itAll(x) for (auto x = s.begin(); x != s.end(); ++x)
#define rall(x) x.rbegin(), x.rend()

ll inf = 1e18;
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
    void solve1()
    {
        int n, m;
        cin >> n >> m;
        vector<bool> allDays(n + 1, 0);
        vector<int> ans;
        fori(0, m)
        {
            int x;
            cin >> x;
            allDays[x] = 1;
        }

        int lastVisitedDay = n;
        for (int i = n; i >= 1; --i)
        {
            if (allDays[i])
            {
                ans.push_back(0);
                lastVisitedDay = i;
            }
            else
                ans.push_back(abs(lastVisitedDay - i));
        }

        reverse(ans.begin(), ans.end());
        for (auto i : ans)
            cout << i << endl;
    }

    void solve()
    {
        /// Binary Search - lower bound solution
        int n, m;
        cin >> n >> m;
        vector<int> arr(m);
        for (int i = 0; i < m; ++i)
            cin >> arr[i];

        for (int i = 1; i <= n; ++i)
        {
            cout << *lower_bound(arr.begin(), arr.end(), i) - i << endl;
        }
    }
};
// ~ ** ======================================================================== ** //

int main()
{
    Solution op;
    int t = 1;
    while (t--)
    {
        // cout << "Case " << t + 1 << ": ";
        op.solve();
    }

    return 0;
}
