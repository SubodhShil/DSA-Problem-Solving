#include <bits/stdc++.h>
using namespace std;

void ans()
{
    int attendance, score;
    cin >> attendance >> score;

    if (score < 50 and attendance >= 50)
        cout << "F\n";
    else if (attendance < 50)
        cout << "Z\n";
    else
        cout << "A\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        ans();
}
