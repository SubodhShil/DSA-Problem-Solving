//* https://leetcode.com/problems/isomorphic-strings/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        int size = s.size();

        //* corner case
        if (size != t.size())
            return 0;

        //* declaring two hashmaps
        map<char, char> s_map, t_map;
        int i = 0;

        while (i < size)
        {
            if (s_map.count(s[i]))
            {
                if (s_map[s[i]] != t[i])
                    return false;
            }
            else if (t_map.count(t[i]))
            {
                if (t_map[t[i]] != s[i])
                    return false;
            }
            else
            {
                s_map[s[i]] = t[i];
                t_map[t[i]] = s[i];
            }

            i++;
        }

        return 1;
    }
};

int main()
{
    Solution sol;
    string s = "egg", t = "add";
    cout << sol.isIsomorphic(s, t);

    return 0;
}

/*
^ Verdict:
* be cautious of while loop increment
* Instead of being so short and difficult to understand, or being one-liner fancy, code should be written so that even inexperienced developers can understand it.
* In a while loop, the increment variable should always be incremented last, away from any inner curly brackets such as inner if, else, and so on.
 */