#include <bits/stdc++.h>
using namespace std;

int stringLen(string str, int *len)
{
    if (str[*len] == '\0')
        return *len;

    (*len)++;
    stringLen(str, len);
}

int main()
{
    int len = 0;
    string s;
    cin >> s;
    stringLen(s, &len);
    cout << "Length of string: " << len << endl;

    return 0;
}
