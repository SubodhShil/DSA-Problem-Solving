/*
                            ॐ JAY JAY SRI RAM ॐ

    * Author: Subodh Chandra Shil
    * Tag: Testing code snippets

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;

void safePowerInteger()
{
    cin >> n;
    int power = __lg(n);
    cout << power << endl;
}

void safer_SQRT_int_1()
{
    cin >> n;
    int ans = sqrtl(n);
    while (ans * ans <= n)
        ++ans;
    while (ans * ans > n)
        --ans;

    cout << ans << endl;
}

void safer_SQRT_int_2()
{
    cin >> n;
    long double res = exp(log(n) / 2);
    int floorRes = floor(res);

    if (res * res == n)
        cout << res << endl;
    else
        cout << floorRes << endl;
}

int32_t main()
{
    int t = 1;
    cin >> t;
    while (t--)
        // safePowerInteger();
        safer_SQRT_int_1();
    // safer_SQRT_int_2();

    return 0;
}