#include <bits/stdc++.h>
using namespace std;

int main()
{
    /// delete all character from a specific index (including the index)
    string s1 = "Alex Murphy";
    s1.erase(4);
    cout << s1 << endl;

    /// delete character within a specific range of index
    string s2 = "ABCDDE";
    s2.erase(3, 1);
    cout << s2 << endl;

    /// replace specific portion of string with other string
    /// .replace() => erase + insert
    string s3 = "I love Krishna";
    s3.replace(6, 1, " and worship Shree ");
    cout << s3 << endl;

    /// adding string without deleting any character
    string s4 = "Show the meaning of life";
    s4.replace(4, 0, " everyone");
    cout << s4 << endl;

    return 0;
}