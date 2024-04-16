#include <bits/stdc++.h>
using namespace std;

void ans()
{
    string s1, s2;
    cin >> s1 >> s2;

    cout << s1.size() << " " << s2.size() << endl;

    cout << (s1 + s2) << endl;

    char ch1 = s1[0], ch2 = s2[0];
    s1[0] = ch2;
    s2[0] = ch1;

    cout << s1 << " " << s2 << endl;
}

int main()
{

    ans();

    return 0;
}