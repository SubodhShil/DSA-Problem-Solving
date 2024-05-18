#include <bits/stdc++.h>
using namespace std;

class Solution1
{
public:
    string reverseWords(string s)
    {
        string result = "";
        stringstream ss(s);
        string word;

        while (ss >> word)
        {
            reverse(word.begin(), word.end());
            result = result + word + ' ';
        }

        result.pop_back();

        return result;
    }
};

class Solution
{
public:
    string reverseWords(string s)
    {

        string result = "", word = "";

        for (auto character : s)
        {
            if (character == ' ')
            {
                reverse(word.begin(), word.end());
                result = result + word + ' ';
                word.clear();
            }
            else
                word += character;
        }

        reverse(word.begin(), word.end());
        result += word;
        return result;
    }
};

int main()
{

    return 0;
}