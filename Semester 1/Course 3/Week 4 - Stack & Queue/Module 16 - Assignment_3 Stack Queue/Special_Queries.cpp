#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;

    queue<string> qu;

    while (q--)
    {
        int n;
        cin >> n;

        if (n == 0)
        {
            string s;
            cin >> s;
            qu.push(s);
        }

        else if (n == 1)
        {
            if (qu.empty())
                cout << "Invalid\n";
            else
            {
                cout << qu.front() << endl;
                qu.pop();
            }
        }
    }

    return 0;
}
