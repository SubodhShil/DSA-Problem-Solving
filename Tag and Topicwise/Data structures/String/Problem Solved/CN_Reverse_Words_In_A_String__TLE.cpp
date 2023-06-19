/**
 * @file Reverse_Words_In_A_String.cpp
 * @author Subodh Chandra Shil
 * @link: https://www.codingninjas.com/codestudio/problems/reverse-words_696444?leftPanelTab=0
 * @date 2023-04-04
 * Verdict: TLE
 */

#include <bits/stdc++.h>
using namespace std;

string reverseString(string str)
{
    str += " ";
    int size = str.size();
    vector<string> v;

    string word = "", finalReverseString = "";
    for (int i = 0; i < size; i++)
    {
        if (str[i] == ' ' && str[i + 1] != ' ')
        {
            v.push_back(word);
            word = "";
        }
        else if (str[i] != ' ')
        {
            word += str[i];
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        finalReverseString = v[i] + " " + finalReverseString;
    }

    return finalReverseString;
}

int main()
{
    string s = "Coding      Ninjas     A";
    cout << reverseString(s) << endl;

    return 0;
}