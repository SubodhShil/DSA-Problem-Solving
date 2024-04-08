#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int isPalindrome(string S)
    {
        int i = 0, j = S.size() - 1;
        while (i < j)
        {
            if (S[i] != S[j])
                return false;
            ++i, --j;
        }

        return true;
    }
};

int main()
{

    return 0;
}