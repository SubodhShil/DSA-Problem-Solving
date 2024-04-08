/**
 * @file HE_Xsquare_And_Double_Strings.cpp
 * @author Subodh Chandra Shil
 * @problem_source: https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/xsquare-and-double-strings-1/?purpose=signup&source=problem-page&update=google
 * @date 2023-04-06
 */

#include <bits/stdc++.h>
using namespace std;

/// @solution_way_1: using array as hash table data structure
string isValid(string s)
{
    vector<int> countEvenCharacters(27);

    for (auto i : s)
        countEvenCharacters[i - 'a']++;

    for (auto it : countEvenCharacters)
        if (it > 1)
            return "Yes";

    return "No";
}

/// @solution_way_2: using C++ STL map as hash table data structure

string isValid2(string s)
{
    unordered_map<char, int> storeOccurrences;

    for (char i : s)
    {
        storeOccurrences[i]++;
    }

    for (auto i : storeOccurrences)
        if (i.second > 1)
            return "Yes";

    return "No";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        // cout << isValid(s) << endl;
        cout << isValid2(s) << endl;
    }

    return 0;
}