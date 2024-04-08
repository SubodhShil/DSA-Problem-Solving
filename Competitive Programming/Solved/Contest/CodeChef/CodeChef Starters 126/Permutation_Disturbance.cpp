/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://www.codechef.com/problems/PERDIS
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;

// Not much optimized
void ans()
{
    cin >> n;
    int arr[n + 1]{0};
    vector<int> storeMatched;
    int cnt = 0;

    for (int i = 1; i <= n; ++i)
    {
        cin >> arr[i];
        if (arr[i] == i)
            storeMatched.push_back(i);
    }

    int size = storeMatched.size();
    for (int i = 0; i < size;)
    {
        if (i == size - 1)
        {
            ++cnt;
            break;
        }

        if (i + 1 < size)
        {
            if (abs(storeMatched[i] - storeMatched[i + 1]) == 1)
                i += 2;
            else
                ++i;
            ++cnt;
        }
    }

    cout << cnt << endl;
}

void optiAns()
{
    cin >> n;
    int cnt = 0;
    vector<int> v(n, 0);
    for (auto &i : v)
        cin >> i;

    for (int i = 0; i < n; ++i)
    {
        if (v[i] == i + 1)
        {
            ++cnt;
            ++i;
        }
    }

    cout << cnt << endl;
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
        // ans();
        optiAns();

    return 0;
}