#include <bits/stdc++.h>
using namespace std;

void ans()
{
    string str;
    cin >> str;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == ',')
            str[i] = ' ';
        else if (str[i] >= 'a' && str[i] <= 'z')
            /// formula: lowercase (a - z): a - ' ' => 97 - 32 = 65 = 'A'
            str[i] = str[i] - ' ';
        else if (str[i] >= 'A' && str[i] <= 'Z')
            /// formula: uppercase (A - Z): A + ' ' => 65 + 32 = 97 = 'a'
            str[i] = str[i] + ' ';
    }

    cout << str << endl;
}

int main()
{
    ans();

    return 0;
}