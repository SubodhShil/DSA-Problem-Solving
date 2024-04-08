#include <bits/stdc++.h>
using namespace std;

void printReverse(stringstream &ss)
{
    string word;
    if (ss >> word)
    {
        printReverse(ss);
        cout << word << endl;
    }
}

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);

    printReverse(ss);

    return 0;
}