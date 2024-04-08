#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        if (i == 1)
            cin.ignore();

        string str;

        int curMaxVal = 0;
        string curMaxString;

        getline(cin, str);
        map<string, int> mp;

        stringstream ss(str);
        string word;
        while (ss >> word)
        {
            mp[word]++;
            if (mp[word] > curMaxVal)
            {
                curMaxVal = mp[word];
                curMaxString = word;
            }
        }

        cout << curMaxString << ' ' << curMaxVal << endl;
    }

    return 0;
}
