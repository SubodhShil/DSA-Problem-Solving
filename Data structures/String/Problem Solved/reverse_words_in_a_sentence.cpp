#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string reverseWordsInSentence(string str)
    {
        stringstream ss(str);
        string reverseWord = "";
        string result = "";

        int i = 0;
        while (ss >> reverseWord)
        {
            reverse(begin(reverseWord), end(reverseWord));
            if (i == 0)
                result = reverseWord;
            else
                result = result + ' ' + reverseWord;

            ++i;
        }

        return result;
    }
};

int main()
{
    string str = "Kimi no na wa";

    Solution sol;
    cout << sol.reverseWordsInSentence(str) << endl;

    return 0;
}