/**
 * @file        S_Max_Split.cpp
 * @author      Subodh Chandra Shil
 * @link        https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/S?
 */

#include <bits/stdc++.h>
using namespace std;

void ans1()
{
    string str;
    cin >> str;
    int cntL = 0, cntR = 0;
    vector<string> vecStr;
    queue<char> strQu;

    string temp = "";
    for (auto i : str)
    {
        if (strQu.empty())
        {
            if (!temp.empty())
            {
                vecStr.push_back(temp);
                temp = "";
            }
            strQu.push(i);
            temp += i;
        }
        else if (strQu.front() == i)
        {
            temp += i;
            strQu.push(i);
        }
        else if (strQu.front() != i)
        {
            temp += i;
            strQu.pop();
        }
    }
    if (!temp.empty())
        vecStr.push_back(temp);

    cout << vecStr.size() << endl;
    for (auto i : vecStr)
        cout << i << endl;
}

void ans2()
{
    string str;
    cin >> str;
    int n = str.size();
    vector<string> vecStr;

    int cnt = 0;
    int current = str[0];
    string temp = "";
    for (int i = 0; i < n; ++i)
    {
        if (current == str[i])
        {
            temp.push_back(str[i]);
            ++cnt;
        }
        else
        {
            temp.push_back(str[i]);
            --cnt;
        }

        if (!cnt)
        {
            vecStr.push_back(temp);
            temp.clear();
            current = str[i];
        }
    }

    cout << vecStr.size() << endl;
    for (auto i : vecStr)
        cout << i << endl;
}

int main()
{
    // ans1();
    ans2();

    return 0;
}