/*
                            ॐ JAY JAY SRI RAM ॐ

    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n;

void lower_bound_f()
{
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;

    int target;
    cin >> target;

    auto it = lower_bound(v.begin(), v.end(), target);
    int value = *it;
    int idx = it - v.begin();
    cout << "Value: " << value << " and index: " << idx << endl;
}

void upper_bound_f()
{
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;

    int target;
    cin >> target;

    auto it = upper_bound(v.begin(), v.end(), target);
    int value = *it;
    int idx = it - v.begin();
    cout << "Value: " << value << " and index: " << idx << endl;
}

void lower_bound_f2()
{
    cin >> n;

    vector<int> v(n + 1, 0);
    for (int i = 1; i <= n; ++i)
        cin >> v[i];

    int target = 0;
    cin >> target;

    cout << "Index: " << lower_bound(v.begin() + 1, v.end(), target) - v.begin() << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while (t--)
        // lower_bound_f();
        // upper_bound_f();
        lower_bound_f2();

    return 0;
}