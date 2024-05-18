/*
                            ॐ ॐ
    * https://practice.geeksforgeeks.org/problems/anagram-of-string/1
    * Author: Subodh Chandra Shil
    * Tag: String
    * ACCEPTED
                            ॐ ॐ
*/

#include <bits/stdc++.h>
using namespace std;

int remAnagram(string str1, string str2)
{
    unordered_map<char, int> characterCounter;

    for (auto i : str1)
        characterCounter[i]++;

    for (auto i : str2)
        characterCounter[i]--;

    int remain = 0;
    for (auto i : characterCounter)
        remain += abs(i.second);

    return remain;
}
int main()
{

    return 0;
}