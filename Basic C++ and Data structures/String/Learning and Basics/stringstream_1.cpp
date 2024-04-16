
//^ https://www.geeksforgeeks.org/stringstream-c-applications/

#include <bits/stdc++.h>
using namespace std;

void strings1()
{
    string stNumber = "1011";
    int num = stoi(stNumber) * 2;

    int num2;

    //* making a stringstream object
    stringstream s;
    s << stNumber;
    s >> num2;
    num2 *= 3;
    cout << num2 << endl;
}

void strings2()
{
    //* non-algorithmic approach
    string stWords = "You know I love     you";
    stringstream s;
    s << stWords;
    string word;

    vector<string> v;

    //* count words
    int count = 0;
    while (s >> word)
    {
        // cout << word << endl;
        v.push_back(word);
        count++;
    }

    reverse(v.begin(), v.end());
    for (auto &i : v)
        cout << i << " ";
}

int main()
{
    // strings1();
    strings2();

    return 0;
}