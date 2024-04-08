#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> result;
    void generate(string s, string &str, int idx, int n)
    {
        if (n == idx)
        {
            if (str.size())
                result.push_back(str);
            return;
        }

        // pick
        str.push_back(s[idx]);
        generate(s, str, idx + 1, n);

        // not pick
        str.pop_back();
        generate(s, str, idx + 1, n);
    }

    vector<string> AllPossibleStrings(string s)
    {
        int n = s.size();
        string str;
        generate(s, str, 0, n);
        sort(result.begin(), result.end());

        return result;
    }
};

int main()
{

    return 0;
}