#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s, word;
    getline(cin, s);
    stringstream ss(s);

    bool isRatulExist = false;
    while (ss >> word)
    {
        if (word == "Ratul")
        {
            isRatulExist = true;
        }
    }

    (isRatulExist) ? cout << "YES" : cout << "NO";

    return 0;
}