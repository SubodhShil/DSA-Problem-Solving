/**
 * @file            CN_Reading.cpp
 * @author
 * @date            2023-05-02
 * @resources:      https://leetcode.com/problems/two-sum/
 *                  https://www.codingninjas.com/codestudio/problems/reading_6845742

 */

#include <bits/stdc++.h>
using namespace std;

class Solution1
{
public:
    string read(int n, vector<int> book, int target)
    {
        int i = 0, j = n - 1;
        sort(begin(book), end(book));

        while (i < j)
        {
            int pageSum = book[i] + book[j];
            if (pageSum == target)
                return "YES";
            else if (pageSum < target)
                ++i;
            else
                --j;
        }

        return "NO";
    }
};

class Solution2
{
public:
    string read(int n, vector<int> book, int target)
    {
        map<int, int> mp;

        for (int i = 0; i < n; ++i)
        {
            int findNumber = target - book[i];

            if (mp.find(findNumber) != mp.end())
            {
                return "YES";
            }

            mp[book[i]] = i;
        }

        return "NO";
    }
};

int main()
{

    return 0;
}