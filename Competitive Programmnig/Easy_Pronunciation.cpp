/**
 * @file            Easy_Pronunciation.cpp
 * @author          Subodh Chandra Shil
 * @date            2023-04-12
 * @problem_tag:    string
 */

#include <bits/stdc++.h>
using namespace std;
#define speed_io ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

void ans()
{
    int n;
    cin >> n;

    int count = 0;
    char str[n + 1];
    cin >> str;

    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            count = 0;
        else
        {
            ++count;
            if (count >= 4)
                break;
        }
    }
    /// this is required for this type of test case
    /// "schassss"
    if (count >= 4)
        cout << "NO\n";
    else
        cout << "YES\n";
}

int main()
{
    speed_io;

    int t;
    cin >> t;
    while (t--)
    {
        ans();
    }

    return 0;
}