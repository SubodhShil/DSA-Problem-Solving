/*
                            ॐ ॐ
    * https://leetcode.com/problems/count-and-say/
    * Author: Subodh Chandra Shil
    * Tag: String
    * ACCEPTED
                            ॐ ॐ
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string countAndSay(int n)
    {
        string lastString = "1";
        for (int i = 2; i <= n; ++i)
        {
            int cnt = 0;
            char currentChar = lastString[0];
            string temp = "";

            for (int j = 0; j < lastString.size(); ++j)
            {
                if (currentChar != lastString[j])
                {
                    temp += (to_string(cnt) + currentChar);
                    currentChar = lastString[j];
                    cnt = 1;
                }
                else
                    ++cnt;
            }

            temp += to_string(cnt) + currentChar;
            lastString = temp;
        }

        return lastString;
    }
};

int main()
{

    return 0;
}