#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string reverseVowels(string s)
    {
        int firstPointer = 0;
        int lastPointer = s.size() - 1;

        unordered_map<char, int> mp{
            {'a', 0},
            {'e', 1},
            {'i', 2},
            {'o', 3},
            {'u', 4},
            {'A', 5},
            {'E', 6},
            {'I', 7},
            {'O', 8},
            {'U', 9},
        };

        while (firstPointer <= lastPointer)
        {
            if (mp.count(s[firstPointer]) == 0)
            {
                firstPointer++;
            }
            else if (mp.count(s[lastPointer]) == 0)
            {
                lastPointer--;
            }
            else if (mp.count(s[lastPointer]) && mp.count(s[lastPointer]))
            {
                swap(s[firstPointer++], s[lastPointer--]);
            }
        }

        return s;
    }
};

int main()
{

    return 0;
}