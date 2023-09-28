#include <bits/stdc++.h>
using namespace std;

int main()
{
    int cnt = 0;
    char ch;
    vector<char> otherChar;

    while (scanf("%c", &ch) != EOF)
    {
        if (ch == 65)
            ++cnt;
    }

    cout << cnt << endl;

    return 0;
}