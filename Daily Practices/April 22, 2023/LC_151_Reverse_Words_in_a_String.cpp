#include <bits/stdc++.h>
using namespace std;

class Solution1
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

class Solution3
{
public:
    string reverseWords(string s)
    {
        /// edge case: no character and single character string could not be reversed
        if (s == "" || s.length() == 1)
            return s;

        // Remove leading/trailing whitespaces
        int start = 0, end = s.length() - 1;
        while (start < s.length() && s[start] == ' ')
            start++;
        while (end >= 0 && s[end] == ' ')
            end--;
        s = s.substr(start, end - start + 1);

        // Reverse the words
        string result = "";
        int n = s.length();

        int i = 0;
        while (i < n)
        {
            while (i < n && s[i] == ' ')
                ++i;

            int j = i;
            string word = "";
            while (j < n && s[j] != ' ')
                word += s[j++];

            /// edge case: if the sentence only contains a single word then no need to add any additional spaces to it while
            if (result.length() == 0)
                result += word;
            else
                /// last in first added
                result = word + " " + result;

            i = j + 1;
        }

        return result;
    }
};

class Solution4
{
public:
    string reverseWords(string s)
    {
        string result = "";
        int i = 0, n = s.length();

        while (i < n)
        {
            while (i < n && s[i] == ' ')
                ++i;

            /// to handle trailing spaces
            if (i >= n)
                break;

            int j = i + 1;
            while (j < n && s[j] != ' ')
                ++j;

            string word = s.substr(i, j - i);

            if (result.length() == 0)
                result = word;
            else
                result = word + " " + result;

            i = j + 1;
        }

        return result;
    }
};

int main()
{

    string quote = "   He is     She    ";

    // Solution1 sol1;
    // cout << sol1.reverseWords(quote) << endl;

    Solution4 sol4;
    cout << sol4.reverseWords(quote) << endl;

    return 0;
}