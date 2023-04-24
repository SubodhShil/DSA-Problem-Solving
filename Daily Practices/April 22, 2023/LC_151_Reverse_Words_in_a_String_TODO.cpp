#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string reverseWords(string s)
    {
        string word = "";
        vector<string> singleWords;

        // Ignore leading and trailing spaces
        int i = 0, j = s.length() - 1;
        while (s[i] == ' ')
            i++;
        while (s[j] == ' ')
            j--;

        for (; i <= j; ++i)
        {
            if (s[i] == ' ')
            {
                if (word.length() > 0)
                    singleWords.push_back(word);
                word = "";
            }
            else
                word += s[i];
        }

        singleWords.push_back(word);

        s.clear();
        for (int i = singleWords.size() - 1; i >= 0; i--)
        {
            s += singleWords[i];
            if (i > 0)
            {
                s += " ";
            }
        }

        return s;
    }
};

/// using C++ tokenizer stringstream
class Solution2
{
public:
    string reverseWords(string s)
    {
        stringstream ss(s);
        string token = "";
        string result = "";

        while (ss >> token)
        {
            result = token + " " + result;
        }

        return result.substr(0, result.length() - 1);
    }
};

int main()
{

    string quote = "He is She";

    Solution sol;
    cout << sol.reverseWords(quote) << endl;

    return 0;
}