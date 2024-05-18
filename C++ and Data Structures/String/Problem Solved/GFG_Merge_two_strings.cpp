/*
                            ॐ ॐ
    * https://practice.geeksforgeeks.org/problems/merge-two-strings2736/1?
    * Author: Subodh Chandra Shil
    * Tag: String
    * ACCEPTED
                            ॐ ॐ
*/

#include <bits/stdc++.h>
using namespace std;

string merge(string S1, string S2)
{
    int i = 0;
    int n1 = S1.size(), n2 = S2.size();
    string result = "";

    for (; i < n1 && i < n2; ++i)
        result = result + S1[i] + S2[i];

    while (i < n1)
        result += S1[i++];

    while (i < n2)
        result += S2[i++];

    return result;
}

int main()
{

    return 0;
}