#include <bits/stdc++.h>
using namespace std;

class Palindrome
{
public:
    int reverseNumber(int n, int rev = 0)
    {
        if (n == 0)
            return rev;

        rev = rev * 10 + n % 10;
        return reverseNumber(n / 10, rev);
    }

    bool checkPalindrome(int num)
    {
        return num == reverseNumber(num);
    }
};

int main()
{
    Palindrome sol1;
    // cout << sol1.checkPalindrome(1221);
    cout << sol1.checkPalindrome(37973);
    // cout << sol1.checkPalindrome(123);

    return 0;
}