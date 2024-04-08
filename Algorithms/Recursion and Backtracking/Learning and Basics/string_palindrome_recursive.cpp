#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s, int size, int start, int end)
{
    //* base case
    if (s[start] != s[end])
        return false;
    if (s == "")
        return false;
    if (size == 1)
        return true;

    //^ solving the single case and recursion will do the rest
    else if (s[start] == s[end])
        isPalindrome(s, size, start + 1, end - 1);

    return true;
}

bool checkPalindrome(string s, int size, int start)
{
    //* base cases

    if (start >= size / 2)
        return true;

    if (s[start] != s[size - start - 1])
        return false;

    return checkPalindrome(s, size, start + 1);
}

int main()
{
    string s = "papa";
    // cout << isPalindrome(s, s.size(), 0, s.size() - 1) << endl;
    cout << checkPalindrome(s, s.size(), 0);

    return 0;
}