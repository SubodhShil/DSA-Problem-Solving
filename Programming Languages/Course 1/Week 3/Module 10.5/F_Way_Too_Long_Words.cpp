/**
 * @file        F_Way_Too_Long_Words.cpp
 * @author      Subodh Chandra Shil
 * @resource:   https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/F
 */

#include <bits/stdc++.h>
using namespace std;

void ans()
{
    string str;
    cin >> str;

    int size = str.size();

    if (size <= 10)
    {
        cout << str << endl;
        return;
    }

    string newStr = "";
    newStr += str[0];
    newStr += to_string(size - 2);
    newStr += str[size - 1];
    cout << newStr << endl;
}

int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
        ans();

    return 0;
}