#include <bits/stdc++.h>
using namespace std;

void ans()
{
    string ans;
    string s, x;
    cin >> s >> x;

    int s_size = s.size(), x_size = x.size();
    for (int i = 0; i < s_size; ++i)
    {
        string temp = "";
        if (s[i] == x[0])
        {
            temp.push_back(s[i]);
            for (int j = i + 1; j <= i + x_size - 1; ++j)
            {
                temp.push_back(s[j]);
            }

            if (temp == x)
            {
                s.replace(i, x_size, "$");
            }
        }
    }

    cout << s << endl;
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        ans();
    }

    return 0;
}