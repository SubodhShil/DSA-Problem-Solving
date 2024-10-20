/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://leetcode.com/problems/encode-and-decode-tinyurl/description/
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k, m, a, b, c;

class Solution
{
public:
    map<string, string> urls;

    string encode(string longUrl)
    {
        int n = longUrl.size();
        int pos = longUrl.find("com") + 3;
        int remainChars = n - pos;

        set<char> stChar;
        for (int i = pos; i < n; ++i)
        {
            if (longUrl[i] != '/')
                stChar.insert(longUrl[i]);
        }

        remainChars += stChar.size();
        string res = to_string(remainChars);

        for (auto item : stChar)
        {
            res += item;
        }

        string shortURL = "http://tinyurl.com/" + res;
        // cout << shortURL << endl;
        urls[shortURL] = longUrl;
        return shortURL;
    }

    string decode(string shortUrl) { return urls[shortUrl]; }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    Solution sol;
    sol.encode("https://leetcode.com/problems/design-tinyurl");

    return 0;
}