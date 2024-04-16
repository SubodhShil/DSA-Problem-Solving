/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://codeforces.com/contest/1950/problem/E
    * Author: Subodh Chandra Shil
    * Tag: String

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;

bool checkStr(string real, string temp)
{
    int n = real.size();
    int cnt = 0;
    for (int i = 0; i < n; ++i)
    {
        if (real[i] != temp[i])
            ++cnt;
        if (cnt >= 2)
            return false;
    }

    return cnt <= 1;
}

vector<int> generateDivisors(int n)
{
    vector<int> divisors;
    for (int i = 1; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            divisors.push_back(i);
            if (n / i != i)
                divisors.push_back(n / i);
        }
    }

    sort(divisors.begin(), divisors.end());

    return divisors;
}

void ans()
{
    cin >> n;
    string str;
    cin >> str;

    vector<int> divisors = generateDivisors(n);

    for (auto x : divisors)
    {
        string a = str.substr(0, x), b = str.substr(n - x, x);
        string temp1 = "", temp2 = "";

        for (int i = 1; i <= n / x; ++i)
        {
            temp1 += a;
            temp2 += b;
        }

        if (checkStr(str, temp1) or checkStr(str, temp2))
        {
            cout << x << endl;
            return;
        }
    }
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
        ans();

    return 0;
}