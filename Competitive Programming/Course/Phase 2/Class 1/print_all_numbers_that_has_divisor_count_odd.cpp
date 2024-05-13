/*
                            ॐ JAY JAY SRI RAM ॐ

    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k, m, a, b, c;

void ans()
{
    cin >> n;
    vector<int> result;
    for (int i = 1; i <= n; ++i)
    {
        int current_num_sqrt = sqrt(i);
        if (current_num_sqrt * current_num_sqrt == i)
            result.push_back(i);
    }

    for (auto i : result)
        cout << i << " ";
    cout << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while (t--)
        ans();

    return 0;
}