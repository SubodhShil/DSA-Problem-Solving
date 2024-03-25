/*
                            ॐ JAY JAY SRI RAM ॐ

    *
    * Author: Subodh Chandra Shil
    * Tag: Math
    *

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;

void ans()
{
    int a, b, c;
    cin >> a >> b >> c;
    int d = (b * b) - (4 * a * c);
    if (d < 0)
        cout << "No roots\n";
    else if (d == 0)
        cout << "One root: " << ((-1 * b) / (2 * a)) << endl;
    else
    {
        int smaller = ((-1 * b) - sqrt(d)) / (2 * a);
        int bigger = ((-1 * b) + sqrt(d)) / (2 * a);
        if (smaller > bigger)
            swap(smaller, bigger);
        cout << "Two roots: " << smaller << " " << bigger << endl;
    }
}

int32_t main()
{
    int t = 1;
    while (t--)
        ans();

    return 0;
}