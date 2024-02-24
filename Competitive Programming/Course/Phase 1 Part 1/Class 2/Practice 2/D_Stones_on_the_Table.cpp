#include <iostream>
#include <cstdio>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <unordered_set>
#include <vector>
#include <algorithm>
#include <sys/time.h>
#include <climits>
#include <cmath>
#include <unordered_map>
#include <list>
#include <functional>
#include <cassert>
#include <memory>
#include <bitset>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define isOddEven(x) (x & 1)           //* if ans is 1 then odd, if 0 then even
#define clrBit(x, i) (x & (~(1 << i))) //* changes set bit at i-th position

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;           // find_by_order, order_of_key //* less => ascending order
typedef tree<int, null_type, greater<int>, rb_tree_tag, tree_order_statistics_node_update> pbds2;       //* greater => descending order
typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> pbds3;    //* less_equal => multiset => duplicates will also be consider
typedef tree<int, null_type, greater_equal<int>, rb_tree_tag, tree_order_statistics_node_update> pbds4; //* greater_equal => multiset => duplicates will also be count

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
#define end "\n"
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

int __FAST_IO__ = []()
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    return 0;
}();

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

// ~ ** ======================================================================== ** //
class Solution
{
public:
    void solve()
    {
        int n, cnt = 0;
        string s;
        cin >> n;
        cin >> s;
        for (int i = 0; i < n; i++)
            if (s[i] == s[i + 1])
                cnt++;

        cout << cnt << end;
    }
};
// ~ ** ======================================================================== ** //

int main()
{
    Solution op;
    op.solve();

    return 0;
}