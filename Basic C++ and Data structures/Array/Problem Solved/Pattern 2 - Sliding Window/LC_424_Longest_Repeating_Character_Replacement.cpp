#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int characterReplacement(string s, int k)
    {
        int n = s.size();
        int l = 0, r = 0, ans = 0;
        int freq[26]{0};

        for (; r < n; ++r)
        {
            freq[s[r] - 'A']++;
            for (; (r - l + 1) - *max_element(freq, freq + 26) > k; ++l)
            {
                freq[s[l] - 'A']--;
            }
            ans = max(ans, r - l + 1);
        }

        return ans;
    }
};

int main()
{

    return 0;
}