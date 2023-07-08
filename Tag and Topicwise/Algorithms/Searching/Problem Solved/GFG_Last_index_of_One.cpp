/**
 * @file            GFG_Last_index_of_One.cpp
 * @author          Subodh Chandra Shil
 * @date            2023-07-08
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int lastIndex(string s)
    {
        int index = s.find_last_of('1');
        // return (index < s.size()) ? index : -1;
        return index == string::npos ? -1 : index;
    }
};

int main()
{

    return 0;
}