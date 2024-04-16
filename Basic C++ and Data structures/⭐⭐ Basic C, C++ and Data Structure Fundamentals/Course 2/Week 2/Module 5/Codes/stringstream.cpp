#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    /// seperately print each word
    stringstream ss(s);
    string word;

    while (ss >> word)
    {
        cout << word << endl;
    }

    return 0;
}